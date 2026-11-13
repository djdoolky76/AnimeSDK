#pragma once
#include "unitysdk/unitysdk.h"
class GKDCKOPGIBN;
namespace RPG::GameCore { class TaskContext; }

#define CGCHKMHOJPG_CTOR_OFFSET UNITYSDK_OFFSET(0x178599D0)
#define CGCHKMHOJPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17859A00)

inline static constexpr unsigned int CGCHKMHOJPG_TypeDefinitionIndex = 59379;

	class CGCHKMHOJPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GKDCKOPGIBN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GKDCKOPGIBN*))((::PBYTE)hIl2Cpp + CGCHKMHOJPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCHKMHOJPG_ONTASKBEGIN_OFFSET))(this);
		}

	};
