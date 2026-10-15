#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOACJPEHDKO;
class OJCGAGMLEGN;
class PHCMIJEDENP;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel_Factory; }

#define FOACJPEHDKO_JNPNKBMJIPH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158DD060)
#define FOACJPEHDKO_JNPNKBMJIPH_CTOR_OFFSET UNITYSDK_OFFSET(0x158DD050)

inline static constexpr unsigned int FOACJPEHDKO_JNPNKBMJIPH_TypeDefinitionIndex = 79776;

	class FOACJPEHDKO_JNPNKBMJIPH : public ::System::Object
	{
	public:
		::OJCGAGMLEGN* PMNGGACBHHI; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel_Factory* LFBJDMAFICA; // 0x18
		::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel_Factory* a1, ::OJCGAGMLEGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel_Factory*, ::OJCGAGMLEGN*))((::PBYTE)hIl2Cpp + FOACJPEHDKO_JNPNKBMJIPH_CTOR_OFFSET))(this, a1, a2);
		}

		::FOACJPEHDKO* BPLPBPMEODA(::PHCMIJEDENP* a1)
		{
			return ((::FOACJPEHDKO*(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + FOACJPEHDKO_JNPNKBMJIPH_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
