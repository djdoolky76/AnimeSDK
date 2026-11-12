#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DNLGHEHJOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x12DD0A00)
#define DNLGHEHJOCC_GFMPOMJAMKE_OFFSET UNITYSDK_OFFSET(0x12DD0B90)
#define DNLGHEHJOCC_HNHEAHMPEPE_OFFSET UNITYSDK_OFFSET(0x12DD0AF0)
#define DNLGHEHJOCC_IKIPILHNPLA_OFFSET UNITYSDK_OFFSET(0x12DD0AA0)
#define DNLGHEHJOCC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x12DD0A50)
#define DNLGHEHJOCC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x12DD0BE0)

inline static constexpr unsigned int DNLGHEHJOCC_TypeDefinitionIndex = 74818;

	class DNLGHEHJOCC : public ::System::Object
	{
	public:
		::System::Single BGAMGLPGCCH; // 0x10
		::System::Single NMFDJBJGKKE; // 0x14
		::System::Single JPMDPMFANEE; // 0x18
		::System::Int32 OICELJJICCI; // 0x1C
		::System::Single PNJLEJAAADI; // 0x20
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
