#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define ADDFBJHFIEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB134030)
#define ADDFBJHFIEC_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB133FF0)
#define ADDFBJHFIEC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB133E40)
#define ADDFBJHFIEC_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB133E50)

inline static constexpr unsigned int ADDFBJHFIEC_TypeDefinitionIndex = 56104;

	class ADDFBJHFIEC : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDFBJHFIEC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDFBJHFIEC_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDFBJHFIEC_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDFBJHFIEC_ELEPDOMDAGA_OFFSET))(this);
		}

	};
