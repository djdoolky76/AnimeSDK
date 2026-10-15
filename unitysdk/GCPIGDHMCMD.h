#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPhainonChargePoint; }
namespace RPG::GameCore { class TaskContext; }

#define GCPIGDHMCMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15990330)
#define GCPIGDHMCMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15990360)

inline static constexpr unsigned int GCPIGDHMCMD_TypeDefinitionIndex = 55558;

	class GCPIGDHMCMD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPhainonChargePoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPhainonChargePoint*))((::PBYTE)hIl2Cpp + GCPIGDHMCMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPIGDHMCMD_ONTASKBEGIN_OFFSET))(this);
		}

	};
