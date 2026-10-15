#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define OLLMGCCDLGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF106F0)
#define OLLMGCCDLGP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBF105A0)
#define OLLMGCCDLGP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBF105E0)
#define OLLMGCCDLGP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBF10350)
#define OLLMGCCDLGP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBF10360)

	class OLLMGCCDLGP : public ::DBGDNLLDPFI
	{
	public:
		::System::String* MCLLALGABAB; // 0x10
		::System::String* GDCCJFKJGPD; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
		::System::Int32 KBAPBCNJHDB; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMGCCDLGP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMGCCDLGP_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMGCCDLGP_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMGCCDLGP_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLMGCCDLGP_ELEPDOMDAGA_OFFSET))(this);
		}

	};
