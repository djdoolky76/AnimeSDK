#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetAliasTokenType.h"
#include "unitysdk/CFLDNBDNJFP.h"
namespace System { class String; }

#define KHMLAOFIOJD_AHNCLDFCGAL_OFFSET UNITYSDK_OFFSET(0x19250)
#define KHMLAOFIOJD_AJFHEGLKLPE_OFFSET UNITYSDK_OFFSET(0x193D0)
#define KHMLAOFIOJD_ANENHHFLDKD_OFFSET UNITYSDK_OFFSET(0x1D30)
#define KHMLAOFIOJD_BCEEECJEBJA_OFFSET UNITYSDK_OFFSET(0x194D0)
#define KHMLAOFIOJD_CCHFLJGGDGL_OFFSET UNITYSDK_OFFSET(0x192D0)
#define KHMLAOFIOJD_CTOR_OFFSET UNITYSDK_OFFSET(0x191F0)
#define KHMLAOFIOJD_DLKPFMBLMHM_OFFSET UNITYSDK_OFFSET(0x19330)
#define KHMLAOFIOJD_EGOBBJJCCJF_OFFSET UNITYSDK_OFFSET(0x19270)
#define KHMLAOFIOJD_FLHAMDCGJJN_OFFSET UNITYSDK_OFFSET(0x19200)
#define KHMLAOFIOJD_LOGFIONBAGO_OFFSET UNITYSDK_OFFSET(0x19220)
#define KHMLAOFIOJD_MOBDJPFFFID_OFFSET UNITYSDK_OFFSET(0x193C0)
#define KHMLAOFIOJD_NMNOOCNLJNL_OFFSET UNITYSDK_OFFSET(0x19240)
#define KHMLAOFIOJD_PCIDGLJOGAP_OFFSET UNITYSDK_OFFSET(0x19460)

inline static constexpr unsigned int KHMLAOFIOJD_TypeDefinitionIndex = 60353;

	struct alignas(8) KHMLAOFIOJD
	{
		::System::String* BBEBFJLHMKG; // 0x10
		::System::Int32 ELEGHCFHEMA; // 0x18
		::System::Int32 KCFPFKNIBDG; // 0x1C
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_CTOR_OFFSET))(this, a1);
		}

		::CFLDNBDNJFP FLHAMDCGJJN()
		{
			return ((::CFLDNBDNJFP(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_FLHAMDCGJJN_OFFSET))(this);
		}

		::CFLDNBDNJFP LOGFIONBAGO(::RPG::GameCore::TargetAliasTokenType a1)
		{
			return ((::CFLDNBDNJFP(*)(::PVOID, ::RPG::GameCore::TargetAliasTokenType))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_LOGFIONBAGO_OFFSET))(this, a1);
		}

		::System::Void NMNOOCNLJNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_NMNOOCNLJNL_OFFSET))(this);
		}

		::CFLDNBDNJFP AHNCLDFCGAL()
		{
			return ((::CFLDNBDNJFP(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_AHNCLDFCGAL_OFFSET))(this);
		}

		::System::Boolean EGOBBJJCCJF(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_EGOBBJJCCJF_OFFSET))(this, a1);
		}

		::System::Boolean CCHFLJGGDGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_CCHFLJGGDGL_OFFSET))(this);
		}

		::System::Char DLKPFMBLMHM()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_DLKPFMBLMHM_OFFSET))(this);
		}

		::System::Char MOBDJPFFFID()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_MOBDJPFFFID_OFFSET))(this);
		}

		::System::Char AJFHEGLKLPE()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_AJFHEGLKLPE_OFFSET))(this);
		}

		::System::Boolean PCIDGLJOGAP(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_PCIDGLJOGAP_OFFSET))(this, a1);
		}

		::System::Boolean BCEEECJEBJA(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_BCEEECJEBJA_OFFSET))(this, a1);
		}

		::System::String* ANENHHFLDKD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLAOFIOJD_ANENHHFLDKD_OFFSET))(this);
		}

	};
