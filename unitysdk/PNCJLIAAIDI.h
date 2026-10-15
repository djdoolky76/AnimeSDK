#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCharacterScaleFollow; }
namespace RPG::GameCore { class TaskContext; }

#define PNCJLIAAIDI_CTOR_OFFSET UNITYSDK_OFFSET(0xC333490)
#define PNCJLIAAIDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3334A0)
#define PNCJLIAAIDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3334E0)
#define PNCJLIAAIDI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC333860)
#define PNCJLIAAIDI_TICK_OFFSET UNITYSDK_OFFSET(0xC3338B0)

inline static constexpr unsigned int PNCJLIAAIDI_TypeDefinitionIndex = 55372;

	class PNCJLIAAIDI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetCharacterScaleFollow* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterScaleFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterScaleFollow*))((::PBYTE)hIl2Cpp + PNCJLIAAIDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCJLIAAIDI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCJLIAAIDI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCJLIAAIDI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNCJLIAAIDI_TICK_OFFSET))(this, a1);
		}

	};
