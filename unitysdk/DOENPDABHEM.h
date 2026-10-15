#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEBKIEOBLPK.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JCBKJPLDPGK;
namespace UnityEngine::UI { class Image; }

#define DOENPDABHEM_AGKBMFAEANC_OFFSET UNITYSDK_OFFSET(0x11FE27E0)
#define DOENPDABHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE3330)
#define DOENPDABHEM_EMILFEBBHBA_OFFSET UNITYSDK_OFFSET(0x11FE29C0)
#define DOENPDABHEM_FPJDPOLOMFC_OFFSET UNITYSDK_OFFSET(0x11FE26E0)
#define DOENPDABHEM_GDENPGMEFPK_OFFSET UNITYSDK_OFFSET(0x11FE2A30)
#define DOENPDABHEM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x11FE2AD0)
#define DOENPDABHEM__ONBIND_OFFSET UNITYSDK_OFFSET(0x11FE2670)

inline static constexpr unsigned int DOENPDABHEM_TypeDefinitionIndex = 71933;

	class DOENPDABHEM : public ::BEBKIEOBLPK
	{
	public:
		::UnityEngine::UI::Image* PGFKOHJEIII; // 0xA0
		::JCBKJPLDPGK* PFMHLMJLJNN; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM__ONBIND_OFFSET))(this);
		}

		::System::Void FPJDPOLOMFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_FPJDPOLOMFC_OFFSET))(this);
		}

		::System::Int32 AGKBMFAEANC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_AGKBMFAEANC_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_NKPPGDENJAE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GDENPGMEFPK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_GDENPGMEFPK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EMILFEBBHBA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_EMILFEBBHBA_OFFSET))(this);
		}

	};
