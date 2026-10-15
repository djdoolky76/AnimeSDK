#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByActivityElation; }
namespace RPG::GameCore { class TaskContext; }

#define FCPFFADCJMI_CTOR_OFFSET UNITYSDK_OFFSET(0x156C4350)
#define FCPFFADCJMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156C4430)

inline static constexpr unsigned int FCPFFADCJMI_TypeDefinitionIndex = 54806;

	class FCPFFADCJMI
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByActivityElation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByActivityElation*))((::PBYTE)hIl2Cpp + FCPFFADCJMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPFFADCJMI_ONTASKBEGIN_OFFSET))(this);
		}

	};
