#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class AJHEFPNNKKC;
class DPDPDOIKOAG;
namespace RPG::AvatarSystem { class IAvatar; }

#define LEKINEMLMDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB65CEE0)
#define LEKINEMLMDM_NAKFPELKKFG_OFFSET UNITYSDK_OFFSET(0xB65CF90)

	class LEKINEMLMDM : public ::System::Object
	{
	public:
		::DPDPDOIKOAG* MENPDHLEFKC; // 0x10
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x18
		::System::Void _ctor(::AJHEFPNNKKC* a1, ::DPDPDOIKOAG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJHEFPNNKKC*, ::DPDPDOIKOAG*))((::PBYTE)hIl2Cpp + LEKINEMLMDM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* NAKFPELKKFG(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + LEKINEMLMDM_NAKFPELKKFG_OFFSET))(this, a1, a2);
		}

	};
