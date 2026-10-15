#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
class ILDNJGBJGPF;
namespace RPG::Client { class IGamePhase; }

#define DDEPGOLAMGL_ABGLFMKJBGD_OFFSET UNITYSDK_OFFSET(0xE261000)
#define DDEPGOLAMGL_CTOR_OFFSET UNITYSDK_OFFSET(0xE260950)
#define DDEPGOLAMGL_DBPODDAKAJO_OFFSET UNITYSDK_OFFSET(0xE2617C0)
#define DDEPGOLAMGL_EOBMGOLFDLA_OFFSET UNITYSDK_OFFSET(0xE260AF0)
#define DDEPGOLAMGL_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xE260BC0)
#define DDEPGOLAMGL_HILHCKLBJOM_OFFSET UNITYSDK_OFFSET(0xE2619D0)
#define DDEPGOLAMGL_JPNPGAGHKJE_OFFSET UNITYSDK_OFFSET(0xE261B80)
#define DDEPGOLAMGL_MJCHGDMOGID_OFFSET UNITYSDK_OFFSET(0xE260D90)
#define DDEPGOLAMGL_NIGCGNLDPND_OFFSET UNITYSDK_OFFSET(0xE261A30)
#define DDEPGOLAMGL_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0xE260970)

inline static constexpr unsigned int DDEPGOLAMGL_TypeDefinitionIndex = 61183;

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
