#pragma once
#include "unitysdk/unitysdk.h"
class BBLBOEGCHOK;
namespace RPG::GameCore { class TaskContext; }

#define AFEDBNLAGFP_CTOR_OFFSET UNITYSDK_OFFSET(0xCF06AA0)
#define AFEDBNLAGFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF06AD0)

inline static constexpr unsigned int AFEDBNLAGFP_TypeDefinitionIndex = 53870;

	class AFEDBNLAGFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BBLBOEGCHOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BBLBOEGCHOK*))((::PBYTE)hIl2Cpp + AFEDBNLAGFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDBNLAGFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
