#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HCGJNLDAIPI;

#define NAMMEJAABAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFAF30)
#define NAMMEJAABAM_EBEHFIGHJAM_OFFSET UNITYSDK_OFFSET(0x1BAFACD0)
#define NAMMEJAABAM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1BAFAB00)
#define NAMMEJAABAM_NDDPPAILJPD_OFFSET UNITYSDK_OFFSET(0x1BAFAE00)
#define NAMMEJAABAM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1BAFAA60)
#define NAMMEJAABAM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1BAFAC80)

inline static constexpr unsigned int NAMMEJAABAM_TypeDefinitionIndex = 73651;

	class NAMMEJAABAM : public ::FMPCODLIOLG
	{
	public:
		::HCGJNLDAIPI* AIJODBLPFHG; // 0x60
		// static const ::System::String* CPAEGCBBJLF; // 0x0
		// static const ::System::String* AOFPAJMLIMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMMEJAABAM_CTOR_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::HCGJNLDAIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGJNLDAIPI*))((::PBYTE)hIl2Cpp + NAMMEJAABAM_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMMEJAABAM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMMEJAABAM_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Single NDDPPAILJPD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMMEJAABAM_NDDPPAILJPD_OFFSET))(this);
		}

		::System::Boolean EBEHFIGHJAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMMEJAABAM_EBEHFIGHJAM_OFFSET))(this);
		}

	};
