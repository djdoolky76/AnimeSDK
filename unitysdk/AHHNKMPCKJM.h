#pragma once
#include "unitysdk/unitysdk.h"
class OJIALLHOIBH;
namespace RPG::GameCore { class TaskContext; }

#define AHHNKMPCKJM_CTOR_OFFSET UNITYSDK_OFFSET(0x19B22710)
#define AHHNKMPCKJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B22740)

inline static constexpr unsigned int AHHNKMPCKJM_TypeDefinitionIndex = 56112;

	class AHHNKMPCKJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OJIALLHOIBH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OJIALLHOIBH*))((::PBYTE)hIl2Cpp + AHHNKMPCKJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHNKMPCKJM_ONTASKBEGIN_OFFSET))(this);
		}

	};
