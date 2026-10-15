#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInCharacterIDGroup; }
namespace RPG::GameCore { class TaskContext; }

#define BBLIMGFAJKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E90F30)
#define BBLIMGFAJKH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E90F60)

inline static constexpr unsigned int BBLIMGFAJKH_TypeDefinitionIndex = 54664;

	class BBLIMGFAJKH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + BBLIMGFAJKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLIMGFAJKH_EVALUATE_OFFSET))(this);
		}

	};
