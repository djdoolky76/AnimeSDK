#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAOKFLDEDBJ.h"
class HPICNGFLLCA;
class LACOFPCJAFI;
class NBHAKGBHPOE;
class OHHPOGMFPBF;
class OJBONJNMGBC;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FBCJBMKPDEH_CTOR_OFFSET UNITYSDK_OFFSET(0x15696920)
#define FBCJBMKPDEH_DPMCKGFPGKO_OFFSET UNITYSDK_OFFSET(0x15696A80)
#define FBCJBMKPDEH_GET_MUTEXNAME_OFFSET UNITYSDK_OFFSET(0x15696CC0)
#define FBCJBMKPDEH_GINEEHJAGBB_OFFSET UNITYSDK_OFFSET(0x15696970)
#define FBCJBMKPDEH_GNNDEKJDPIF_OFFSET UNITYSDK_OFFSET(0x15696BB0)
#define FBCJBMKPDEH_KDONLCELGKG_OFFSET UNITYSDK_OFFSET(0x15696B40)
#define FBCJBMKPDEH_KGKBLKFGIGF_OFFSET UNITYSDK_OFFSET(0x156969C0)
#define FBCJBMKPDEH_SET_MUTEXNAME_OFFSET UNITYSDK_OFFSET(0x15696CD0)

	class FBCJBMKPDEH : public ::NAOKFLDEDBJ
	{
	public:
		::System::String* _MutexName_k__BackingField; // 0x150
		::OJBONJNMGBC* LPCKAJHPMMH; // 0x158
		::System::Void _ctor(::RPG::GameCore::ProjectileData* a1, ::HPICNGFLLCA* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::NBHAKGBHPOE* a5, ::OHHPOGMFPBF* a6, ::LACOFPCJAFI* a7, ::System::Boolean a8, ::RPG::GameCore::NewProjectileConfig* a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::HPICNGFLLCA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::NBHAKGBHPOE*, ::OHHPOGMFPBF*, ::LACOFPCJAFI*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void GINEEHJAGBB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_GINEEHJAGBB_OFFSET))(this, a1);
		}

		::System::Void KGKBLKFGIGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_KGKBLKFGIGF_OFFSET))(this);
		}

		::UnityEngine::GameObject* DPMCKGFPGKO(::RPG::Client::MonoEffect* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_DPMCKGFPGKO_OFFSET))(this, a1);
		}

		::System::Void KDONLCELGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_KDONLCELGKG_OFFSET))(this);
		}

		::System::Void GNNDEKJDPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_GNNDEKJDPIF_OFFSET))(this);
		}

		::System::String* get_MutexName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_GET_MUTEXNAME_OFFSET))(this);
		}

		::System::Void set_MutexName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBCJBMKPDEH_SET_MUTEXNAME_OFFSET))(this, a1);
		}

	};
