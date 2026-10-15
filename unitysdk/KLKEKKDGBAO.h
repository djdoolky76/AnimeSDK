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

#define KLKEKKDGBAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB52C280)
#define KLKEKKDGBAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB52BA90)
#define KLKEKKDGBAO_GBJGAIBJLBB_OFFSET UNITYSDK_OFFSET(0xB52BB10)
#define KLKEKKDGBAO_HPBJLBOKODD_OFFSET UNITYSDK_OFFSET(0xB52C160)
#define KLKEKKDGBAO_JMGCAPDFIGJ_OFFSET UNITYSDK_OFFSET(0xB52C100)
#define KLKEKKDGBAO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB52C090)
#define KLKEKKDGBAO_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB52B8D0)
#define KLKEKKDGBAO_OALPGDIOIFD_OFFSET UNITYSDK_OFFSET(0xB52C270)
#define KLKEKKDGBAO_PFNHAMFJBFJ_OFFSET UNITYSDK_OFFSET(0xB52BBC0)
#define KLKEKKDGBAO_TICK_OFFSET UNITYSDK_OFFSET(0xB52C020)

	class KLKEKKDGBAO : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* AJBAMNPFGIB; // 0x18
		::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x20
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x28
		::UnityEngine::Transform* DMOMBMJBBNP; // 0x30
		::RPG::GameCore::GameEntity* DPDJLGOIALF; // 0x38
		::System::Boolean IKCMMJAPKPC; // 0x40
		::System::Boolean MNMOPFJLDCJ; // 0x41
		::System::Byte _padding0[0x2];
		::KLKEKKDGBAO_EHHAHMPEADF ENHJFLBIELP; // 0x44
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
