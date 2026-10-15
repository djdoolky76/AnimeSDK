#pragma once
#include "unitysdk/unitysdk.h"
class GLBAFPOFIKK;
namespace RPG::GameCore { class TaskContext; }

#define MHDAHIALMAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB92A3A0)
#define MHDAHIALMAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB92A3D0)

inline static constexpr unsigned int MHDAHIALMAO_TypeDefinitionIndex = 55496;

	class MHDAHIALMAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GLBAFPOFIKK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GLBAFPOFIKK*))((::PBYTE)hIl2Cpp + MHDAHIALMAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDAHIALMAO_ONTASKBEGIN_OFFSET))(this);
		}

	};
