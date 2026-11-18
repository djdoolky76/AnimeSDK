#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBJLHDAEBGG;
namespace System { class Action; }

#define MBJLHDAEBGG_DJLFGGLLFAF_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B6577A0)
#define MBJLHDAEBGG_DJLFGGLLFAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B657790)

inline static constexpr unsigned int MBJLHDAEBGG_DJLFGGLLFAF_TypeDefinitionIndex = 17061;

class MBJLHDAEBGG_DJLFGGLLFAF : public ::System::Object
{
public:
	::MBJLHDAEBGG* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_DJLFGGLLFAF__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_DJLFGGLLFAF_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
