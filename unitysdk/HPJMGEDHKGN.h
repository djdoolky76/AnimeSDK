#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define HPJMGEDHKGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC1E40)
#define HPJMGEDHKGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DC1E70)

inline static constexpr unsigned int HPJMGEDHKGN_TypeDefinitionIndex = 54802;

	class HPJMGEDHKGN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearActionCountDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearActionCountDown*))((::PBYTE)hIl2Cpp + HPJMGEDHKGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJMGEDHKGN_ONTASKBEGIN_OFFSET))(this);
		}

	};
