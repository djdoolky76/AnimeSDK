#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_CALCULATEPROGRESSBYMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xD3DB0D0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0xD3DB270)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD3DB010)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xD3DB1F0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xD3DB250)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERICONPATH_OFFSET UNITYSDK_OFFSET(0xD3DB210)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERID_OFFSET UNITYSDK_OFFSET(0xD3DB1D0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDEROUTLINEICONPATH_OFFSET UNITYSDK_OFFSET(0xD3DB230)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xD3DB200)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xD3DB260)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERICONPATH_OFFSET UNITYSDK_OFFSET(0xD3DB220)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERID_OFFSET UNITYSDK_OFFSET(0xD3DB1E0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDEROUTLINEICONPATH_OFFSET UNITYSDK_OFFSET(0xD3DB240)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingDamageSettleInfo_TypeDefinitionIndex = 62824;

	class ChenLingDamageSettleInfo : public ::System::Object
	{
	public:
		::System::String* _SoliderOutlineIconPath_k__BackingField; // 0x10
		::System::String* _SoliderIconPath_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _Progress_k__BackingField; // 0x20
		::System::UInt32 _SoliderID_k__BackingField; // 0x28
		::System::UInt32 _Damage_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CalculateProgressByMaxDamage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_CALCULATEPROGRESSBYMAXDAMAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SoliderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERID_OFFSET))(this);
		}

		::System::Void set_SoliderID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Damage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_DAMAGE_OFFSET))(this);
		}

		::System::Void set_Damage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_DAMAGE_OFFSET))(this, a1);
		}

		::System::String* get_SoliderIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERICONPATH_OFFSET))(this);
		}

		::System::Void set_SoliderIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SoliderOutlineIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDEROUTLINEICONPATH_OFFSET))(this);
		}

		::System::Void set_SoliderOutlineIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDEROUTLINEICONPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Progress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::ChenLingDamageSettleInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingDamageSettleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_COMPARETO_OFFSET))(this, a1);
		}

	};
}
