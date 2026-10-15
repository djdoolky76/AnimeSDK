#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }

#define FKFPFNBKMLD_CTOR_OFFSET UNITYSDK_OFFSET(0x157F0690)

inline static constexpr unsigned int FKFPFNBKMLD_TypeDefinitionIndex = 78278;

	class FKFPFNBKMLD : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelBubbleEventListener* GFDMIMMOMFI; // 0x10
		::RPG::Client::ChimeraDuelTalkData* PLEMACEKKFL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPFNBKMLD_CTOR_OFFSET))(this);
		}

	};
