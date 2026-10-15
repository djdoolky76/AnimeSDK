#pragma once
#include "unitysdk/unitysdk.h"
class MLHMAPBJMKC;
namespace RPG::GameCore { class TaskContext; }

#define JMADHEMJIPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB252790)
#define JMADHEMJIPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2527C0)

inline static constexpr unsigned int JMADHEMJIPN_TypeDefinitionIndex = 52315;

	class JMADHEMJIPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MLHMAPBJMKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MLHMAPBJMKC*))((::PBYTE)hIl2Cpp + JMADHEMJIPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMADHEMJIPN_ONTASKBEGIN_OFFSET))(this);
		}

	};
