#pragma once
#include "unitysdk/unitysdk.h"
class HEPJEEHMABM;
namespace RPG::GameCore { class TaskContext; }

#define LELDMNDMMCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB6567E0)
#define LELDMNDMMCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB656810)

inline static constexpr unsigned int LELDMNDMMCN_TypeDefinitionIndex = 52312;

	class LELDMNDMMCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HEPJEEHMABM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HEPJEEHMABM*))((::PBYTE)hIl2Cpp + LELDMNDMMCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LELDMNDMMCN_ONTASKBEGIN_OFFSET))(this);
		}

	};
