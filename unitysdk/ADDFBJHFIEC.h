#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define ADDFBJHFIEC_CTOR_OFFSET UNITYSDK_OFFSET(0x182A5E10)
#define ADDFBJHFIEC_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x182A5DD0)
#define ADDFBJHFIEC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x182A5C20)
#define ADDFBJHFIEC_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x182A5C30)

inline static constexpr unsigned int ADDFBJHFIEC_TypeDefinitionIndex = 57316;

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
