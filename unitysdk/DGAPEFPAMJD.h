#pragma once
#include "unitysdk/unitysdk.h"
class KADCLBEPFPL;
namespace RPG::GameCore { class TaskContext; }

#define DGAPEFPAMJD_CTOR_OFFSET UNITYSDK_OFFSET(0xE841C50)
#define DGAPEFPAMJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE841C80)

inline static constexpr unsigned int DGAPEFPAMJD_TypeDefinitionIndex = 55369;

	class DGAPEFPAMJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KADCLBEPFPL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KADCLBEPFPL*))((::PBYTE)hIl2Cpp + DGAPEFPAMJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAPEFPAMJD_ONTASKBEGIN_OFFSET))(this);
		}

	};
