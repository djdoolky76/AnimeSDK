#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF8535960D737D0F;
namespace System { class String; }

#define A8037B8062B0F231_B680026275AEF5F6_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define A8037B8062B0F231__CTOR_OFFSET UNITYSDK_OFFSET(0x3ED83F0)

inline static constexpr unsigned int A8037B8062B0F231_TypeDefinitionIndex = 15196;

class A8037B8062B0F231 : public ::System::Object
{
public:
	::System::String* A092BD739612F309; // 0x10
	::Il2CppArray<::System::String*>* A245D381204676CF; // 0x18
	::Il2CppArray<::FF8535960D737D0F*>* BAB3E0B501971C2C; // 0x20
	::System::Boolean E854BF6F37BDF33B; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8037B8062B0F231__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::FF8535960D737D0F*>* B680026275AEF5F6()
	{
		return ((::Il2CppArray<::FF8535960D737D0F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A8037B8062B0F231_B680026275AEF5F6_OFFSET))(this);
	}
};
