#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGOHGJOGKHA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15B8C590)
#define KGOHGJOGKHA_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x15B8C6A0)
#define KGOHGJOGKHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B8C4F0)

inline static constexpr unsigned int KGOHGJOGKHA_TypeDefinitionIndex = 52356;

class KGOHGJOGKHA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_DEEKBMNBKPK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KGOHGJOGKHA_TypeDefinitionIndex)->GetStaticField(0x3E4F0);
	}
	// static const ::System::String* FALODBMOCCC; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGOHGJOGKHA__CCTOR_OFFSET))();
	}

	static ::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGOHGJOGKHA_BBOMJDBNHIC_OFFSET))();
	}

	static ::System::String* OMPFLKCBFHF(::System::String* MCOHLHMKLIP)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + KGOHGJOGKHA_OMPFLKCBFHF_OFFSET))(MCOHLHMKLIP);
	}
};
