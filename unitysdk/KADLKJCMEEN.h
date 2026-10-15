#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyGlobalVisionParams; }
namespace RPG::GameCore { class TaskContext; }

#define KADLKJCMEEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CC290)
#define KADLKJCMEEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2CC2C0)

inline static constexpr unsigned int KADLKJCMEEN_TypeDefinitionIndex = 53027;

	class KADLKJCMEEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyGlobalVisionParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyGlobalVisionParams*))((::PBYTE)hIl2Cpp + KADLKJCMEEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADLKJCMEEN_ONTASKBEGIN_OFFSET))(this);
		}

	};
