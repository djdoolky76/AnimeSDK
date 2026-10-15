#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class FKMJCOHPKCG;
class FiveDimRenderingPanelRuntime;
class HADIEBGEOMM;
namespace RPG::Client { class Stage; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::Prop { class AdvMoneyManager_DELHCOPAHMI; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CPJLMLEGGDI_OFFSET UNITYSDK_OFFSET(0xDC199A0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC1AA20)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC17200)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xDC19470)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDC19DE0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xDC169F0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_IAINDOMHOFL_OFFSET UNITYSDK_OFFSET(0xDC1A650)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_INITMANAGER_OFFSET UNITYSDK_OFFSET(0xDC16A80)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_LHDAPNFBHNI_OFFSET UNITYSDK_OFFSET(0xDC1A3A0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_LOGICTICK_OFFSET UNITYSDK_OFFSET(0xDC18910)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_LOICKGGFBNA_OFFSET UNITYSDK_OFFSET(0xDC196F0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xDC1A1E0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xDC19DF0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_PMBOJCNNJME_OFFSET UNITYSDK_OFFSET(0xDC1A260)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_QUERYAPPEAREDMONEY_OFFSET UNITYSDK_OFFSET(0xDC19760)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_SPAWNMONEY_OFFSET UNITYSDK_OFFSET(0xDC18590)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xDC1A220)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager_TypeDefinitionIndex = 78190;

	class AdvMoneyManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* MoneyPrefabPath; // 0x18
		::System::String* SpawnMoneyEffectPath; // 0x20
		::System::String* DisappearMoneyEffectPath; // 0x28
		::System::Single RotateYDegreesPerSecond; // 0x30
		::System::Single GetMoneyRadius; // 0x34
		::System::UInt32 GetMoneyNum; // 0x38
		::UnityEngine::Vector3 InitialOffset; // 0x3C
		::System::Single RenderDelayTime; // 0x48
		::System::Boolean AHPGBHKGELC; // 0x4C
		::System::Byte _padding0[0x3];
		::FiveDimRenderingPanelRuntime* JHBKPBHIJPM; // 0x50
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x58
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* KHCEFJMIEOF; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::HADIEBGEOMM*>*>* CKFIMNAIEOK; // 0x70
		::System::Single NMPFPCFOGMB; // 0x78
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::HashSet_1<::HADIEBGEOMM*>* MKPCJDOMHDL; // 0x80
		::System::Collections::Generic::HashSet_1<::HADIEBGEOMM*>* MHJNPBBEIMJ; // 0x88
		::System::Collections::Generic::List_1<::FKMJCOHPKCG*>* BPDMDKJBGCN; // 0x90
		::System::Collections::Generic::List_1<::FKMJCOHPKCG*>* MIGLKKOKEBI; // 0x98
		::System::Boolean HEEKCAOBMIK; // 0xA0
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::Queue_1<::HADIEBGEOMM*>* BHJBPCBIPPN; // 0xA8
		static ::RPG::Client::Prop::AdvMoneyManager_DELHCOPAHMI** StaticGet_GLOAOBBCPEO()
		{
			return (::RPG::Client::Prop::AdvMoneyManager_DELHCOPAHMI**)UnitySDK::FromName("RPG.Client.Prop", "AdvMoneyManager")->GetStaticField(0x40270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Prop::AdvMoneyManager_DELHCOPAHMI* get_Services()
		{
			return ((::RPG::Client::Prop::AdvMoneyManager_DELHCOPAHMI*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_SERVICES_OFFSET))();
		}

		::System::Void InitManager(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_INITMANAGER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SpawnMoney(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_SPAWNMONEY_OFFSET))(this, a1, a2);
		}

		::System::Void LogicTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_LOGICTICK_OFFSET))(this, a1);
		}

		::System::Void QueryAppearedMoney(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_QUERYAPPEAREDMONEY_OFFSET))(this, a1);
		}

		::System::Void CPJLMLEGGDI(::HADIEBGEOMM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HADIEBGEOMM*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CPJLMLEGGDI_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GameObjectSpawnPriority get_Priority()
		{
			return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void PMBOJCNNJME(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_PMBOJCNNJME_OFFSET))(this, a1);
		}

		::System::Void LHDAPNFBHNI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_LHDAPNFBHNI_OFFSET))(this, a1);
		}

		::RPG::Client::TriggerEffectParams* GetEffectParams(::HADIEBGEOMM* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::HADIEBGEOMM*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_GETEFFECTPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Void IAINDOMHOFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_IAINDOMHOFL_OFFSET))(this, a1);
		}

		::System::Boolean LOICKGGFBNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_LOICKGGFBNA_OFFSET))(this);
		}

	};
}
