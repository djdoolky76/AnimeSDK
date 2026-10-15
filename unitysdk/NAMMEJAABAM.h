#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HCGJNLDAIPI;

#define NAMMEJAABAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA7CC0)
#define NAMMEJAABAM_EBEHFIGHJAM_OFFSET UNITYSDK_OFFSET(0xBAA7A60)
#define NAMMEJAABAM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBAA7A10)
#define NAMMEJAABAM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBAA7890)
#define NAMMEJAABAM_NDDPPAILJPD_OFFSET UNITYSDK_OFFSET(0xBAA7B90)
#define NAMMEJAABAM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBAA77F0)

inline static constexpr unsigned int NAMMEJAABAM_TypeDefinitionIndex = 71663;

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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMMEJAABAM_EKGCGIDIFJJ_OFFSET))(this);
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
