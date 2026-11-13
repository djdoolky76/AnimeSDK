#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEBKIEOBLPK.h"
class JCBKJPLDPGK;
namespace UnityEngine::UI { class Image; }

#define DOENPDABHEM_AGKBMFAEANC_OFFSET UNITYSDK_OFFSET(0x191A0760)
#define DOENPDABHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x191A14C0)
#define DOENPDABHEM_FPJDPOLOMFC_OFFSET UNITYSDK_OFFSET(0x191A0660)
#define DOENPDABHEM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x191A0BB0)
#define DOENPDABHEM_OJBDKADMNAK_OFFSET UNITYSDK_OFFSET(0x191A0AE0)
#define DOENPDABHEM__ONBIND_OFFSET UNITYSDK_OFFSET(0x191A05A0)

inline static constexpr unsigned int DOENPDABHEM_TypeDefinitionIndex = 73956;

	class DOENPDABHEM : public ::BEBKIEOBLPK
	{
	public:
		::UnityEngine::UI::Image* PGFKOHJEIII; // 0xA8
		::JCBKJPLDPGK* PFMHLMJLJNN; // 0xB0
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

		::System::Void OJBDKADMNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_OJBDKADMNAK_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENPDABHEM_NKPPGDENJAE_OFFSET))(this);
		}

	};
