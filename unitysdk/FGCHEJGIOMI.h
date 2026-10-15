#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearDialogCamera; }
namespace RPG::GameCore { class TaskContext; }

#define FGCHEJGIOMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15746BE0)
#define FGCHEJGIOMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15746C10)

inline static constexpr unsigned int FGCHEJGIOMI_TypeDefinitionIndex = 58026;

	class FGCHEJGIOMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearDialogCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearDialogCamera*))((::PBYTE)hIl2Cpp + FGCHEJGIOMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCHEJGIOMI_ONTASKBEGIN_OFFSET))(this);
		}

	};
