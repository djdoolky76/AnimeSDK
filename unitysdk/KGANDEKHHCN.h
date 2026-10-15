#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IGamePhase; }

#define KGANDEKHHCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C66D0)
#define KGANDEKHHCN_DBPODDAKAJO_OFFSET UNITYSDK_OFFSET(0xB3C6940)
#define KGANDEKHHCN_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0xB3C6C10)
#define KGANDEKHHCN_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xB3C6890)
#define KGANDEKHHCN_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0xB3C66F0)
#define KGANDEKHHCN__PHASEEXIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xB3C6C60)
#define KGANDEKHHCN__PHASEEXIT_B__3_1_OFFSET UNITYSDK_OFFSET(0xB3C6D00)

inline static constexpr unsigned int KGANDEKHHCN_TypeDefinitionIndex = 61182;

	class KGANDEKHHCN : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGANDEKHHCN_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KGANDEKHHCN_NPJGONHMEOD_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + KGANDEKHHCN_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void DBPODDAKAJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGANDEKHHCN_DBPODDAKAJO_OFFSET))(this);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGANDEKHHCN_EFIJDBHPINI_OFFSET))(this);
		}

		::System::Void _PhaseExit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGANDEKHHCN__PHASEEXIT_B__3_0_OFFSET))(this);
		}

		::System::Void _PhaseExit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGANDEKHHCN__PHASEEXIT_B__3_1_OFFSET))(this);
		}

	};
