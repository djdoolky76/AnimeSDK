#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/BattleRightInfoSortType.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class FMPCODLIOLG;
class NFCLNHJODFK;

#define FBMOHEFENME_BEKPFIIEKJI_OFFSET UNITYSDK_OFFSET(0x156A8740)
#define FBMOHEFENME_CTOR_OFFSET UNITYSDK_OFFSET(0x156A8AA0)
#define FBMOHEFENME_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x156A8520)
#define FBMOHEFENME_INICAKLMIJK_OFFSET UNITYSDK_OFFSET(0x156A8850)
#define FBMOHEFENME_JIJAHMPGEMI_OFFSET UNITYSDK_OFFSET(0x156A85F0)
#define FBMOHEFENME_MJJGIPFKFNB_OFFSET UNITYSDK_OFFSET(0x156A86B0)
#define FBMOHEFENME_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x156A8790)
#define FBMOHEFENME_PHMALGIMJKA_OFFSET UNITYSDK_OFFSET(0x156A8800)
#define FBMOHEFENME__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x156A8590)

inline static constexpr unsigned int FBMOHEFENME_TypeDefinitionIndex = 72226;

	class FBMOHEFENME : public ::FMPCODLIOLG
	{
	public:
		::NFCLNHJODFK* PPIJFBECGNJ; // 0x60
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x68
		::RPG::GameCore::BattleUIPanelType APGLFBAFEOB; // 0x70
		::System::Boolean MJGJNCEDLBI; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOHEFENME_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FBMOHEFENME_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOHEFENME__ONDISPOSE_OFFSET))(this);
		}

		::System::Void JIJAHMPGEMI(::FMPCODLIOLG* a1, ::RPG::Client::BattleRightInfoSortType a2)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*, ::RPG::Client::BattleRightInfoSortType))((::PBYTE)hIl2Cpp + FBMOHEFENME_JIJAHMPGEMI_OFFSET))(this, a1, a2);
		}

		::System::Int32 BEKPFIIEKJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOHEFENME_BEKPFIIEKJI_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOHEFENME_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void INICAKLMIJK(::FMPCODLIOLG* a1, ::RPG::Client::BattleRightInfoSortType a2)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*, ::RPG::Client::BattleRightInfoSortType))((::PBYTE)hIl2Cpp + FBMOHEFENME_INICAKLMIJK_OFFSET))(this, a1, a2);
		}

		::System::Void MJJGIPFKFNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOHEFENME_MJJGIPFKFNB_OFFSET))(this);
		}

		::System::Void PHMALGIMJKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOHEFENME_PHMALGIMJKA_OFFSET))(this);
		}

	};
