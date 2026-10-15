#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MoveUINodeToMask; }
namespace RPG::GameCore { class TaskContext; }

#define GCHGNGDHNEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1596B630)
#define GCHGNGDHNEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1596B660)

inline static constexpr unsigned int GCHGNGDHNEE_TypeDefinitionIndex = 58232;

	class GCHGNGDHNEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveUINodeToMask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveUINodeToMask*))((::PBYTE)hIl2Cpp + GCHGNGDHNEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGNGDHNEE_ONTASKBEGIN_OFFSET))(this);
		}

	};
