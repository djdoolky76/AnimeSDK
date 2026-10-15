#pragma once
#include "unitysdk/unitysdk.h"
class AGCPAMNLCGN;
class BFHCIFFJNIA;
class JBACCAGFHON;
class LGHPKEAODPH;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BFHCIFFJNIA_BLFCAGFHONK_OFFSET UNITYSDK_OFFSET(0xB163A60)
#define BFHCIFFJNIA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB163370)
#define BFHCIFFJNIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1635E0)
#define BFHCIFFJNIA_DFFHBJHPNJM_OFFSET UNITYSDK_OFFSET(0xB163DB0)
#define BFHCIFFJNIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB163790)
#define BFHCIFFJNIA_FPHMPAEDFIP_OFFSET UNITYSDK_OFFSET(0xB163840)
#define BFHCIFFJNIA_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xB1632C0)
#define BFHCIFFJNIA_GET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0xB163350)
#define BFHCIFFJNIA_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xB1632D0)
#define BFHCIFFJNIA_MOAIMJCKGHP_OFFSET UNITYSDK_OFFSET(0xB163690)
#define BFHCIFFJNIA_OIHFKHNHEKG_OFFSET UNITYSDK_OFFSET(0xB1634B0)
#define BFHCIFFJNIA_SET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0xB163360)

	class BFHCIFFJNIA
	{
	public:
		::JBACCAGFHON* _Services_k__BackingField; // 0x30
		::UnityEngine::Transform* _ViewRoot_k__BackingField; // 0x38
		static ::UnityEngine::Transform** StaticGet_OFMGGMEFGEH()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "BFHCIFFJNIA")->GetStaticField(0x6E3C0);
		}

		::System::Void _ctor(::JBACCAGFHON* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_CTOR_OFFSET))(this, a1, a2);
		}

		::JBACCAGFHON* get_Services()
		{
			return ((::JBACCAGFHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_GET_SERVICES_OFFSET))(this);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_GHDIJCNKKOM_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ViewRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_GET_VIEWROOT_OFFSET))(this);
		}

		::System::Void set_ViewRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_SET_VIEWROOT_OFFSET))(this, a1);
		}

		static ::BFHCIFFJNIA* BPLPBPMEODA(::JBACCAGFHON* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::BFHCIFFJNIA*(*)(::JBACCAGFHON*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* OIHFKHNHEKG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_OIHFKHNHEKG_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* MOAIMJCKGHP()
		{
			return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + BFHCIFFJNIA_MOAIMJCKGHP_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* FPHMPAEDFIP(::RPG::GameCore::LittleGameEntityConfig* a1, ::AGCPAMNLCGN* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_FPHMPAEDFIP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* BLFCAGFHONK(::RPG::GameCore::CakeRaceCellConfig* a1, ::AGCPAMNLCGN* a2)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellConfig*, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_BLFCAGFHONK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* DFFHBJHPNJM()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHCIFFJNIA_DFFHBJHPNJM_OFFSET))(this);
		}

	};
