#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
class ILDNJGBJGPF;
namespace RPG::Client { class IGamePhase; }

#define DDEPGOLAMGL_ABGLFMKJBGD_OFFSET UNITYSDK_OFFSET(0xEE1C5A0)
#define DDEPGOLAMGL_CTOR_OFFSET UNITYSDK_OFFSET(0xEE1BEF0)
#define DDEPGOLAMGL_DBPODDAKAJO_OFFSET UNITYSDK_OFFSET(0xEE1CD60)
#define DDEPGOLAMGL_EOBMGOLFDLA_OFFSET UNITYSDK_OFFSET(0xEE1C090)
#define DDEPGOLAMGL_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xEE1C160)
#define DDEPGOLAMGL_HILHCKLBJOM_OFFSET UNITYSDK_OFFSET(0xEE1CF70)
#define DDEPGOLAMGL_JPNPGAGHKJE_OFFSET UNITYSDK_OFFSET(0xEE1D120)
#define DDEPGOLAMGL_MJCHGDMOGID_OFFSET UNITYSDK_OFFSET(0xEE1C330)
#define DDEPGOLAMGL_NIGCGNLDPND_OFFSET UNITYSDK_OFFSET(0xEE1CFD0)
#define DDEPGOLAMGL_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0xEE1BF10)

inline static constexpr unsigned int DDEPGOLAMGL_TypeDefinitionIndex = 62568;

	class DDEPGOLAMGL : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_NPJGONHMEOD_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void MJCHGDMOGID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_MJCHGDMOGID_OFFSET))(this);
		}

		::System::Void ABGLFMKJBGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_ABGLFMKJBGD_OFFSET))(this);
		}

		::System::Void DBPODDAKAJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_DBPODDAKAJO_OFFSET))(this);
		}

		::System::Void HILHCKLBJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_HILHCKLBJOM_OFFSET))(this);
		}

		::System::Void NIGCGNLDPND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_NIGCGNLDPND_OFFSET))(this);
		}

		::System::Void JPNPGAGHKJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_JPNPGAGHKJE_OFFSET))(this);
		}

		::ILDNJGBJGPF* EOBMGOLFDLA()
		{
			return ((::ILDNJGBJGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEPGOLAMGL_EOBMGOLFDLA_OFFSET))(this);
		}

	};
