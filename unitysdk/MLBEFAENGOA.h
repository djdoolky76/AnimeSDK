#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGGCCFOCCBK.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLBEFAENGOA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x17D491C0)
#define MLBEFAENGOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D490B0)
#define MLBEFAENGOA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17D49040)
#define MLBEFAENGOA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D49140)

inline static constexpr unsigned int MLBEFAENGOA_TypeDefinitionIndex = 72405;

class MLBEFAENGOA : public ::FGGCCFOCCBK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBEFAENGOA__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBEFAENGOA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBEFAENGOA_DISPOSE_OFFSET))(this);
	}

	static ::MLBEFAENGOA* COKNIICCODC(::System::Collections::Generic::List_1<::System::String*>*& OMEINMKLDOB, ::System::Collections::Generic::List_1<::System::String*>*& OGLLBJPJKFA)
	{
		return ((::MLBEFAENGOA*(*)(::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + MLBEFAENGOA_COKNIICCODC_OFFSET))(OMEINMKLDOB, OGLLBJPJKFA);
	}
};
