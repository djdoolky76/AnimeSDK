#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerAssetLoadState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerFrameAsset; }

#define CELFBICOPHD_AIABMKIGGJK_OFFSET UNITYSDK_OFFSET(0xC9DD4A0)
#define CELFBICOPHD_CLEAR_OFFSET UNITYSDK_OFFSET(0xC9DD650)
#define CELFBICOPHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC9DD870)
#define CELFBICOPHD_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0xC9DD790)
#define CELFBICOPHD_IOLGKDEMHJI_OFFSET UNITYSDK_OFFSET(0xC9DD730)
#define CELFBICOPHD_NKOEGEDEKNA_OFFSET UNITYSDK_OFFSET(0xC9DD830)
#define CELFBICOPHD_OPFNIIGKGMG_OFFSET UNITYSDK_OFFSET(0xC9DD7F0)

inline static constexpr unsigned int CELFBICOPHD_TypeDefinitionIndex = 76872;

	class CELFBICOPHD : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset* BELMNBKDCOE; // 0x10
		::RPG::Client::IAssetOperation* DIHLCKJONDI; // 0x18
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState EGGHHGIEIHG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFBICOPHD_CTOR_OFFSET))(this);
		}

		::System::Boolean AIABMKIGGJK(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CELFBICOPHD_AIABMKIGGJK_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFBICOPHD_CLEAR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset* OPFNIIGKGMG()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFBICOPHD_OPFNIIGKGMG_OFFSET))(this);
		}

		::System::Void IOLGKDEMHJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFBICOPHD_IOLGKDEMHJI_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState NKOEGEDEKNA()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFBICOPHD_NKOEGEDEKNA_OFFSET))(this);
		}

		::System::Void DNLBJCEIIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELFBICOPHD_DNLBJCEIIKD_OFFSET))(this);
		}

	};
