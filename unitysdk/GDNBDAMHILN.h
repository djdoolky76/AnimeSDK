#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define GDNBDAMHILN_CTOR_OFFSET UNITYSDK_OFFSET(0x17CB9B70)

inline static constexpr unsigned int GDNBDAMHILN_TypeDefinitionIndex = 58924;

	class GDNBDAMHILN : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::String* LBFLPOJHJIG; // 0x28
		::System::Boolean MOKNCFJICIC; // 0x30
		::System::Boolean BPCINCEKHLN; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNBDAMHILN_CTOR_OFFSET))(this);
		}

	};
