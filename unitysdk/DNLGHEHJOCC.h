#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DNLGHEHJOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD2090)
#define DNLGHEHJOCC_GFMPOMJAMKE_OFFSET UNITYSDK_OFFSET(0x11FD2220)
#define DNLGHEHJOCC_HNHEAHMPEPE_OFFSET UNITYSDK_OFFSET(0x11FD2180)
#define DNLGHEHJOCC_IKIPILHNPLA_OFFSET UNITYSDK_OFFSET(0x11FD2130)
#define DNLGHEHJOCC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x11FD20E0)
#define DNLGHEHJOCC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x11FD2270)

inline static constexpr unsigned int DNLGHEHJOCC_TypeDefinitionIndex = 72738;

	class DNLGHEHJOCC : public ::System::Object
	{
	public:
		::System::Single BGAMGLPGCCH; // 0x10
		::System::Single NMFDJBJGKKE; // 0x14
		::System::Single JPMDPMFANEE; // 0x18
		::System::Single PNJLEJAAADI; // 0x1C
		::System::Int32 OICELJJICCI; // 0x20
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNLGHEHJOCC_CTOR_OFFSET))(this, a1);
		}

		::System::Single IKIPILHNPLA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLGHEHJOCC_IKIPILHNPLA_OFFSET))(this);
		}

		::System::Void HNHEAHMPEPE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNLGHEHJOCC_HNHEAHMPEPE_OFFSET))(this, a1);
		}

		::System::Single GFMPOMJAMKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLGHEHJOCC_GFMPOMJAMKE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNLGHEHJOCC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLGHEHJOCC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
