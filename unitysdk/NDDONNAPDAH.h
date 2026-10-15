#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define NDDONNAPDAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB21990)
#define NDDONNAPDAH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBB218A0)
#define NDDONNAPDAH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBB218E0)
#define NDDONNAPDAH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBB216A0)
#define NDDONNAPDAH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBB216B0)

	class NDDONNAPDAH : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 BOKJJKFCFME; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDONNAPDAH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDONNAPDAH_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDONNAPDAH_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDONNAPDAH_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDONNAPDAH_ELEPDOMDAGA_OFFSET))(this);
		}

	};
