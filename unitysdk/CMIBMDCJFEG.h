#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNHHBEDJHF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMIBMDCJFEG_CTOR_OFFSET UNITYSDK_OFFSET(0xE373BC0)

inline static constexpr unsigned int CMIBMDCJFEG_TypeDefinitionIndex = 48647;

	class CMIBMDCJFEG : public ::System::Object
	{
	public:
		::System::String* JKMABBEGEAH; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x18
		::System::Collections::Generic::List_1<::KPNHHBEDJHF*>* BNCNCFMAMIG; // 0x20
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x28
		::System::Boolean MOKNCFJICIC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIBMDCJFEG_CTOR_OFFSET))(this);
		}

	};
