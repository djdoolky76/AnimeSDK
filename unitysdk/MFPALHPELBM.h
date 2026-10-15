#pragma once
#include "unitysdk/unitysdk.h"
class OHDCJOENBLH;
namespace RPG::GameCore { class TaskContext; }

#define MFPALHPELBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB910DE0)
#define MFPALHPELBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB910E10)

inline static constexpr unsigned int MFPALHPELBM_TypeDefinitionIndex = 52825;

	class MFPALHPELBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OHDCJOENBLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OHDCJOENBLH*))((::PBYTE)hIl2Cpp + MFPALHPELBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPALHPELBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
