#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHGEPOFOLMB;
class HJCHNOIBJCA;
class KMFHBNCPDOE;
class LDLKEEFPGMB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POICJJPPMDA_BAKIJBBMPDI_OFFSET UNITYSDK_OFFSET(0xC3682E0)
#define POICJJPPMDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC367E70)
#define POICJJPPMDA_GBMDLLADMNG_OFFSET UNITYSDK_OFFSET(0xC368190)
#define POICJJPPMDA_HLEMMIIJJHD_OFFSET UNITYSDK_OFFSET(0xC3680E0)
#define POICJJPPMDA_IDOIFKMCEPM_OFFSET UNITYSDK_OFFSET(0xC367F60)
#define POICJJPPMDA_KAEOKJCPCPM_OFFSET UNITYSDK_OFFSET(0xC368260)
#define POICJJPPMDA_KCMBNIOAPAJ_OFFSET UNITYSDK_OFFSET(0xC368370)

	class POICJJPPMDA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* KMDPIALJFHP; // 0x10
		::HJCHNOIBJCA* MEGLBLIJGCF; // 0x18
		::KMFHBNCPDOE* CEFLLELKFOP; // 0x20
		::System::Void _ctor(::KMFHBNCPDOE* a1, ::HJCHNOIBJCA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KMFHBNCPDOE*, ::HJCHNOIBJCA*))((::PBYTE)hIl2Cpp + POICJJPPMDA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* IDOIFKMCEPM(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POICJJPPMDA_IDOIFKMCEPM_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GBMDLLADMNG(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POICJJPPMDA_GBMDLLADMNG_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* KAEOKJCPCPM(::LDLKEEFPGMB* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::LDLKEEFPGMB*))((::PBYTE)hIl2Cpp + POICJJPPMDA_KAEOKJCPCPM_OFFSET))(this, a1);
		}

		::System::Void BAKIJBBMPDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POICJJPPMDA_BAKIJBBMPDI_OFFSET))(this, a1);
		}

		::System::Void KCMBNIOAPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POICJJPPMDA_KCMBNIOAPAJ_OFFSET))(this);
		}

		static ::HHGEPOFOLMB* HLEMMIIJJHD(::LDLKEEFPGMB* a1)
		{
			return ((::HHGEPOFOLMB*(*)(::LDLKEEFPGMB*))((::PBYTE)hIl2Cpp + POICJJPPMDA_HLEMMIIJJHD_OFFSET))(a1);
		}

	};
