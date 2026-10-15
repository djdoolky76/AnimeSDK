#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FICJADOJGMF.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_RoadTimeline.h"
class FICJADOJGMF_FHHABLLAPHM;
namespace RPG::Client { class WolfBroGunPlayEndLess; }
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }

#define HKAFJGJFHMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2D390)
#define HKAFJGJFHMN_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15D2D3B0)
#define HKAFJGJFHMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D2D340)
#define HKAFJGJFHMN_DMLHIBKOKJD_OFFSET UNITYSDK_OFFSET(0x15D2DF90)
#define HKAFJGJFHMN_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0x15D2E030)
#define HKAFJGJFHMN_ECJLHHEEJAP_OFFSET UNITYSDK_OFFSET(0x15D2DE80)
#define HKAFJGJFHMN_GAKBKHAEEAK_OFFSET UNITYSDK_OFFSET(0x15D2D450)
#define HKAFJGJFHMN_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x15D2E140)
#define HKAFJGJFHMN_GNBBPHHPAGC_OFFSET UNITYSDK_OFFSET(0x15D2D490)
#define HKAFJGJFHMN_JHBMHCNLAME_OFFSET UNITYSDK_OFFSET(0x15D2E1A0)
#define HKAFJGJFHMN_MEOLLONEOGC_OFFSET UNITYSDK_OFFSET(0x15D2E090)

inline static constexpr unsigned int HKAFJGJFHMN_TypeDefinitionIndex = 68739;

	class HKAFJGJFHMN : public ::FICJADOJGMF
	{
	public:
		::RPG::Client::WolfBroGunPlayEndLess* MGCGDPGIAIP; // 0x80
		::FICJADOJGMF_FHHABLLAPHM* FICPIGCICAO; // 0x88
		::System::Boolean FCEAICADJEN; // 0x90
		::System::Void _ctor(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1, ::RPG::Client::WolfBroGunPlayEndLess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*, ::RPG::Client::WolfBroGunPlayEndLess*))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_DISPOSE_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Boolean GAKBKHAEEAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_GAKBKHAEEAK_OFFSET))(this);
		}

		::System::Boolean GNBBPHHPAGC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_GNBBPHHPAGC_OFFSET))(this, a1, a2);
		}

		::System::Single DMLHIBKOKJD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_DMLHIBKOKJD_OFFSET))(this, a1);
		}

		::RPG::Client::WolfBroGunPlayPuzzleBoard_RoadTimeline ECJLHHEEJAP()
		{
			return ((::RPG::Client::WolfBroGunPlayPuzzleBoard_RoadTimeline(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_ECJLHHEEJAP_OFFSET))(this);
		}

		::System::Single EANLMIKHCKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_EANLMIKHCKG_OFFSET))(this);
		}

		::System::Single MEOLLONEOGC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_MEOLLONEOGC_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Single JHBMHCNLAME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAFJGJFHMN_JHBMHCNLAME_OFFSET))(this);
		}

	};
