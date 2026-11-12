#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PreloadMap; }
namespace RPG::GameCore { class TaskContext; }

#define APHAFNDOEHK_CTOR_OFFSET UNITYSDK_OFFSET(0x16A0BCA0)
#define APHAFNDOEHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A0BCD0)

inline static constexpr unsigned int APHAFNDOEHK_TypeDefinitionIndex = 59555;

	class APHAFNDOEHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadMap*))((::PBYTE)hIl2Cpp + APHAFNDOEHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHAFNDOEHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
