#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGLMIKHOHFB.h"
namespace RPG::Client { class ActivityModule; }
namespace RPG::Client { class ActivityPanelData; }

#define IGLMIKHOHFB_LCDKJPFDBCB_CTOR_OFFSET UNITYSDK_OFFSET(0x16403600)
#define IGLMIKHOHFB_LCDKJPFDBCB_IEJHCMOPJMJ_OFFSET UNITYSDK_OFFSET(0x16403650)

inline static constexpr unsigned int IGLMIKHOHFB_LCDKJPFDBCB_TypeDefinitionIndex = 61704;

	class IGLMIKHOHFB_LCDKJPFDBCB : public ::IGLMIKHOHFB
	{
	public:
		::System::UInt32 DBIMHPGKEJK; // 0x18
		::System::UInt32 LKCDHHEEJDG; // 0x1C
		::System::Void _ctor(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGLMIKHOHFB_LCDKJPFDBCB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ActivityPanelData* IEJHCMOPJMJ()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLMIKHOHFB_LCDKJPFDBCB_IEJHCMOPJMJ_OFFSET))(this);
		}

	};
