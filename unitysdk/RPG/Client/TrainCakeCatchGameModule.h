#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
class CHHPHGKNDLK;
class HEAIEBHLCMJ;
class MDEAJLBINBD;
class OFAHLLPMOBO;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_CREATECAT_OFFSET UNITYSDK_OFFSET(0xED24B50)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xED2AA50)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_DESTROYCAT_OFFSET UNITYSDK_OFFSET(0xED24D40)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_EXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0xED2AA30)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xED29D70)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_TAILCONTROLLER_OFFSET UNITYSDK_OFFSET(0xED2AA40)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ISTRAINPARTYFLOOR_OFFSET UNITYSDK_OFFSET(0xED2A950)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0xED293C0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xED29900)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICDESTROY_OFFSET UNITYSDK_OFFSET(0xED2A860)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICINIT_OFFSET UNITYSDK_OFFSET(0xED2A6B0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TICK_OFFSET UNITYSDK_OFFSET(0xED29D80)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TRIGGERENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xED24E90)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xED29620)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xED29E00)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTEND_OFFSET UNITYSDK_OFFSET(0xED2A290)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTSTART_OFFSET UNITYSDK_OFFSET(0xED2A1F0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXREFRESHED_OFFSET UNITYSDK_OFFSET(0xED2A160)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCATGODVISIBILITYCHANGE_OFFSET UNITYSDK_OFFSET(0xED2A0D0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONNPCCREATE_OFFSET UNITYSDK_OFFSET(0xED29E90)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONPROPCREATE_OFFSET UNITYSDK_OFFSET(0xED29F60)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xED29860)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADCHARACTERASSET_OFFSET UNITYSDK_OFFSET(0xED2A3A0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADEXHIBITASSET_OFFSET UNITYSDK_OFFSET(0xED2A5E0)
#define RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xED29B30)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchGameModule_TypeDefinitionIndex = 61507;

	class TrainCakeCatchGameModule : public ::HBCMHADMLOP
	{
	public:
		::HEAIEBHLCMJ* _AssetLoader; // 0x20
		::CHHPHGKNDLK* _CatGodController; // 0x28
		::OFAHLLPMOBO* _TailController; // 0x30
		::RPG::Client::TrainCakeCatchExhibitController* _ExhibitController; // 0x38
		::MDEAJLBINBD* _BoxController; // 0x40
		::Il2CppArray<::System::String*>* _PreloadCharacterIDs; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TICK_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnNpcCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONNPCCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnPropCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONPROPCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnCatGodVisibilityChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCATGODVISIBILITYCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnCakeCatchBoxRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnCakeCatchBoxInteractStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTSTART_OFFSET))(this, a1);
		}

		::System::Void _OnCakeCatchBoxInteractEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__ONCAKECATCHBOXINTERACTEND_OFFSET))(this, a1);
		}

		::System::Void _PreloadAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADASSETS_OFFSET))(this);
		}

		::System::Void _PreloadCharacterAsset(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADCHARACTERASSET_OFFSET))(this, a1);
		}

		::System::Void _PreloadExhibitAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE__PRELOADEXHIBITASSET_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateCat(::RPG::GameCore::NPCDataRow* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::NPCDataRow*, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_CREATECAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DestroyCat(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_DESTROYCAT_OFFSET))(this, a1);
		}

		::System::Void TriggerEntityEvent(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_TRIGGERENTITYEVENT_OFFSET))(this, a1, a2);
		}

		static ::System::Void StaticInit(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICINIT_OFFSET))(a1);
		}

		static ::System::Void StaticDestroy(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_STATICDESTROY_OFFSET))(a1);
		}

		static ::System::Boolean IsTrainPartyFloor(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_ISTRAINPARTYFLOOR_OFFSET))(a1);
		}

		::RPG::Client::TrainCakeCatchExhibitController* get_ExhibitController()
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_EXHIBITCONTROLLER_OFFSET))(this);
		}

		::OFAHLLPMOBO* get_TailController()
		{
			return ((::OFAHLLPMOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHGAMEMODULE_GET_TAILCONTROLLER_OFFSET))(this);
		}

	};
}
