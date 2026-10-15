#pragma once
#include "unitysdk/unitysdk.h"
class MNLJCDFDLFD;
namespace RPG::GameCore { class TaskContext; }

#define DLAICLBKJLB_CTOR_OFFSET UNITYSDK_OFFSET(0xF88ADD0)
#define DLAICLBKJLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF88AE00)

inline static constexpr unsigned int DLAICLBKJLB_TypeDefinitionIndex = 53053;

	class DLAICLBKJLB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MNLJCDFDLFD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MNLJCDFDLFD*))((::PBYTE)hIl2Cpp + DLAICLBKJLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAICLBKJLB_ONTASKBEGIN_OFFSET))(this);
		}

	};
