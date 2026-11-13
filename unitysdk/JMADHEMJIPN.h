#pragma once
#include "unitysdk/unitysdk.h"
class MLHMAPBJMKC;
namespace RPG::GameCore { class TaskContext; }

#define JMADHEMJIPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A1020)
#define JMADHEMJIPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0A1050)

inline static constexpr unsigned int JMADHEMJIPN_TypeDefinitionIndex = 53421;

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
