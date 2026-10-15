#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define FFMLFFOMDBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1573BAA0)
#define FFMLFFOMDBN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1573B9B0)
#define FFMLFFOMDBN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1573B9F0)
#define FFMLFFOMDBN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1573B7B0)
#define FFMLFFOMDBN_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1573B7C0)

inline static constexpr unsigned int FFMLFFOMDBN_TypeDefinitionIndex = 56130;

	class FFMLFFOMDBN : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::UInt32 FIBEPAIHJPB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMLFFOMDBN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMLFFOMDBN_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMLFFOMDBN_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMLFFOMDBN_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMLFFOMDBN_ELEPDOMDAGA_OFFSET))(this);
		}

	};
