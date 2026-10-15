#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNHHBEDJHF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMIBMDCJFEG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA356B0)

inline static constexpr unsigned int CMIBMDCJFEG_TypeDefinitionIndex = 47617;

	class CMIBMDCJFEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KPNHHBEDJHF*>* BNCNCFMAMIG; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::System::String* JKMABBEGEAH; // 0x28
		::System::Boolean MOKNCFJICIC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIBMDCJFEG_CTOR_OFFSET))(this);
		}

	};
