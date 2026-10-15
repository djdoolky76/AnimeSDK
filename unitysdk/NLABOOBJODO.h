#pragma once
#include "unitysdk/unitysdk.h"
class OEPOKOJHKEL;
namespace RPG::GameCore { class TaskContext; }

#define NLABOOBJODO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC46DF0)
#define NLABOOBJODO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC46E20)

inline static constexpr unsigned int NLABOOBJODO_TypeDefinitionIndex = 54952;

	class NLABOOBJODO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OEPOKOJHKEL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OEPOKOJHKEL*))((::PBYTE)hIl2Cpp + NLABOOBJODO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLABOOBJODO_ONTASKBEGIN_OFFSET))(this);
		}

	};
