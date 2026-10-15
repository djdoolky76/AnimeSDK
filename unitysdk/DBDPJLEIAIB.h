#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameModeParamNotifyType.h"
#include "unitysdk/System/Object.h"

#define DBDPJLEIAIB_CLEAR_OFFSET UNITYSDK_OFFSET(0xDFD3460)
#define DBDPJLEIAIB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD34A0)

inline static constexpr unsigned int DBDPJLEIAIB_TypeDefinitionIndex = 55236;

	class DBDPJLEIAIB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameModeParamNotifyType JBPNBECLGKN; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint AALPICLABCO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDPJLEIAIB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDPJLEIAIB_CLEAR_OFFSET))(this);
		}

	};
