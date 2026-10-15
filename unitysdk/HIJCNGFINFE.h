#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreateAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define HIJCNGFINFE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CEAF60)
#define HIJCNGFINFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CEAF90)

inline static constexpr unsigned int HIJCNGFINFE_TypeDefinitionIndex = 54976;

	class HIJCNGFINFE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateAttachPoint*))((::PBYTE)hIl2Cpp + HIJCNGFINFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCNGFINFE_ONTASKBEGIN_OFFSET))(this);
		}

	};
