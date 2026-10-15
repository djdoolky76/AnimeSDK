#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HHCKNGMIAKL;
class KFELGAIGHAP;
namespace RPG::GameCore { class CreateSummonUnit; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JKDPNADLFEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB216A70)
#define JKDPNADLFEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB216B10)
#define JKDPNADLFEB_GLDEHIOBKPB_OFFSET UNITYSDK_OFFSET(0xB216BE0)
#define JKDPNADLFEB_JJNLKPGLJHF_OFFSET UNITYSDK_OFFSET(0xB216D60)
#define JKDPNADLFEB_NNDEDGOMIBE_OFFSET UNITYSDK_OFFSET(0xB217880)
#define JKDPNADLFEB_NOMFMJDEIAN_OFFSET UNITYSDK_OFFSET(0xB2181C0)
#define JKDPNADLFEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB216F00)

	class JKDPNADLFEB
	{
	public:
		::KFELGAIGHAP* OODBJDPKKKF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateSummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateSummonUnit*))((::PBYTE)hIl2Cpp + JKDPNADLFEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDPNADLFEB_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GLDEHIOBKPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDPNADLFEB_GLDEHIOBKPB_OFFSET))(this);
		}

		::System::String* JJNLKPGLJHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDPNADLFEB_JJNLKPGLJHF_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDPNADLFEB_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NOMFMJDEIAN(::HHCKNGMIAKL* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Boolean a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::HHCKNGMIAKL*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + JKDPNADLFEB_NOMFMJDEIAN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NNDEDGOMIBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JKDPNADLFEB_NNDEDGOMIBE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
