#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropEscalatorMoveStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EILAGBFHCLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1640FA40)
#define EILAGBFHCLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1640FA50)
#define EILAGBFHCLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1640FAF0)
#define EILAGBFHCLA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1640FAA0)
#define EILAGBFHCLA_TICK_OFFSET UNITYSDK_OFFSET(0x1640FCD0)

inline static constexpr unsigned int EILAGBFHCLA_TypeDefinitionIndex = 59576;

	class EILAGBFHCLA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropEscalatorMoveStart* OFKGLJOAMLD; // 0x20
		::System::String* IJMGEMMNNPI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEscalatorMoveStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEscalatorMoveStart*))((::PBYTE)hIl2Cpp + EILAGBFHCLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILAGBFHCLA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILAGBFHCLA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILAGBFHCLA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EILAGBFHCLA_TICK_OFFSET))(this, a1);
		}

	};
