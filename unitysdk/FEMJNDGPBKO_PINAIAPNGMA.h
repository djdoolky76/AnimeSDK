#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define FEMJNDGPBKO_PINAIAPNGMA_CTOR_OFFSET UNITYSDK_OFFSET(0x16640EF0)
#define FEMJNDGPBKO_PINAIAPNGMA_DCOLLBEIGPL_OFFSET UNITYSDK_OFFSET(0x166410C0)
#define FEMJNDGPBKO_PINAIAPNGMA_EIOEPGGKKKK_OFFSET UNITYSDK_OFFSET(0x16640600)
#define FEMJNDGPBKO_PINAIAPNGMA_FCIMEFBNPIF_OFFSET UNITYSDK_OFFSET(0x16641080)
#define FEMJNDGPBKO_PINAIAPNGMA_FDHFIHDPHGD_OFFSET UNITYSDK_OFFSET(0x16641140)
#define FEMJNDGPBKO_PINAIAPNGMA_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0x16641180)
#define FEMJNDGPBKO_PINAIAPNGMA_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0x166410D0)

inline static constexpr unsigned int FEMJNDGPBKO_PINAIAPNGMA_TypeDefinitionIndex = 50208;

	class FEMJNDGPBKO_PINAIAPNGMA : public ::System::Object
	{
	public:
		::RPG::Client::OnAssetOperationDelegate* JAIBONACADL; // 0x10
		::RPG::Client::IAssetOperation* EMBCGFNJJIH; // 0x18
		::System::Boolean JJGABAMOFCI; // 0x20
		::System::Void _ctor(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PINAIAPNGMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FCIMEFBNPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PINAIAPNGMA_FCIMEFBNPIF_OFFSET))(this);
		}

		::System::Boolean DCOLLBEIGPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PINAIAPNGMA_DCOLLBEIGPL_OFFSET))(this);
		}

		::System::Void OIBKPJEGPOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PINAIAPNGMA_OIBKPJEGPOK_OFFSET))(this);
		}

		::System::Boolean FDHFIHDPHGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PINAIAPNGMA_FDHFIHDPHGD_OFFSET))(this);
		}

		::System::Void EIOEPGGKKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PINAIAPNGMA_EIOEPGGKKKK_OFFSET))(this);
		}

		::System::Single IDPFIMKAMDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PINAIAPNGMA_IDPFIMKAMDN_OFFSET))(this);
		}

	};
