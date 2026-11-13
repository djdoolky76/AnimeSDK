#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/BattleRightInfoSortType.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class FMPCODLIOLG;
class NFCLNHJODFK;

#define FBMOHEFENME_BEKPFIIEKJI_OFFSET UNITYSDK_OFFSET(0x1BA58B60)
#define FBMOHEFENME_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA58EC0)
#define FBMOHEFENME_INICAKLMIJK_OFFSET UNITYSDK_OFFSET(0x1BA58C70)
#define FBMOHEFENME_JIJAHMPGEMI_OFFSET UNITYSDK_OFFSET(0x1BA58A10)
#define FBMOHEFENME_MJJGIPFKFNB_OFFSET UNITYSDK_OFFSET(0x1BA58AD0)
#define FBMOHEFENME_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1BA58BB0)
#define FBMOHEFENME_PHMALGIMJKA_OFFSET UNITYSDK_OFFSET(0x1BA58C20)
#define FBMOHEFENME__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1BA589B0)
#define FBMOHEFENME__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BA58940)

inline static constexpr unsigned int FBMOHEFENME_TypeDefinitionIndex = 74292;

	class FBMOHEFENME : public ::FMPCODLIOLG
	{
	public:
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x60
		::NFCLNHJODFK* PPIJFBECGNJ; // 0x68
		::System::Boolean MJGJNCEDLBI; // 0x70
		::System::Byte _padding0[0x3];
		::RPG::GameCore::BattleUIPanelType APGLFBAFEOB; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOHEFENME_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FBMOHEFENME__ONINITPARAMS_OFFSET))(this, a1);
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
