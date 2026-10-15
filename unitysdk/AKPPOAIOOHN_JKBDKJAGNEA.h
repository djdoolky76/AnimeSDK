#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKPPOAIOOHN.h"

#define AKPPOAIOOHN_JKBDKJAGNEA_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x3C29390)
#define AKPPOAIOOHN_JKBDKJAGNEA_CHLBOLEGKGG_OFFSET UNITYSDK_OFFSET(0x3C29360)
#define AKPPOAIOOHN_JKBDKJAGNEA_GLGBEKHBINP_OFFSET UNITYSDK_OFFSET(0x3C29380)
#define AKPPOAIOOHN_JKBDKJAGNEA_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xE620)
#define AKPPOAIOOHN_JKBDKJAGNEA_LPJDOPAJKFP_OFFSET UNITYSDK_OFFSET(0x3C29370)

inline static constexpr unsigned int AKPPOAIOOHN_JKBDKJAGNEA_TypeDefinitionIndex = 36397;

	struct alignas(4) AKPPOAIOOHN_JKBDKJAGNEA
	{
		::System::Int32 JGEJHLKFPOA; // 0x10
		::System::Int32 FGNKGMKHAIL; // 0x14
		::System::Int32 HEAMMDKBHOG; // 0x18
		::System::Int32 IHNHKFMECFJ; // 0x1C
		::System::Int32 KNDFJPKHIIF; // 0x20
		::System::Int32 HEFKPBBGLEF; // 0x24
		::System::Int32 DDMNMHKBMDL; // 0x28
		::System::Int32 PBKMJMFACIM; // 0x2C
		::System::Int32 MEHGOMBAAPC; // 0x30
		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPPOAIOOHN_JKBDKJAGNEA_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Int32 CHLBOLEGKGG(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKPPOAIOOHN_JKBDKJAGNEA_CHLBOLEGKGG_OFFSET))(this, a1);
		}

		::System::Void LPJDOPAJKFP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKPPOAIOOHN_JKBDKJAGNEA_LPJDOPAJKFP_OFFSET))(this, a1, a2);
		}

		::System::Void GLGBEKHBINP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKPPOAIOOHN_JKBDKJAGNEA_GLGBEKHBINP_OFFSET))(this, a1);
		}

		::AKPPOAIOOHN AKJABINEGDJ()
		{
			return ((::AKPPOAIOOHN(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPPOAIOOHN_JKBDKJAGNEA_AKJABINEGDJ_OFFSET))(this);
		}

	};
