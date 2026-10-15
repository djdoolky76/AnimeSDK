#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INGNCPPMOFG.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class EEFMAMCHOMN;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NETWORKMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD9C6C80)
#define RPG_CLIENT_NETWORKMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD9C6CB0)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVEREPLACETEAMCSREQ_B__170_0_OFFSET UNITYSDK_OFFSET(0xD9C6D50)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__183_0_OFFSET UNITYSDK_OFFSET(0xD9C6D80)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__183_1_OFFSET UNITYSDK_OFFSET(0xD9C6DB0)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__363_0_OFFSET UNITYSDK_OFFSET(0xD9C6E40)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__1056_0_OFFSET UNITYSDK_OFFSET(0xD9C6EB0)
#define RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET UNITYSDK_OFFSET(0xD9C6D30)
#define RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET UNITYSDK_OFFSET(0xD9C6CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c_TypeDefinitionIndex = 69371;

	class NetworkManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F440);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F448);
		}

		static ::System::Func_2<::INGNCPPMOFG, ::EEFMAMCHOMN*>** StaticGet___9__363_0()
		{
			return (::System::Func_2<::INGNCPPMOFG, ::EEFMAMCHOMN*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F450);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::APAMFCKFHLL*>** StaticGet___9__183_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::APAMFCKFHLL*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F458);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::APAMFCKFHLL*>** StaticGet___9__183_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::APAMFCKFHLL*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F460);
		}

		static ::System::Func_2<::System::Object*, ::System::Int64>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F468);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__1056_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F470);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::APAMFCKFHLL*>** StaticGet___9__170_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::APAMFCKFHLL*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnGlobalDispatchResponse_b__59_0(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET))(this, a1);
		}

		::System::Int64 _SetRecommandServerByPingAndRegion_b__66_0(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET))(this, a1);
		}

		::APAMFCKFHLL* _SendIdleLiveReplaceTeamCsReq_b__170_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::APAMFCKFHLL*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVEREPLACETEAMCSREQ_B__170_0_OFFSET))(this, a1);
		}

		::APAMFCKFHLL* _SendIdleLiveStartDungeonCsReq_b__183_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::APAMFCKFHLL*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__183_0_OFFSET))(this, a1);
		}

		::APAMFCKFHLL* _SendIdleLiveStartDungeonCsReq_b__183_1(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::APAMFCKFHLL*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__183_1_OFFSET))(this, a1);
		}

		::EEFMAMCHOMN* _SendPVEBattleResultCsReq_b__363_0(::INGNCPPMOFG a1)
		{
			return ((::EEFMAMCHOMN*(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__363_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SendRogueMagicReviveAvatarCsReq_b__1056_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__1056_0_OFFSET))(this, a1);
		}

	};
}
