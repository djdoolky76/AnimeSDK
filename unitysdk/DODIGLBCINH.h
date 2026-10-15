#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshAllTutorialNode; }
namespace RPG::GameCore { class TaskContext; }

#define DODIGLBCINH_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE0A00)
#define DODIGLBCINH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FE0A30)

inline static constexpr unsigned int DODIGLBCINH_TypeDefinitionIndex = 58372;

	class DODIGLBCINH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshAllTutorialNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshAllTutorialNode*))((::PBYTE)hIl2Cpp + DODIGLBCINH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODIGLBCINH_ONTASKBEGIN_OFFSET))(this);
		}

	};
