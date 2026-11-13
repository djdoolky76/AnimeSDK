#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityBeModelChargeHint.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AMEKLEEOBBI.h"
#include "unitysdk/BMAIAAKIGGD.h"
#include "unitysdk/LDKPLFCLHFF.h"
#include "unitysdk/OBPDPGDFKGA.h"
class MBAHHBDJKKG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAJAEOICFGP_AGKJHPIKIED_OFFSET UNITYSDK_OFFSET(0x19DB0E40)
#define KAJAEOICFGP_CGAEMMLOANP_OFFSET UNITYSDK_OFFSET(0x19DB0F40)
#define KAJAEOICFGP_CTOR_OFFSET UNITYSDK_OFFSET(0x19DB0D00)
#define KAJAEOICFGP_DBEONNEKDGO_OFFSET UNITYSDK_OFFSET(0x19DB1510)
#define KAJAEOICFGP_EAPAELCJODF_OFFSET UNITYSDK_OFFSET(0x19DB0FB0)
#define KAJAEOICFGP_EDGPEMKPINB_OFFSET UNITYSDK_OFFSET(0x19DB0DF0)
#define KAJAEOICFGP_ENJBOPDFOGK_OFFSET UNITYSDK_OFFSET(0x19DB0DA0)
#define KAJAEOICFGP_GNOMNKFIJMC_OFFSET UNITYSDK_OFFSET(0x19DB0E90)
#define KAJAEOICFGP_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x19DB0D50)
#define KAJAEOICFGP_JKIIEKLBAOM_OFFSET UNITYSDK_OFFSET(0x19DB0EE0)
#define KAJAEOICFGP_KFIGIFIHPFO_OFFSET UNITYSDK_OFFSET(0x19DB1210)
#define KAJAEOICFGP_KNJNJHBLHJC_OFFSET UNITYSDK_OFFSET(0x19DB1070)
#define KAJAEOICFGP_MLNGCABJCEP_OFFSET UNITYSDK_OFFSET(0x19DB0D40)
#define KAJAEOICFGP_OMJLNCKGJOK_OFFSET UNITYSDK_OFFSET(0x19DB1010)
#define KAJAEOICFGP_PDCOKAIEKLC_OFFSET UNITYSDK_OFFSET(0x19DB0D30)

inline static constexpr unsigned int KAJAEOICFGP_TypeDefinitionIndex = 57234;

	class KAJAEOICFGP : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightManager* KGCNPIEDOCA; // 0x10
		::MBAHHBDJKKG* NECGGDJFGHP; // 0x18
		::System::Void _ctor(::RPG::GameCore::GridFightManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + KAJAEOICFGP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PDCOKAIEKLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAEOICFGP_PDCOKAIEKLC_OFFSET))(this);
		}

		::System::Boolean MLNGCABJCEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAEOICFGP_MLNGCABJCEP_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAEOICFGP_JKEONEEPIHH_OFFSET))(this);
		}

		::RPG::GameCore::StageType ENJBOPDFOGK()
		{
			return ((::RPG::GameCore::StageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAEOICFGP_ENJBOPDFOGK_OFFSET))(this);
		}

		::System::String* EDGPEMKPINB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAEOICFGP_EDGPEMKPINB_OFFSET))(this);
		}

		::System::String* AGKJHPIKIED()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAEOICFGP_AGKJHPIKIED_OFFSET))(this);
		}

		::System::Boolean GNOMNKFIJMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJAEOICFGP_GNOMNKFIJMC_OFFSET))(this);
		}

		::System::Void JKIIEKLBAOM(::System::Collections::Generic::List_1<::OBPDPGDFKGA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OBPDPGDFKGA>*))((::PBYTE)hIl2Cpp + KAJAEOICFGP_JKIIEKLBAOM_OFFSET))(this, a1);
		}

		::System::Void CGAEMMLOANP(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + KAJAEOICFGP_CGAEMMLOANP_OFFSET))(this, a1, a2);
		}

		::System::Void EAPAELCJODF(::System::Collections::Generic::List_1<::BMAIAAKIGGD>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BMAIAAKIGGD>*))((::PBYTE)hIl2Cpp + KAJAEOICFGP_EAPAELCJODF_OFFSET))(this, a1);
		}

		::System::Void OMJLNCKGJOK(::System::Collections::Generic::List_1<::LDKPLFCLHFF>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LDKPLFCLHFF>*))((::PBYTE)hIl2Cpp + KAJAEOICFGP_OMJLNCKGJOK_OFFSET))(this, a1);
		}

		::System::Boolean KNJNJHBLHJC(::RPG::GameCore::GameEntity* a1, ::AMEKLEEOBBI a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::AMEKLEEOBBI))((::PBYTE)hIl2Cpp + KAJAEOICFGP_KNJNJHBLHJC_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::RPG::GameCore::ActivityBeModelChargeHint>* KFIGIFIHPFO(::Il2CppArray<::RPG::GameCore::GridFightChargeType>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::ActivityBeModelChargeHint>*(*)(::Il2CppArray<::RPG::GameCore::GridFightChargeType>*))((::PBYTE)hIl2Cpp + KAJAEOICFGP_KFIGIFIHPFO_OFFSET))(a1);
		}

		static ::System::Boolean DBEONNEKDGO(::RPG::GameCore::GridFightChargeType a1, ::RPG::GameCore::ActivityBeModelChargeHint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightChargeType, ::RPG::GameCore::ActivityBeModelChargeHint))((::PBYTE)hIl2Cpp + KAJAEOICFGP_DBEONNEKDGO_OFFSET))(a1, a2);
		}

	};
