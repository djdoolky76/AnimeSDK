#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
#include "unitysdk/System/Object.h"
class JNECDENNOOB;
class OFKKIMABHJD;
namespace RPG::Client { class FateGameData; }

#define GIEJPMJGJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A33F60)
#define GIEJPMJGJMC_LBBFHENODPH_OFFSET UNITYSDK_OFFSET(0x15A34320)
#define GIEJPMJGJMC_LHHBFAAJHCI_OFFSET UNITYSDK_OFFSET(0x15A341E0)
#define GIEJPMJGJMC_LIHJCMNPNAG_OFFSET UNITYSDK_OFFSET(0x15A33FA0)

	class GIEJPMJGJMC : public ::System::Object
	{
	public:
		::OFKKIMABHJD* EEFMDEHLLFI; // 0x10
		::JNECDENNOOB* LLBADFLDEIA; // 0x18
		::RPG::Client::FateGameStateType PEIFDOIPLIH; // 0x20
		::System::Void _ctor(::RPG::Client::FateGameData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + GIEJPMJGJMC_CTOR_OFFSET))(this, a1);
		}

		::System::Void LIHJCMNPNAG(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + GIEJPMJGJMC_LIHJCMNPNAG_OFFSET))(this, a1);
		}

		::System::Void LHHBFAAJHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEJPMJGJMC_LHHBFAAJHCI_OFFSET))(this);
		}

		::RPG::Client::FateGameStateType LBBFHENODPH()
		{
			return ((::RPG::Client::FateGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEJPMJGJMC_LBBFHENODPH_OFFSET))(this);
		}

	};
