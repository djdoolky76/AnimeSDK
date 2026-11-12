#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameModeParamNotifyType.h"
#include "unitysdk/System/Object.h"

#define DBDPJLEIAIB_CLEAR_OFFSET UNITYSDK_OFFSET(0xEB7F270)
#define DBDPJLEIAIB_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7F2B0)

inline static constexpr unsigned int DBDPJLEIAIB_TypeDefinitionIndex = 56417;

	class DBDPJLEIAIB : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AALPICLABCO; // 0x10
		::RPG::GameCore::GameModeParamNotifyType JBPNBECLGKN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDPJLEIAIB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDPJLEIAIB_CLEAR_OFFSET))(this);
		}

	};
