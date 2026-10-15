#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define JADGPEDLMCM_BJEJGPIFMBN_OFFSET UNITYSDK_OFFSET(0x211F0)
#define JADGPEDLMCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A52A0)
#define JADGPEDLMCM_CGDELCGLADN_OFFSET UNITYSDK_OFFSET(0xEE4D0)
#define JADGPEDLMCM_GPFBKINKLOH_OFFSET UNITYSDK_OFFSET(0x3260)
#define JADGPEDLMCM_IEGEJOHPNMA_OFFSET UNITYSDK_OFFSET(0xACE0)
#define JADGPEDLMCM_PEAAGAPGJEK_OFFSET UNITYSDK_OFFSET(0x1D30)
#define JADGPEDLMCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C27930)

inline static constexpr unsigned int JADGPEDLMCM_TypeDefinitionIndex = 41478;

	struct alignas(4) JADGPEDLMCM
	{
		::System::UInt64 IMCFADGAEIN; // 0x10
		::System::UInt32 JIBOGDFLMIJ; // 0x18
		::System::Int32 CKLGFHCDCJC; // 0x1C
		::System::Int32 HJGLHGMKOHN; // 0x20
		::System::UInt32 CPANJBMEDBD; // 0x24
		static ::JADGPEDLMCM* StaticGet_IFDKFOGNOAN()
		{
			return (::JADGPEDLMCM*)UnitySDK::FromName("", "JADGPEDLMCM")->GetStaticField(0x15D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JADGPEDLMCM_CCTOR_OFFSET))();
		}

		::System::UInt64 PEAAGAPGJEK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JADGPEDLMCM_PEAAGAPGJEK_OFFSET))(this);
		}

		::System::UInt32 IEGEJOHPNMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADGPEDLMCM_IEGEJOHPNMA_OFFSET))(this);
		}

		::System::Int32 BJEJGPIFMBN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADGPEDLMCM_BJEJGPIFMBN_OFFSET))(this);
		}

		::System::Int32 GPFBKINKLOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADGPEDLMCM_GPFBKINKLOH_OFFSET))(this);
		}

		::System::UInt32 CGDELCGLADN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADGPEDLMCM_CGDELCGLADN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADGPEDLMCM_TOSTRING_OFFSET))(this);
		}

	};
