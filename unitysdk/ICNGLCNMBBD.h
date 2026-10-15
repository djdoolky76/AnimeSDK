#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class DEKDEPEBHNC;
class EBBJGCKIBAA;
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define ICNGLCNMBBD_BMOPHBIJAFH_OFFSET UNITYSDK_OFFSET(0x15E5CB90)
#define ICNGLCNMBBD_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15E5CD10)
#define ICNGLCNMBBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5C780)
#define ICNGLCNMBBD_EPIEHFMEPPH_OFFSET UNITYSDK_OFFSET(0x15E5CC60)
#define ICNGLCNMBBD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15E5C830)
#define ICNGLCNMBBD_NLBKIBELCMF_OFFSET UNITYSDK_OFFSET(0x15E5CDE0)
#define ICNGLCNMBBD_TICK_OFFSET UNITYSDK_OFFSET(0x15E5CD60)

	class ICNGLCNMBBD : public ::HBPNHCICJGF
	{
	public:
		::RPG::GameCore::SkillCharacterComponent* CJOLLMNNCPE; // 0x28
		::System::Boolean LFNCBOONKFB; // 0x30
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + ICNGLCNMBBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNGLCNMBBD_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNGLCNMBBD_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICNGLCNMBBD_TICK_OFFSET))(this, a1);
		}

		::System::Boolean EPIEHFMEPPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNGLCNMBBD_EPIEHFMEPPH_OFFSET))(this);
		}

		::System::Boolean NLBKIBELCMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNGLCNMBBD_NLBKIBELCMF_OFFSET))(this);
		}

		::System::Void BMOPHBIJAFH(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + ICNGLCNMBBD_BMOPHBIJAFH_OFFSET))(this, a1);
		}

	};
