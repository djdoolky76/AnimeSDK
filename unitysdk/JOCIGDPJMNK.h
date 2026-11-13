#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
#include "unitysdk/System/Object.h"

#define JOCIGDPJMNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D9C00)

inline static constexpr unsigned int JOCIGDPJMNK_TypeDefinitionIndex = 74059;

	class JOCIGDPJMNK : public ::System::Object
	{
	public:
		::RPG::Client::BattleTargetStatus FFEPLIHOFLA; // 0x10
		::System::UInt32 GFBJJGIKPCB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIGDPJMNK_CTOR_OFFSET))(this);
		}

	};
