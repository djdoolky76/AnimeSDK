#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHAPBJANBDE.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeOrderType.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeState.h"
#include "unitysdk/System/Object.h"
class LNAAACICHPG;
class NMEGIPHFFDA;
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradePlayerInfo; }
namespace RPG::Client::BlindBox::Trade { class PrivateBlindBoxTradeOrder; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

#define FBMCJDIDAAM_AIHLDOJFADG_OFFSET UNITYSDK_OFFSET(0x156A7100)
#define FBMCJDIDAAM_BMLMIKABJEN_OFFSET UNITYSDK_OFFSET(0x156A70A0)
#define FBMCJDIDAAM_FHOGJLKJPIO_OFFSET UNITYSDK_OFFSET(0x156A7340)
#define FBMCJDIDAAM_ILPODCPKHKL_OFFSET UNITYSDK_OFFSET(0x156A7050)
#define FBMCJDIDAAM_JPNENBMFGJI_OFFSET UNITYSDK_OFFSET(0x156A6EE0)
#define FBMCJDIDAAM_MHMPJACNOMN_OFFSET UNITYSDK_OFFSET(0x156A6D40)

	class FBMCJDIDAAM : public ::System::Object
	{
	public:
		static ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* MHMPJACNOMN(::NMEGIPHFFDA* a1)
		{
			return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*(*)(::NMEGIPHFFDA*))((::PBYTE)hIl2Cpp + FBMCJDIDAAM_MHMPJACNOMN_OFFSET))(a1);
		}

		static ::RPG::Client::BlindBox::Trade::PrivateBlindBoxTradeOrder* AIHLDOJFADG(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a5, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a6, ::System::Boolean a7, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState a8, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a9, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a10, ::System::Boolean a11)
		{
			return ((::RPG::Client::BlindBox::Trade::PrivateBlindBoxTradeOrder*(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::Boolean, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMCJDIDAAM_AIHLDOJFADG_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* FHOGJLKJPIO(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a5, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a6, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState a7, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a8, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a9, ::System::Boolean a10)
		{
			return ((::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMCJDIDAAM_FHOGJLKJPIO_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::RPG::Client::Pet::BlindBox::IBlindBoxPet* JPNENBMFGJI(::LNAAACICHPG* a1)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::LNAAACICHPG*))((::PBYTE)hIl2Cpp + FBMCJDIDAAM_JPNENBMFGJI_OFFSET))(a1);
		}

		static ::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderType BMLMIKABJEN(::NMEGIPHFFDA* a1)
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderType(*)(::NMEGIPHFFDA*))((::PBYTE)hIl2Cpp + FBMCJDIDAAM_BMLMIKABJEN_OFFSET))(a1);
		}

		static ::RPG::Client::BlindBox::Trade::BlindBoxTradeState ILPODCPKHKL(::OHAPBJANBDE a1)
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeState(*)(::OHAPBJANBDE))((::PBYTE)hIl2Cpp + FBMCJDIDAAM_ILPODCPKHKL_OFFSET))(a1);
		}

	};
