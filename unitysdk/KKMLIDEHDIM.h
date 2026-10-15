#pragma once
#include "unitysdk/unitysdk.h"
class NMFDMKMIDKB;
namespace RPG::GameCore { class TaskContext; }

#define KKMLIDEHDIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CF0A0)
#define KKMLIDEHDIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4CF0D0)

inline static constexpr unsigned int KKMLIDEHDIM_TypeDefinitionIndex = 55016;

	class KKMLIDEHDIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMFDMKMIDKB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMFDMKMIDKB*))((::PBYTE)hIl2Cpp + KKMLIDEHDIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMLIDEHDIM_ONTASKBEGIN_OFFSET))(this);
		}

	};
