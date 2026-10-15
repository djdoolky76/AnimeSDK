#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJKJHEJGBEK.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }

#define AKLKMBNBMPG_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0x12CD64C0)
#define AKLKMBNBMPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CD69C0)
#define AKLKMBNBMPG_CKJADDAPMED_OFFSET UNITYSDK_OFFSET(0x12CD0A80)
#define AKLKMBNBMPG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD09C0)
#define AKLKMBNBMPG_DFELPBIHFIM_OFFSET UNITYSDK_OFFSET(0x12CD17D0)
#define AKLKMBNBMPG_FJEJJPHFLAI_OFFSET UNITYSDK_OFFSET(0x12CD0DB0)
#define AKLKMBNBMPG_FLGDMDPGBEL_OFFSET UNITYSDK_OFFSET(0x12CD6590)
#define AKLKMBNBMPG_HACOAMDMBHC_OFFSET UNITYSDK_OFFSET(0x12CD66D0)
#define AKLKMBNBMPG_IFOJEDHHFIF_OFFSET UNITYSDK_OFFSET(0x12CD6350)
#define AKLKMBNBMPG_JOPLBAMKJBA_OFFSET UNITYSDK_OFFSET(0x12CD67E0)
#define AKLKMBNBMPG_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x12CD1830)
#define AKLKMBNBMPG_OOCHJEEPBHL_OFFSET UNITYSDK_OFFSET(0x12CD6940)
#define AKLKMBNBMPG_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0x12CD6510)

inline static constexpr unsigned int AKLKMBNBMPG_TypeDefinitionIndex = 52262;

	class AKLKMBNBMPG : public ::HJKJHEJGBEK
	{
	public:
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x38
		::System::Single DIGGHFOKNCL; // 0x40
		::System::Single DGKFELJKIEM; // 0x44
		::System::Single BKIGKLKOHPM; // 0x48
		::System::Single POJMPKLGMEP; // 0x4C
		::System::Single CMPJEDPEALD; // 0x50
		::System::Single OLPMGDANOGE; // 0x54
		::System::Single MNCCILIKMPB; // 0x58
		::System::Single FHOCFFBHDGI; // 0x5C
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x60
		::System::Single JOKFKNIBJJH; // 0x6C
		::RPG::GameCore::CharacterMotionFlag JMMIBGDIDDG; // 0x70
		::System::Single BLJLGBAJLAJ; // 0x74
		static ::System::Single* StaticGet_IDECEGANGLA()
		{
			return (::System::Single*)UnitySDK::FromName("", "AKLKMBNBMPG")->GetStaticField(0x13F60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLKMBNBMPG_CCTOR_OFFSET))();
		}

		::System::Void CKJADDAPMED(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterMotionFlag a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_CKJADDAPMED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void DFELPBIHFIM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_DFELPBIHFIM_OFFSET))(this, a1);
		}

		::System::Void LPFBANCOMPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_LPFBANCOMPE_OFFSET))(this);
		}

		::System::Void IFOJEDHHFIF(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_IFOJEDHHFIF_OFFSET))(this, a1);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void FJEJJPHFLAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_FJEJJPHFLAI_OFFSET))(this, a1);
		}

		::System::Void FLGDMDPGBEL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_FLGDMDPGBEL_OFFSET))(this, a1, a2);
		}

		::System::Void HACOAMDMBHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_HACOAMDMBHC_OFFSET))(this);
		}

		::System::Void JOPLBAMKJBA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_JOPLBAMKJBA_OFFSET))(this, a1);
		}

		::System::Void OOCHJEEPBHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMBNBMPG_OOCHJEEPBHL_OFFSET))(this);
		}

	};
