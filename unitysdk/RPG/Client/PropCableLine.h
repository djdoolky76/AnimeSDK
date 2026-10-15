#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class KLKMCNOECAL;
class PJFNFMIPGFK;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROPCABLELINE_BJEOOEDGACD_OFFSET UNITYSDK_OFFSET(0xDDF2E90)
#define RPG_CLIENT_PROPCABLELINE_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDF3FC0)
#define RPG_CLIENT_PROPCABLELINE_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF3FA0)
#define RPG_CLIENT_PROPCABLELINE_DDEDKGDOLME_OFFSET UNITYSDK_OFFSET(0xDDF3990)
#define RPG_CLIENT_PROPCABLELINE_GHDEAPHIFJA_OFFSET UNITYSDK_OFFSET(0xDDF3E50)
#define RPG_CLIENT_PROPCABLELINE_IFGIIKEDIEO_OFFSET UNITYSDK_OFFSET(0xDDF3D60)
#define RPG_CLIENT_PROPCABLELINE_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xDDF3EF0)
#define RPG_CLIENT_PROPCABLELINE_INIT_OFFSET UNITYSDK_OFFSET(0xDDF28A0)
#define RPG_CLIENT_PROPCABLELINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDF3E00)
#define RPG_CLIENT_PROPCABLELINE_ONSPAWNCABLELINE_OFFSET UNITYSDK_OFFSET(0xDDF2F70)
#define RPG_CLIENT_PROPCABLELINE_REGISTERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xDDF3380)
#define RPG_CLIENT_PROPCABLELINE_SETGROUPCONTEXT_OFFSET UNITYSDK_OFFSET(0xDDF3200)
#define RPG_CLIENT_PROPCABLELINE_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xDDF2AC0)
#define RPG_CLIENT_PROPCABLELINE_UNINIT_OFFSET UNITYSDK_OFFSET(0xDDF2C30)
#define RPG_CLIENT_PROPCABLELINE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDF3480)

namespace RPG::Client
{
	class PropCableLine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* OJJFCKMJPHM; // 0x18
		::System::String* LEOODONCNEO; // 0x20
		::KLKMCNOECAL* PDCLEDKKCMF; // 0x28
		::KLKMCNOECAL* BBMEEHBFKAA; // 0x30
		::PJFNFMIPGFK* NHLMDKHFPGE; // 0x38
		::System::String* IKCALGMHKMA; // 0x40
		::System::Boolean OEOPMJHNMFC; // 0x48
		::System::Boolean DMNHFGAALCD; // 0x49
		::System::Boolean HLDEJMCGIGO; // 0x4A
		::System::Boolean GMGNKOFOIOH; // 0x4B
		::System::Single FLHOEGBFPJB; // 0x4C
		::System::Single KEFOHBPNPJF; // 0x50
		::System::Single LJBKILGNJCF; // 0x54
		::UnityEngine::Vector3 FOOKCGJIBMM; // 0x58
		::System::Byte _padding0[0x4];
		::System::String* PFMHMCJMPLC; // 0x68
		::System::String* NPNCMJBKOCG; // 0x70
		::RPG::GameCore::GameEntity* _OwnerProp; // 0x78
		::RPG::GameCore::GameEntity* StartProp; // 0x80
		::RPG::GameCore::GameEntity* EndProp; // 0x88
		::System::Single OverriderMoveSpeed; // 0x90
		::System::UInt32 PEEFHNHDBMF; // 0x94
		::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x98
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0xA0
		static ::System::String** StaticGet_GKGGKHMBJMG()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PropCableLine")->GetStaticField(0x60210);
		}

		static ::System::String** StaticGet_GCLBCKJHBOB()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "PropCableLine")->GetStaticField(0x60218);
		}

		static ::System::Int32* StaticGet_AKBPNMEFGAO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PropCableLine")->GetStaticField(0x147F0);
		}

		static ::System::Int32* StaticGet_LJAIFEPKOMG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PropCableLine")->GetStaticField(0x147F4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_UNINIT_OFFSET))(this);
		}

		::System::Void OnSpawnCableline(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_ONSPAWNCABLELINE_OFFSET))(this, a1);
		}

		::System::Void SetGroupContext(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_SETGROUPCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterGroupEvent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_REGISTERGROUPEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void DDEDKGDOLME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_DDEDKGDOLME_OFFSET))(this);
		}

		::System::Void BJEOOEDGACD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_BJEOOEDGACD_OFFSET))(this);
		}

		::System::Void IFGIIKEDIEO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_IFGIIKEDIEO_OFFSET))(this, a1);
		}

		::System::Void GHDEAPHIFJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_GHDEAPHIFJA_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
}
