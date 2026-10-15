#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EKFMIDBJDIA;
class GNLNKOGLFPF;
class JPBMKCEONNO_EPHNOAAENFO;
class MNIKFAGNMCJ;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace System { template <typename T> class Action_1; }

#define JPBMKCEONNO_AHKGJFJEJIL_OFFSET UNITYSDK_OFFSET(0xB2AB970)
#define JPBMKCEONNO_COOLOEPLAPI_OFFSET UNITYSDK_OFFSET(0xB2A9B60)
#define JPBMKCEONNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A95C0)
#define JPBMKCEONNO_DPBMKJFMONI_OFFSET UNITYSDK_OFFSET(0xB2AAC80)
#define JPBMKCEONNO_EEEKHIFMBNC_OFFSET UNITYSDK_OFFSET(0xB2AB5D0)
#define JPBMKCEONNO_EKCPIHJOIJE_OFFSET UNITYSDK_OFFSET(0xB2A9FD0)
#define JPBMKCEONNO_ELCMJDDLIMM_OFFSET UNITYSDK_OFFSET(0xB2ABA40)
#define JPBMKCEONNO_FGNCLBALPIF_OFFSET UNITYSDK_OFFSET(0xB2A97D0)
#define JPBMKCEONNO_GAHENAAJOPC_OFFSET UNITYSDK_OFFSET(0xB2AB130)
#define JPBMKCEONNO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB2AA940)
#define JPBMKCEONNO_IBCGEDECHDE_OFFSET UNITYSDK_OFFSET(0xB2AA780)
#define JPBMKCEONNO_IKDNEFDGIPO_OFFSET UNITYSDK_OFFSET(0xB2ABB50)
#define JPBMKCEONNO_JBCCHPLBNMB_OFFSET UNITYSDK_OFFSET(0xB2A9BE0)
#define JPBMKCEONNO_OBJKJGIKJBE_OFFSET UNITYSDK_OFFSET(0xB2AAB40)

inline static constexpr unsigned int JPBMKCEONNO_TypeDefinitionIndex = 57617;

	class JPBMKCEONNO : public ::System::Object
	{
	public:
		::JPBMKCEONNO_EPHNOAAENFO* HGNALMILOFA; // 0x10
		::RPG::GameCore::InfiniteBattleData* KAENBFPDKLJ; // 0x18
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0x20
		::System::Action_1<::GNLNKOGLFPF*>* OBIECPEOECK; // 0x28
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x30
		::System::Boolean DLGFMPNEHGO; // 0x38
		::System::Void _ctor(::RPG::GameCore::BattleInstance* a1, ::MNIKFAGNMCJ* a2, ::System::Action_1<::GNLNKOGLFPF*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::MNIKFAGNMCJ*, ::System::Action_1<::GNLNKOGLFPF*>*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGNCLBALPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_FGNCLBALPIF_OFFSET))(this);
		}

		::System::Void JBCCHPLBNMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_JBCCHPLBNMB_OFFSET))(this);
		}

		::System::Void EKCPIHJOIJE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EKCPIHJOIJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IBCGEDECHDE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_IBCGEDECHDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OBJKJGIKJBE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_OBJKJGIKJBE_OFFSET))(this, a1);
		}

		::System::Void GAHENAAJOPC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GAHENAAJOPC_OFFSET))(this, a1);
		}

		::System::Void EEEKHIFMBNC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EEEKHIFMBNC_OFFSET))(this, a1);
		}

		::System::Void COOLOEPLAPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_COOLOEPLAPI_OFFSET))(this);
		}

		::System::Boolean DPBMKJFMONI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_DPBMKJFMONI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint AHKGJFJEJIL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_AHKGJFJEJIL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ELCMJDDLIMM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_ELCMJDDLIMM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IKDNEFDGIPO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_IKDNEFDGIPO_OFFSET))(this);
		}

	};
