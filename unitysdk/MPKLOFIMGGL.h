#pragma once
#include "unitysdk/unitysdk.h"
class GFJHLACJMNK;
namespace RPG::GameCore { class TaskContext; }

#define MPKLOFIMGGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2289E0)
#define MPKLOFIMGGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B228A10)

inline static constexpr unsigned int MPKLOFIMGGL_TypeDefinitionIndex = 59630;

	class MPKLOFIMGGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GFJHLACJMNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GFJHLACJMNK*))((::PBYTE)hIl2Cpp + MPKLOFIMGGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKLOFIMGGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
