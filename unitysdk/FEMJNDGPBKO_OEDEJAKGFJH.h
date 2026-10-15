#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEMJNDGPBKO_PINAIAPNGMA.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define FEMJNDGPBKO_OEDEJAKGFJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15726E70)
#define FEMJNDGPBKO_OEDEJAKGFJH_FDHFIHDPHGD_OFFSET UNITYSDK_OFFSET(0x15726E80)

	class FEMJNDGPBKO_OEDEJAKGFJH : public ::FEMJNDGPBKO_PINAIAPNGMA
	{
	public:
		::System::Int32 JLKLHLAPFMA; // 0x28
		::System::Void _ctor(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_OEDEJAKGFJH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FDHFIHDPHGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_OEDEJAKGFJH_FDHFIHDPHGD_OFFSET))(this);
		}

	};
