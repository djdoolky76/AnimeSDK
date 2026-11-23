#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EA4DA51FCD8EC092__CTOR_OFFSET UNITYSDK_OFFSET(0x4440EC0)

inline static constexpr unsigned int EA4DA51FCD8EC092_TypeDefinitionIndex = 19013;

class EA4DA51FCD8EC092 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* FB7417C7242AC3F4; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* F00B4A1F3345F086; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA4DA51FCD8EC092__CTOR_OFFSET))(this);
	}
};
