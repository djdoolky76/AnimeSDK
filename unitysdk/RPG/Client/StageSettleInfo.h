#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEGGFFOMKI;
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGESETTLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A908CC0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0x1A909140)
#define RPG_CLIENT_STAGESETTLEINFO_GET_HP_OFFSET UNITYSDK_OFFSET(0x1A9091C0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x1A909180)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0x1A9091A0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1A909160)
#define RPG_CLIENT_STAGESETTLEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1A9091E0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x1A909200)
#define RPG_CLIENT_STAGESETTLEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A909100)
#define RPG_CLIENT_STAGESETTLEINFO_GET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0x1A909120)
#define RPG_CLIENT_STAGESETTLEINFO_SET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0x1A909150)
#define RPG_CLIENT_STAGESETTLEINFO_SET_HP_OFFSET UNITYSDK_OFFSET(0x1A9091D0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x1A909190)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0x1A9091B0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1A909170)
#define RPG_CLIENT_STAGESETTLEINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1A9091F0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x1A909210)
#define RPG_CLIENT_STAGESETTLEINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A909110)
#define RPG_CLIENT_STAGESETTLEINFO_SET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0x1A909130)

namespace RPG::Client
{
	inline static constexpr unsigned int StageSettleInfo_TypeDefinitionIndex = 62827;

	class StageSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* _SoliderDamageInfos_k__BackingField; // 0x10
		::System::UInt32 _StageID_k__BackingField; // 0x18
		::System::Boolean _IsTeachingStage_k__BackingField; // 0x1C
		::System::Boolean _IsWin_k__BackingField; // 0x1D
		::System::Boolean _IsFirstPass_k__BackingField; // 0x1E
		::System::Byte _padding0[0x1];
		::System::UInt32 _Hp_k__BackingField; // 0x20
		::System::UInt32 _EarnedPoints_k__BackingField; // 0x24
		::System::UInt32 _TotalWave_k__BackingField; // 0x28
		::System::UInt32 _MaxHp_k__BackingField; // 0x2C
		::System::Void _ctor(::DFEGGFFOMKI* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DFEGGFFOMKI*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_TOTALWAVE_OFFSET))(this);
		}

		::System::Void set_TotalWave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_TOTALWAVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EarnedPoints()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_EARNEDPOINTS_OFFSET))(this);
		}

		::System::Void set_EarnedPoints(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_EARNEDPOINTS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISFIRSTPASS_OFFSET))(this);
		}

		::System::Void set_IsFirstPass(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISFIRSTPASS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTeachingStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISTEACHINGSTAGE_OFFSET))(this);
		}

		::System::Void set_IsTeachingStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISTEACHINGSTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Hp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_HP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* get_SoliderDamageInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET))(this);
		}

		::System::Void set_SoliderDamageInfos(::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET))(this, a1);
		}

	};
}
