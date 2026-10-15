#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLKEKKDGBAO_EHHAHMPEADF.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/DBENHLHHAJK.h"
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define KLKEKKDGBAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB525940)
#define KLKEKKDGBAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB525150)
#define KLKEKKDGBAO_GBJGAIBJLBB_OFFSET UNITYSDK_OFFSET(0xB5251D0)
#define KLKEKKDGBAO_HPBJLBOKODD_OFFSET UNITYSDK_OFFSET(0xB525820)
#define KLKEKKDGBAO_JMGCAPDFIGJ_OFFSET UNITYSDK_OFFSET(0xB5257C0)
#define KLKEKKDGBAO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB525750)
#define KLKEKKDGBAO_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB524F90)
#define KLKEKKDGBAO_OALPGDIOIFD_OFFSET UNITYSDK_OFFSET(0xB525930)
#define KLKEKKDGBAO_PFNHAMFJBFJ_OFFSET UNITYSDK_OFFSET(0xB525280)
#define KLKEKKDGBAO_TICK_OFFSET UNITYSDK_OFFSET(0xB5256E0)

inline static constexpr unsigned int KLKEKKDGBAO_TypeDefinitionIndex = 56962;

	class KLKEKKDGBAO : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x18
		::UnityEngine::Transform* DMOMBMJBBNP; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* AJBAMNPFGIB; // 0x28
		::RPG::GameCore::GameEntity* DPDJLGOIALF; // 0x30
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x38
		::KLKEKKDGBAO_EHHAHMPEADF ENHJFLBIELP; // 0x40
		::System::Boolean IKCMMJAPKPC; // 0x44
		::System::Boolean MNMOPFJLDCJ; // 0x45
		// static const ::System::String* POPHIILFKAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_DISPOSE_OFFSET))(this);
		}

		::System::Void GBJGAIBJLBB(::DBENHLHHAJK a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBENHLHHAJK))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_GBJGAIBJLBB_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean JMGCAPDFIGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_JMGCAPDFIGJ_OFFSET))(this);
		}

		::System::Void PFNHAMFJBFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_PFNHAMFJBFJ_OFFSET))(this);
		}

		::System::Single HPBJLBOKODD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_HPBJLBOKODD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OALPGDIOIFD()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_OALPGDIOIFD_OFFSET))(this);
		}

	};
