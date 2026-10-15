#pragma once
#include "unitysdk/unitysdk.h"
class FGMDCIDDILA;
namespace RPG::GameCore { class TaskContext; }

#define EEKCJKKMJDH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A32100)
#define EEKCJKKMJDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A32130)

inline static constexpr unsigned int EEKCJKKMJDH_TypeDefinitionIndex = 53352;

	class EEKCJKKMJDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FGMDCIDDILA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FGMDCIDDILA*))((::PBYTE)hIl2Cpp + EEKCJKKMJDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKCJKKMJDH_ONTASKBEGIN_OFFSET))(this);
		}

	};
