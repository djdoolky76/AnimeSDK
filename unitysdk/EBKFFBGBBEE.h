#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTimeRewindEntityControlMode; }
namespace RPG::GameCore { class TaskContext; }

#define EBKFFBGBBEE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFB800)
#define EBKFFBGBBEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CFB830)

inline static constexpr unsigned int EBKFFBGBBEE_TypeDefinitionIndex = 53393;

	class EBKFFBGBBEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindEntityControlMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindEntityControlMode*))((::PBYTE)hIl2Cpp + EBKFFBGBBEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKFFBGBBEE_ONTASKBEGIN_OFFSET))(this);
		}

	};
