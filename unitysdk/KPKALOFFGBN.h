#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class EKFMIDBJDIA;
class KDFFHMDFALG;
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class CharacterVisibleComponent; }

#define KPKALOFFGBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C15E0)
#define KPKALOFFGBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5C1350)
#define KPKALOFFGBN_GHAAALIHOKN_OFFSET UNITYSDK_OFFSET(0xB5C1510)
#define KPKALOFFGBN_KPEOBOBLPAG_OFFSET UNITYSDK_OFFSET(0xB5C1480)
#define KPKALOFFGBN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB5C10E0)

inline static constexpr unsigned int KPKALOFFGBN_TypeDefinitionIndex = 57307;

	class KPKALOFFGBN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoMapPoseSwitcher* KEMBAIBGFPD; // 0x18
		::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0x20
		::KDFFHMDFALG* FGNBCPELJEO; // 0x28
		::System::Boolean MLBNILBLHLK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKALOFFGBN_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKALOFFGBN_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKALOFFGBN_DISPOSE_OFFSET))(this);
		}

		::System::Void KPEOBOBLPAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKALOFFGBN_KPEOBOBLPAG_OFFSET))(this);
		}

		::System::Void GHAAALIHOKN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KPKALOFFGBN_GHAAALIHOKN_OFFSET))(this, a1);
		}

	};
