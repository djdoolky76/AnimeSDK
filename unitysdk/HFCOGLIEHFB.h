#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDHNPGBOIKD.h"
#include "unitysdk/RPG/Client/AssetSystem/Test/AsyncStatus.h"
namespace RPG::Client { class IAssetOperation; }

#define HFCOGLIEHFB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C70680)
#define HFCOGLIEHFB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15C705F0)

	class HFCOGLIEHFB : public ::IDHNPGBOIKD
	{
	public:
		::RPG::Client::IAssetOperation* NDJKPABPJHO; // 0x28
		::RPG::Client::AssetSystem::Test::AsyncStatus FFEPLIHOFLA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCOGLIEHFB_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCOGLIEHFB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
