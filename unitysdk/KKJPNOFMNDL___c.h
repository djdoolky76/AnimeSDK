#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KKJPNOFMNDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4CAE50)
#define KKJPNOFMNDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CAE80)
#define KKJPNOFMNDL___C__GETBLOCKGAMEPLAYSUBMISSIONIDS_B__8_0_OFFSET UNITYSDK_OFFSET(0xB4CAE90)
#define KKJPNOFMNDL___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETINTEGRATIONBARDIVISIONLEVELUPRULE_B__10_0_OFFSET UNITYSDK_OFFSET(0xB4CAEF0)
#define KKJPNOFMNDL___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETRESIDENTQUESTIDS_B__14_0_OFFSET UNITYSDK_OFFSET(0xB4CAF50)

inline static constexpr unsigned int KKJPNOFMNDL___c_TypeDefinitionIndex = 80099;

	class KKJPNOFMNDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54370);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54378);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Int32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54380);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKJPNOFMNDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPNOFMNDL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetBlockGameplaySubMissionIDs_b__8_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + KKJPNOFMNDL___C__GETBLOCKGAMEPLAYSUBMISSIONIDS_B__8_0_OFFSET))(this, a1);
		}

		::System::Int32 _RPG_Client_MechCraft_IMechCraftConstantConfigRepository_GetIntegrationBarDivisionLevelUpRule_b__10_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + KKJPNOFMNDL___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETINTEGRATIONBARDIVISIONLEVELUPRULE_B__10_0_OFFSET))(this, a1);
		}

		::System::UInt32 _RPG_Client_MechCraft_IMechCraftConstantConfigRepository_GetResidentQuestIDs_b__14_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + KKJPNOFMNDL___C__RPG_CLIENT_MECHCRAFT_IMECHCRAFTCONSTANTCONFIGREPOSITORY_GETRESIDENTQUESTIDS_B__14_0_OFFSET))(this, a1);
		}

	};
