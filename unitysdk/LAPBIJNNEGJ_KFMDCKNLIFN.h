#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAPBIJNNEGJ;
namespace System { class Action; }

#define LAPBIJNNEGJ_KFMDCKNLIFN_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19589800)
#define LAPBIJNNEGJ_KFMDCKNLIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x195894D0)

inline static constexpr unsigned int LAPBIJNNEGJ_KFMDCKNLIFN_TypeDefinitionIndex = 10897;

class LAPBIJNNEGJ_KFMDCKNLIFN : public ::System::Object
{
public:
	::LAPBIJNNEGJ* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_KFMDCKNLIFN__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_KFMDCKNLIFN_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
