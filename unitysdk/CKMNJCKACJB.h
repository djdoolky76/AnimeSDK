#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJCNEJFNIID;
namespace RPG::GameCore { class GameEntity; }

#define CKMNJCKACJB_CTOR_OFFSET UNITYSDK_OFFSET(0xD76A2D0)
#define CKMNJCKACJB_KHDKKKNHOMA_OFFSET UNITYSDK_OFFSET(0xD76A280)

	class CKMNJCKACJB : public ::System::Object
	{
	public:
		::BJCNEJFNIID* OLOKHEMMGOH; // 0x10
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x18
		::System::Int32 KHBBNDBJAFK; // 0x20
		::System::Int32 DHPDILNLIPC; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMNJCKACJB_CTOR_OFFSET))(this);
		}

		::System::Int32 KHDKKKNHOMA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMNJCKACJB_KHDKKKNHOMA_OFFSET))(this);
		}

	};
