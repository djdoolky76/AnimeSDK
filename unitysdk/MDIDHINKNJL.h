#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AttachNishastagaItemToScene; }
namespace RPG::GameCore { class TaskContext; }

#define MDIDHINKNJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AA5F0)
#define MDIDHINKNJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8AA620)

inline static constexpr unsigned int MDIDHINKNJL_TypeDefinitionIndex = 57936;

	class MDIDHINKNJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachNishastagaItemToScene* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachNishastagaItemToScene*))((::PBYTE)hIl2Cpp + MDIDHINKNJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIDHINKNJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
