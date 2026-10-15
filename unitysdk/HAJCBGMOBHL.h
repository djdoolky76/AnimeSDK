#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddGridFightDropData; }
namespace RPG::GameCore { class TaskContext; }

#define HAJCBGMOBHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B78DB0)
#define HAJCBGMOBHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B78DE0)

inline static constexpr unsigned int HAJCBGMOBHL_TypeDefinitionIndex = 54814;

	class HAJCBGMOBHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGridFightDropData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGridFightDropData*))((::PBYTE)hIl2Cpp + HAJCBGMOBHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJCBGMOBHL_ONTASKBEGIN_OFFSET))(this);
		}

	};
