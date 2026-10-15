#pragma once
#include "unitysdk/unitysdk.h"
class BPJEJGHJKMK;
namespace RPG::GameCore { class TaskContext; }

#define GMHKGEJGACJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC6CC0)
#define GMHKGEJGACJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AC6CF0)

inline static constexpr unsigned int GMHKGEJGACJ_TypeDefinitionIndex = 58543;

	class GMHKGEJGACJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BPJEJGHJKMK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BPJEJGHJKMK*))((::PBYTE)hIl2Cpp + GMHKGEJGACJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHKGEJGACJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
