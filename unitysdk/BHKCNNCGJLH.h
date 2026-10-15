#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMuseumProjectorState; }
namespace RPG::GameCore { class TaskContext; }

#define BHKCNNCGJLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB48D910)
#define BHKCNNCGJLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB48D940)

inline static constexpr unsigned int BHKCNNCGJLH_TypeDefinitionIndex = 53246;

	class BHKCNNCGJLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMuseumProjectorState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMuseumProjectorState*))((::PBYTE)hIl2Cpp + BHKCNNCGJLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKCNNCGJLH_ONTASKBEGIN_OFFSET))(this);
		}

	};
