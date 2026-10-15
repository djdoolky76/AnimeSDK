#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideEffectAutoLayout; }
namespace RPG::GameCore { class TaskContext; }

#define OCBDDGMOFNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD56380)
#define OCBDDGMOFNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD563B0)

inline static constexpr unsigned int OCBDDGMOFNF_TypeDefinitionIndex = 55092;

	class OCBDDGMOFNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEffectAutoLayout* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEffectAutoLayout*))((::PBYTE)hIl2Cpp + OCBDDGMOFNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBDDGMOFNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
