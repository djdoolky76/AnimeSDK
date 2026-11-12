#pragma once
#include "unitysdk/unitysdk.h"
class OHDCJOENBLH;
namespace RPG::GameCore { class TaskContext; }

#define MFPALHPELBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1C2EA0)
#define MFPALHPELBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1C2ED0)

inline static constexpr unsigned int MFPALHPELBM_TypeDefinitionIndex = 53969;

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
