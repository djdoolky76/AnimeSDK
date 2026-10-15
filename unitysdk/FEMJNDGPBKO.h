#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEMJNDGPBKO_PINAIAPNGMA;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEMJNDGPBKO_CCLOABELDPG_OFFSET UNITYSDK_OFFSET(0x157261A0)
#define FEMJNDGPBKO_CTOR_OFFSET UNITYSDK_OFFSET(0x15726CC0)
#define FEMJNDGPBKO_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0x15726660)
#define FEMJNDGPBKO_IOLGKDEMHJI_OFFSET UNITYSDK_OFFSET(0x157264D0)
#define FEMJNDGPBKO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15726840)
#define FEMJNDGPBKO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x157262B0)

	class FEMJNDGPBKO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::IAssetOperation*, ::System::Object*>* MEANPJDFKBK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_CTOR_OFFSET))(this);
		}

		::FEMJNDGPBKO_PINAIAPNGMA* CCLOABELDPG(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::FEMJNDGPBKO_PINAIAPNGMA*(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_CCLOABELDPG_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void IOLGKDEMHJI(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_IOLGKDEMHJI_OFFSET))(this, a1);
		}

		::System::Single IDPFIMKAMDN(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_IDPFIMKAMDN_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJNDGPBKO_PAGKOAEOLKA_OFFSET))(this);
		}

	};
