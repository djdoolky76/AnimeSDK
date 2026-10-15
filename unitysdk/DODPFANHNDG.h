#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelSettleReason.h"
#include "unitysdk/System/Object.h"
class JPKFKDGPDLJ;

#define DODPFANHNDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA016F0)

inline static constexpr unsigned int DODPFANHNDG_TypeDefinitionIndex = 41945;

	class DODPFANHNDG : public ::System::Object
	{
	public:
		::JPKFKDGPDLJ* HOGDPCJANEK; // 0x10
		::System::UInt32 FJPBONGDHLF; // 0x18
		::System::UInt32 HCDNAPNIAJH; // 0x1C
		::RPG::Client::LittleGame::ChimeraDuelSettleReason JEHOMBANNLM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODPFANHNDG_CTOR_OFFSET))(this);
		}

	};
