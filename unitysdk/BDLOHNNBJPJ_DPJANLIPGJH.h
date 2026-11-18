#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class LHMFLMGIPJE;

#define BDLOHNNBJPJ_DPJANLIPGJH_GAGGADAHHII_OFFSET UNITYSDK_OFFSET(0x113DBF10)
#define BDLOHNNBJPJ_DPJANLIPGJH_LJJLPOADMDG_OFFSET UNITYSDK_OFFSET(0x113DBF40)
#define BDLOHNNBJPJ_DPJANLIPGJH_OINLLNEEDBL_OFFSET UNITYSDK_OFFSET(0x113DBF20)
#define BDLOHNNBJPJ_DPJANLIPGJH__CTOR_OFFSET UNITYSDK_OFFSET(0x113DBF30)

inline static constexpr unsigned int BDLOHNNBJPJ_DPJANLIPGJH_TypeDefinitionIndex = 88150;

class BDLOHNNBJPJ_DPJANLIPGJH : public ::System::Object
{
public:
	::LHMFLMGIPJE* KBJPABNJOOM; // 0x10
	::Foundation::ViewObject::GroupMemberIdentifier _ANFKJDPFKMC_k__BackingField; // 0x18
	::System::Int32 _FCCHGDJAEMM_k__BackingField; // 0x20

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier HLDBBGGLNKP, ::System::Int32 EMIHPNKBMBF, ::LHMFLMGIPJE* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32, ::LHMFLMGIPJE*))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_DPJANLIPGJH__CTOR_OFFSET))(this, HLDBBGGLNKP, EMIHPNKBMBF, JNLBPMKIFNK);
	}

	::Foundation::ViewObject::GroupMemberIdentifier GAGGADAHHII()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_DPJANLIPGJH_GAGGADAHHII_OFFSET))(this);
	}

	::System::Int32 OINLLNEEDBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_DPJANLIPGJH_OINLLNEEDBL_OFFSET))(this);
	}

	::System::Void LJJLPOADMDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLOHNNBJPJ_DPJANLIPGJH_LJJLPOADMDG_OFFSET))(this);
	}
};
