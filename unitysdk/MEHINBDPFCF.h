#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNHLMGKJLC.h"
class MEHINBDPFCF;

#define MEHINBDPFCF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB8CF880)
#define MEHINBDPFCF_ANHDEECJEIO_OFFSET UNITYSDK_OFFSET(0xB8CF820)
#define MEHINBDPFCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8CF6F0)
#define MEHINBDPFCF_DJFGBABPKKK_OFFSET UNITYSDK_OFFSET(0xB8CF6E0)
#define MEHINBDPFCF_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xB8CF7D0)
#define MEHINBDPFCF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB8CF720)

inline static constexpr unsigned int MEHINBDPFCF_TypeDefinitionIndex = 49199;

	class MEHINBDPFCF : public ::BFNHLMGKJLC
	{
	public:
		::System::Int32 JGIKBAKNMKG; // 0x58
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEHINBDPFCF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 DJFGBABPKKK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHINBDPFCF_DJFGBABPKKK_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHINBDPFCF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHINBDPFCF_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void ANHDEECJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHINBDPFCF_ANHDEECJEIO_OFFSET))(this);
		}

		static ::MEHINBDPFCF* ACMKLFOMPFC(::System::Int32 a1)
		{
			return ((::MEHINBDPFCF*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MEHINBDPFCF_ACMKLFOMPFC_OFFSET))(a1);
		}

	};
