#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEBMNLPNKFL;

#define JHMBGNKOIJH_EMFGEICIHPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1BCC10)
#define JHMBGNKOIJH_EMFGEICIHPM_DHGDAFBFJIP_OFFSET UNITYSDK_OFFSET(0xB1BDCD0)
#define JHMBGNKOIJH_EMFGEICIHPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1BBBB0)
#define JHMBGNKOIJH_EMFGEICIHPM_ECLKFCLHONK_OFFSET UNITYSDK_OFFSET(0xB1BC220)
#define JHMBGNKOIJH_EMFGEICIHPM_HHELNOPPCIB_OFFSET UNITYSDK_OFFSET(0xB1BE650)
#define JHMBGNKOIJH_EMFGEICIHPM_HMKDEOHBINI_OFFSET UNITYSDK_OFFSET(0xB1BE860)
#define JHMBGNKOIJH_EMFGEICIHPM_MEKECDKKFNB_OFFSET UNITYSDK_OFFSET(0xB1BCF00)

	class JHMBGNKOIJH_EMFGEICIHPM : public ::System::Object
	{
	public:
		::CEBMNLPNKFL* CIKPBGDIABO; // 0x10
		::System::Single HNADFNOBMPG; // 0x18
		::System::Single PJHJCKKAFGB; // 0x1C
		::System::Boolean DBDGDNHEAEE; // 0x20
		::System::Boolean IDKNFHCLJEB; // 0x21
		::System::Boolean AJDCANKOGBK; // 0x22
		::System::Byte _padding0[0x1];
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::Single CKEKEEGGPAI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBGNKOIJH_EMFGEICIHPM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBGNKOIJH_EMFGEICIHPM_DISPOSE_OFFSET))(this);
		}

		::System::Single DHGDAFBFJIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBGNKOIJH_EMFGEICIHPM_DHGDAFBFJIP_OFFSET))(this);
		}

		::System::Void MEKECDKKFNB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHMBGNKOIJH_EMFGEICIHPM_MEKECDKKFNB_OFFSET))(this, a1);
		}

		::System::Boolean ECLKFCLHONK(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHMBGNKOIJH_EMFGEICIHPM_ECLKFCLHONK_OFFSET))(this, a1);
		}

		::System::Boolean HHELNOPPCIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBGNKOIJH_EMFGEICIHPM_HHELNOPPCIB_OFFSET))(this);
		}

		::System::UInt32 HMKDEOHBINI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBGNKOIJH_EMFGEICIHPM_HMKDEOHBINI_OFFSET))(this);
		}

	};
