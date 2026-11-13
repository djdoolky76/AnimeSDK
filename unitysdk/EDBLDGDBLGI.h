#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetNpcWaypath; }
namespace RPG::GameCore { class TaskContext; }

#define EDBLDGDBLGI_CTOR_OFFSET UNITYSDK_OFFSET(0x186B27D0)
#define EDBLDGDBLGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186B2800)

inline static constexpr unsigned int EDBLDGDBLGI_TypeDefinitionIndex = 54413;

	class EDBLDGDBLGI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNpcWaypath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNpcWaypath*))((::PBYTE)hIl2Cpp + EDBLDGDBLGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBLDGDBLGI_ONTASKBEGIN_OFFSET))(this);
		}

	};
