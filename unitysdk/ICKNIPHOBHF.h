#pragma once
#include "unitysdk/unitysdk.h"
class FOFDNPKONLJ;
namespace RPG::GameCore { class TaskContext; }

#define ICKNIPHOBHF_CTOR_OFFSET UNITYSDK_OFFSET(0x16DFE8C0)
#define ICKNIPHOBHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DFE8F0)

inline static constexpr unsigned int ICKNIPHOBHF_TypeDefinitionIndex = 57083;

	class ICKNIPHOBHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FOFDNPKONLJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FOFDNPKONLJ*))((::PBYTE)hIl2Cpp + ICKNIPHOBHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKNIPHOBHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
