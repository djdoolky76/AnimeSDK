#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IGamePhase; }

#define MNNMEELGLKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2D7580)
#define MNNMEELGLKB_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0xC2D7B10)
#define MNNMEELGLKB_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xC2D7A80)
#define MNNMEELGLKB_HILHCKLBJOM_OFFSET UNITYSDK_OFFSET(0xC2D7B60)
#define MNNMEELGLKB_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0xC2D75A0)

inline static constexpr unsigned int MNNMEELGLKB_TypeDefinitionIndex = 62578;

	class MNNMEELGLKB : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNMEELGLKB_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNMEELGLKB_NPJGONHMEOD_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + MNNMEELGLKB_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNMEELGLKB_EFIJDBHPINI_OFFSET))(this);
		}

		::System::Void HILHCKLBJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNMEELGLKB_HILHCKLBJOM_OFFSET))(this);
		}

	};
