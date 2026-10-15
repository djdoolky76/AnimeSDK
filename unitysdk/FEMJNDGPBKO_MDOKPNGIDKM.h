#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEMJNDGPBKO_PINAIAPNGMA.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define FEMJNDGPBKO_MDOKPNGIDKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15726E60)

	class FEMJNDGPBKO_MDOKPNGIDKM : public ::FEMJNDGPBKO_PINAIAPNGMA
	{
	public:
		::System::Void _ctor(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_MDOKPNGIDKM_CTOR_OFFSET))(this, a1, a2);
		}

	};
