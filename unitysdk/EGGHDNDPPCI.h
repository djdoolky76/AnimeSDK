#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class HIOAMIPNLIN;
namespace RPG::GameCore { class SetModifierDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define EGGHDNDPPCI_CTOR_OFFSET UNITYSDK_OFFSET(0x14514DA0)
#define EGGHDNDPPCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14514DD0)

inline static constexpr unsigned int EGGHDNDPPCI_TypeDefinitionIndex = 55534;

	class EGGHDNDPPCI
	{
	public:
		::RPG::GameCore::ArrayPoolWrapper_1<::HIOAMIPNLIN*> NMJKNKGGBOD; // 0x28
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierDynamicValue*))((::PBYTE)hIl2Cpp + EGGHDNDPPCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGHDNDPPCI_ONTASKBEGIN_OFFSET))(this);
		}

	};
