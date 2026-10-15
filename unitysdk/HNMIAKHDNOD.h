#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define HNMIAKHDNOD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D94BE0)
#define HNMIAKHDNOD_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15D94BA0)
#define HNMIAKHDNOD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15D949F0)
#define HNMIAKHDNOD_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15D94A00)

inline static constexpr unsigned int HNMIAKHDNOD_TypeDefinitionIndex = 56103;

	class HNMIAKHDNOD : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMIAKHDNOD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMIAKHDNOD_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMIAKHDNOD_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMIAKHDNOD_ELEPDOMDAGA_OFFSET))(this);
		}

	};
