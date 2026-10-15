#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define FEMJNDGPBKO_PINAIAPNGMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1571B530)
#define FEMJNDGPBKO_PINAIAPNGMA_DCOLLBEIGPL_OFFSET UNITYSDK_OFFSET(0x1571B700)
#define FEMJNDGPBKO_PINAIAPNGMA_EIOEPGGKKKK_OFFSET UNITYSDK_OFFSET(0x1571AC40)
#define FEMJNDGPBKO_PINAIAPNGMA_FCIMEFBNPIF_OFFSET UNITYSDK_OFFSET(0x1571B6C0)
#define FEMJNDGPBKO_PINAIAPNGMA_FDHFIHDPHGD_OFFSET UNITYSDK_OFFSET(0x1571B780)
#define FEMJNDGPBKO_PINAIAPNGMA_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0x1571B7C0)
#define FEMJNDGPBKO_PINAIAPNGMA_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0x1571B710)

inline static constexpr unsigned int FEMJNDGPBKO_PINAIAPNGMA_TypeDefinitionIndex = 49132;

	class FEMJNDGPBKO_PINAIAPNGMA : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* EMBCGFNJJIH; // 0x10
		::RPG::Client::OnAssetOperationDelegate* JAIBONACADL; // 0x18
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
