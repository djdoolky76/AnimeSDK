#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCFJBKAFFFF;
namespace System { class Action; }

#define HCFJBKAFFFF_LDNKMLEBBAB_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x16656100)
#define HCFJBKAFFFF_LDNKMLEBBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x166560F0)

inline static constexpr unsigned int HCFJBKAFFFF_LDNKMLEBBAB_TypeDefinitionIndex = 10588;

class HCFJBKAFFFF_LDNKMLEBBAB : public ::System::Object
{
public:
	::HCFJBKAFFFF* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_LDNKMLEBBAB__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_LDNKMLEBBAB_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
