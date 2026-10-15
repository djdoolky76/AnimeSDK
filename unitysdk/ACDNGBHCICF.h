#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetDeathDragonLinjian; }
namespace RPG::GameCore { class TaskContext; }

#define ACDNGBHCICF_CTOR_OFFSET UNITYSDK_OFFSET(0xB118220)
#define ACDNGBHCICF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB118250)

inline static constexpr unsigned int ACDNGBHCICF_TypeDefinitionIndex = 55394;

	class ACDNGBHCICF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDeathDragonLinjian* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDeathDragonLinjian*))((::PBYTE)hIl2Cpp + ACDNGBHCICF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDNGBHCICF_ONTASKBEGIN_OFFSET))(this);
		}

	};
