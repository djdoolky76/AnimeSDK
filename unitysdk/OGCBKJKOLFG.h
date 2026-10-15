#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class SetDynamicValueByModifierValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define OGCBKJKOLFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE4B780)
#define OGCBKJKOLFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE4B850)
#define OGCBKJKOLFG_IOONKCMPADG_OFFSET UNITYSDK_OFFSET(0xBE4BBE0)
#define OGCBKJKOLFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE4B890)
#define OGCBKJKOLFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE4BEB0)
#define OGCBKJKOLFG_TICK_OFFSET UNITYSDK_OFFSET(0xBE4BF00)

inline static constexpr unsigned int OGCBKJKOLFG_TypeDefinitionIndex = 55454;

	class OGCBKJKOLFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetDynamicValueByModifierValue* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::RPG::GameCore::ArrayPoolWrapper_1<::RPG::GameCore::TurnBasedModifierInstance*> NMJKNKGGBOD; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByModifierValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByModifierValue*))((::PBYTE)hIl2Cpp + OGCBKJKOLFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCBKJKOLFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCBKJKOLFG_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IOONKCMPADG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OGCBKJKOLFG_IOONKCMPADG_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCBKJKOLFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGCBKJKOLFG_TICK_OFFSET))(this, a1);
		}

	};
