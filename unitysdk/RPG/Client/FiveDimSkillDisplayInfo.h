#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FiveDimSkillDisplayInfo; }

#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x19AD6A70)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x19AD6A60)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_HASSKILL_OFFSET UNITYSDK_OFFSET(0x19AD6AB0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISENABLEDASH_OFFSET UNITYSDK_OFFSET(0x19AD6B50)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISINDASHSTATE_OFFSET UNITYSDK_OFFSET(0x19AD6B70)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x19AD6B30)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLCURRENTCD_OFFSET UNITYSDK_OFFSET(0x19AD6AF0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x19AD6B10)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLTOTALCD_OFFSET UNITYSDK_OFFSET(0x19AD6AD0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_HASSKILL_OFFSET UNITYSDK_OFFSET(0x19AD6AC0)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISENABLEDASH_OFFSET UNITYSDK_OFFSET(0x19AD6B60)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISINDASHSTATE_OFFSET UNITYSDK_OFFSET(0x19AD6B80)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x19AD6B40)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLCURRENTCD_OFFSET UNITYSDK_OFFSET(0x19AD6B00)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x19AD6B20)
#define RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLTOTALCD_OFFSET UNITYSDK_OFFSET(0x19AD6AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimSkillDisplayInfo_TypeDefinitionIndex = 65669;

	class FiveDimSkillDisplayInfo : public ::System::Object
	{
	public:
		::System::Single _SkillCurrentCD_k__BackingField; // 0x10
		::System::Boolean _IsEnableDash_k__BackingField; // 0x14
		::System::Boolean _IsInDashState_k__BackingField; // 0x15
		::System::Boolean _HasSkill_k__BackingField; // 0x16
		::System::Boolean _IsSkillUpgraded_k__BackingField; // 0x17
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::System::Single _SkillTotalCD_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimSkillDisplayInfo* Create()
		{
			return ((::RPG::Client::FiveDimSkillDisplayInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_CREATE_OFFSET))();
		}

		::System::Boolean get_HasSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_HASSKILL_OFFSET))(this);
		}

		::System::Void set_HasSkill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_HASSKILL_OFFSET))(this, a1);
		}

		::System::Single get_SkillTotalCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLTOTALCD_OFFSET))(this);
		}

		::System::Void set_SkillTotalCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLTOTALCD_OFFSET))(this, a1);
		}

		::System::Single get_SkillCurrentCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLCURRENTCD_OFFSET))(this);
		}

		::System::Void set_SkillCurrentCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLCURRENTCD_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSkillUpgraded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISSKILLUPGRADED_OFFSET))(this);
		}

		::System::Void set_IsSkillUpgraded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISSKILLUPGRADED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnableDash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISENABLEDASH_OFFSET))(this);
		}

		::System::Void set_IsEnableDash(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISENABLEDASH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInDashState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_GET_ISINDASHSTATE_OFFSET))(this);
		}

		::System::Void set_IsInDashState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSKILLDISPLAYINFO_SET_ISINDASHSTATE_OFFSET))(this, a1);
		}

	};
}
