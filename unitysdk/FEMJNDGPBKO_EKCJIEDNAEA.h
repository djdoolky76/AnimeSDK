#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEMJNDGPBKO_PINAIAPNGMA.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define FEMJNDGPBKO_EKCJIEDNAEA_CTOR_OFFSET UNITYSDK_OFFSET(0x157262A0)
#define FEMJNDGPBKO_EKCJIEDNAEA_FDHFIHDPHGD_OFFSET UNITYSDK_OFFSET(0x15726D60)
#define FEMJNDGPBKO_EKCJIEDNAEA_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0x15726E10)

inline static constexpr unsigned int FEMJNDGPBKO_EKCJIEDNAEA_TypeDefinitionIndex = 49135;

	class FEMJNDGPBKO_EKCJIEDNAEA : public ::FEMJNDGPBKO_PINAIAPNGMA
	{
	public:
		::System::Single CBNCFCKBJKG; // 0x28
		::System::Void _ctor(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Single))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_EKCJIEDNAEA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FDHFIHDPHGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_EKCJIEDNAEA_FDHFIHDPHGD_OFFSET))(this);
		}

		::System::Single IDPFIMKAMDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_EKCJIEDNAEA_IDPFIMKAMDN_OFFSET))(this);
		}

	};
