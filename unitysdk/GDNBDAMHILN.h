#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define GDNBDAMHILN_CTOR_OFFSET UNITYSDK_OFFSET(0x159B7450)

inline static constexpr unsigned int GDNBDAMHILN_TypeDefinitionIndex = 57692;

	class GDNBDAMHILN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* LBFLPOJHJIG; // 0x20
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x28
		::System::Boolean MOKNCFJICIC; // 0x30
		::System::Boolean BPCINCEKHLN; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNBDAMHILN_CTOR_OFFSET))(this);
		}

	};
