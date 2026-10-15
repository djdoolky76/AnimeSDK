#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define EKNNFMPDHLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15504330)
#define EKNNFMPDHLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15504360)

inline static constexpr unsigned int EKNNFMPDHLK_TypeDefinitionIndex = 58388;

	class EKNNFMPDHLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveMazeBuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveMazeBuff*))((::PBYTE)hIl2Cpp + EKNNFMPDHLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNNFMPDHLK_ONTASKBEGIN_OFFSET))(this);
		}

	};
