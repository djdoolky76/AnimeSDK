#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MechanicThresholdHPMarkData; }

#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E91E400)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91E4B0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E91E500)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E91E4C0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x1E91E520)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1E91E540)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E91E510)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x1E91E530)

namespace RPG::Client
{
	inline static constexpr unsigned int MechanicThresholdHPMarkData_TypeDefinitionIndex = 73663;

	class MechanicThresholdHPMarkData : public ::System::Object
	{
	public:
		::System::Single _FillAmount_k__BackingField; // 0x10
		::RPG::GameCore::ForceKillMarkType _MarkType_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MechanicThresholdHPMarkData* Create(::RPG::GameCore::ForceKillMarkType a1, ::System::Single a2)
		{
			return ((::RPG::Client::MechanicThresholdHPMarkData*(*)(::RPG::GameCore::ForceKillMarkType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_FillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::ForceKillMarkType get_MarkType()
		{
			return ((::RPG::GameCore::ForceKillMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::ForceKillMarkType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceKillMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_SET_MARKTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ForceKillShowType get_ShowType()
		{
			return ((::RPG::GameCore::ForceKillShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATA_GET_SHOWTYPE_OFFSET))(this);
		}

	};
}
