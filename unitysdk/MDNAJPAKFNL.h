#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FlappyScrollAgentConfig; }

#define MDNAJPAKFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F68C0)

inline static constexpr unsigned int MDNAJPAKFNL_TypeDefinitionIndex = 43367;

	class MDNAJPAKFNL : public ::System::Object
	{
	public:
		::RPG::GameCore::FlappyScrollAgentConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNAJPAKFNL_CTOR_OFFSET))(this);
		}

	};
