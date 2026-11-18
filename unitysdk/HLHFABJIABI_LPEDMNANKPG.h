#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLHFABJIABI;
namespace System { class Action; }

#define HLHFABJIABI_LPEDMNANKPG_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B7C6A20)
#define HLHFABJIABI_LPEDMNANKPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C6A10)

inline static constexpr unsigned int HLHFABJIABI_LPEDMNANKPG_TypeDefinitionIndex = 15579;

class HLHFABJIABI_LPEDMNANKPG : public ::System::Object
{
public:
	::HLHFABJIABI* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHFABJIABI_LPEDMNANKPG__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HLHFABJIABI_LPEDMNANKPG_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
