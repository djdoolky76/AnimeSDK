#pragma once
#include "unitysdk/unitysdk.h"
class NNHBMIGFPHN;
namespace RPG::GameCore { class TaskContext; }

#define GONINENNNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x16AC0E00)
#define GONINENNNGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16AC0E30)

inline static constexpr unsigned int GONINENNNGM_TypeDefinitionIndex = 56431;

	class GONINENNNGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NNHBMIGFPHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NNHBMIGFPHN*))((::PBYTE)hIl2Cpp + GONINENNNGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINENNNGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
