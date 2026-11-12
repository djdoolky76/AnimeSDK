#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraWorkSettleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD4CC9B0)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4CBF60)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETCHIMERAWORKSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xD4CC050)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMAXDAMAGECHIMERAID_OFFSET UNITYSDK_OFFSET(0xD4CC210)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMAXDAMAGENEWCHIMERAID_OFFSET UNITYSDK_OFFSET(0xD4CC3C0)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMAXKILLCHIMERAID_OFFSET UNITYSDK_OFFSET(0xD4CC7F0)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMINDAMAGECHIMERAID_OFFSET UNITYSDK_OFFSET(0xD4CC640)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xD4CBC00)
#define RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_ISNEWJOINCHIMERAID_OFFSET UNITYSDK_OFFSET(0xD4CC150)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamWorkSettleData_TypeDefinitionIndex = 64892;

	class ChimeraTeamWorkSettleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DeadChimeras; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NewJoinChimeras; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* SurviveChimeras; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraWorkSettleData*>* ChimeraWorkSettleDatas; // 0x28
		::System::Boolean HasDisposed; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkSettleData* GetChimeraWorkSettleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraWorkSettleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETCHIMERAWORKSETTLEDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsNewJoinChimeraID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_ISNEWJOINCHIMERAID_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxDamageChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMAXDAMAGECHIMERAID_OFFSET))(this);
		}

		::System::UInt32 GetMaxDamageNewChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMAXDAMAGENEWCHIMERAID_OFFSET))(this);
		}

		::System::UInt32 GetMinDamageChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMINDAMAGECHIMERAID_OFFSET))(this);
		}

		::System::UInt32 GetMaxKillChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMWORKSETTLEDATA_GETMAXKILLCHIMERAID_OFFSET))(this);
		}

	};
}
