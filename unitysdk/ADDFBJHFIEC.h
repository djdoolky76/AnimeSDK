#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define ADDFBJHFIEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB135820)
#define ADDFBJHFIEC_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB1357E0)
#define ADDFBJHFIEC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB135630)
#define ADDFBJHFIEC_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB135640)

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
