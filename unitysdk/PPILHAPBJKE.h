#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvRoguePhotoEntityFaceToPlayer; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PPILHAPBJKE_CTOR_OFFSET UNITYSDK_OFFSET(0xC3821A0)
#define PPILHAPBJKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3821B0)
#define PPILHAPBJKE_FFFFLLOEMFO_OFFSET UNITYSDK_OFFSET(0xC3826D0)
#define PPILHAPBJKE_JABKJGINOMK_OFFSET UNITYSDK_OFFSET(0xC382430)
#define PPILHAPBJKE_KCNNOCNIJKB_OFFSET UNITYSDK_OFFSET(0xC382850)
#define PPILHAPBJKE_MNOBENGLOIE_OFFSET UNITYSDK_OFFSET(0xC382210)
#define PPILHAPBJKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC382390)
#define PPILHAPBJKE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC382330)
#define PPILHAPBJKE_TICK_OFFSET UNITYSDK_OFFSET(0xC3827F0)

inline static constexpr unsigned int PPILHAPBJKE_TypeDefinitionIndex = 52483;

	class PPILHAPBJKE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer*))((::PBYTE)hIl2Cpp + PPILHAPBJKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPILHAPBJKE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPILHAPBJKE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPILHAPBJKE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPILHAPBJKE_TICK_OFFSET))(this, a1);
		}

		::System::Void FFFFLLOEMFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPILHAPBJKE_FFFFLLOEMFO_OFFSET))(this);
		}

		::System::Void MNOBENGLOIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPILHAPBJKE_MNOBENGLOIE_OFFSET))(this);
		}

		::System::Void JABKJGINOMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPILHAPBJKE_JABKJGINOMK_OFFSET))(this, a1);
		}

		::System::Void KCNNOCNIJKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPILHAPBJKE_KCNNOCNIJKB_OFFSET))(this, a1);
		}

	};
