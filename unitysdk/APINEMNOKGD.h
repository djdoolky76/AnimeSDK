#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IGamePhase; }

#define APINEMNOKGD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9F9A0)
#define APINEMNOKGD_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0x15B9FBF0)
#define APINEMNOKGD_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0x15B9FB60)
#define APINEMNOKGD_HILHCKLBJOM_OFFSET UNITYSDK_OFFSET(0x15B9FC40)
#define APINEMNOKGD_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0x15B9F9C0)

inline static constexpr unsigned int APINEMNOKGD_TypeDefinitionIndex = 61191;

	class APINEMNOKGD : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APINEMNOKGD_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + APINEMNOKGD_NPJGONHMEOD_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + APINEMNOKGD_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APINEMNOKGD_EFIJDBHPINI_OFFSET))(this);
		}

		::System::Void HILHCKLBJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APINEMNOKGD_HILHCKLBJOM_OFFSET))(this);
		}

	};
