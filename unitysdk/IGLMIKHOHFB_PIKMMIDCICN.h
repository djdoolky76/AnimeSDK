#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGLMIKHOHFB.h"
namespace RPG::Client { class ActivityModule; }
namespace RPG::Client { class ActivityPanelData; }

#define IGLMIKHOHFB_PIKMMIDCICN_CTOR_OFFSET UNITYSDK_OFFSET(0x164034F0)
#define IGLMIKHOHFB_PIKMMIDCICN_IEJHCMOPJMJ_OFFSET UNITYSDK_OFFSET(0x164036B0)

inline static constexpr unsigned int IGLMIKHOHFB_PIKMMIDCICN_TypeDefinitionIndex = 61703;

	class IGLMIKHOHFB_PIKMMIDCICN : public ::IGLMIKHOHFB
	{
	public:
		::System::UInt32 LKCDHHEEJDG; // 0x18
		::System::Void _ctor(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + IGLMIKHOHFB_PIKMMIDCICN_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityPanelData* IEJHCMOPJMJ()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLMIKHOHFB_PIKMMIDCICN_IEJHCMOPJMJ_OFFSET))(this);
		}

	};
