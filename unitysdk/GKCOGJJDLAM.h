#pragma once
#include "unitysdk/unitysdk.h"
class AIGHNCCAJPL;
namespace RPG::GameCore { class TaskContext; }

#define GKCOGJJDLAM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A85C80)
#define GKCOGJJDLAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A85CB0)

inline static constexpr unsigned int GKCOGJJDLAM_TypeDefinitionIndex = 54791;

	class GKCOGJJDLAM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AIGHNCCAJPL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AIGHNCCAJPL*))((::PBYTE)hIl2Cpp + GKCOGJJDLAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOGJJDLAM_ONTASKBEGIN_OFFSET))(this);
		}

	};
