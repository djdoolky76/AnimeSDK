#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PS/TrcRestrictionStatus.h"
#include "unitysdk/System/Object.h"

#define JBIKAHJEFNH_CTOR_OFFSET UNITYSDK_OFFSET(0x16570F30)
#define JBIKAHJEFNH_DHIPGMDEKNL_OFFSET UNITYSDK_OFFSET(0x16570DF0)
#define JBIKAHJEFNH_FFJEMGONHFB_OFFSET UNITYSDK_OFFSET(0x16570E30)
#define JBIKAHJEFNH_HGBEMNABHPM_OFFSET UNITYSDK_OFFSET(0x16570E70)
#define JBIKAHJEFNH_IMJBAAFHDBB_OFFSET UNITYSDK_OFFSET(0x16570EB0)
#define JBIKAHJEFNH_PLFHFHADIPM_OFFSET UNITYSDK_OFFSET(0x16570EF0)

	class JBIKAHJEFNH : public ::System::Object
	{
	public:
		// static const ::System::Object ALMKIHFMBBH; // 0x0
		// static const ::System::String* FIGLKEFOHEI; // 0x0
		// static const ::System::Object KBLMGKDPNPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIKAHJEFNH_CTOR_OFFSET))(this);
		}

		static ::System::Void DHIPGMDEKNL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBIKAHJEFNH_DHIPGMDEKNL_OFFSET))();
		}

		static ::System::Boolean FFJEMGONHFB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBIKAHJEFNH_FFJEMGONHFB_OFFSET))();
		}

		static ::RPG::PS::TrcRestrictionStatus HGBEMNABHPM()
		{
			return ((::RPG::PS::TrcRestrictionStatus(*)())((::PBYTE)hIl2Cpp + JBIKAHJEFNH_HGBEMNABHPM_OFFSET))();
		}

		static ::System::Int32 IMJBAAFHDBB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + JBIKAHJEFNH_IMJBAAFHDBB_OFFSET))();
		}

		static ::System::Int32 PLFHFHADIPM(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + JBIKAHJEFNH_PLFHFHADIPM_OFFSET))(a1);
		}

	};
