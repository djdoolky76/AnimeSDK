#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define PIADFJMKFEI_CTOR_OFFSET UNITYSDK_OFFSET(0xC253290)
#define PIADFJMKFEI_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xC253060)
#define PIADFJMKFEI_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC2530A0)
#define PIADFJMKFEI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC252D30)
#define PIADFJMKFEI_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xC252D40)

inline static constexpr unsigned int PIADFJMKFEI_TypeDefinitionIndex = 56149;

	class PIADFJMKFEI : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 BNCODJLHDMN; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
		::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x20
		::System::UInt32 AIMGACMOMDD; // 0x28
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIADFJMKFEI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIADFJMKFEI_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIADFJMKFEI_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIADFJMKFEI_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIADFJMKFEI_ELEPDOMDAGA_OFFSET))(this);
		}

	};
