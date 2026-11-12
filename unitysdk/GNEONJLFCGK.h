#pragma once
#include "unitysdk/unitysdk.h"
class GMODDCLOONA;
namespace RPG::GameCore { class TaskContext; }

#define GNEONJLFCGK_CTOR_OFFSET UNITYSDK_OFFSET(0x16A83A80)
#define GNEONJLFCGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A83AB0)

inline static constexpr unsigned int GNEONJLFCGK_TypeDefinitionIndex = 59868;

	class GNEONJLFCGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GMODDCLOONA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GMODDCLOONA*))((::PBYTE)hIl2Cpp + GNEONJLFCGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEONJLFCGK_ONTASKBEGIN_OFFSET))(this);
		}

	};
