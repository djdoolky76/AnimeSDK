#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetActivityTelevisionBuffInfo; }
namespace RPG::GameCore { class TaskContext; }

#define PNLCCIFGICC_CTOR_OFFSET UNITYSDK_OFFSET(0xC3449E0)
#define PNLCCIFGICC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC344A10)

inline static constexpr unsigned int PNLCCIFGICC_TypeDefinitionIndex = 55339;

	class PNLCCIFGICC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + PNLCCIFGICC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLCCIFGICC_ONTASKBEGIN_OFFSET))(this);
		}

	};
