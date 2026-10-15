#pragma once
#include "unitysdk/unitysdk.h"
class CMCFPEBEHPK;
namespace RPG::GameCore { class TaskContext; }

#define ONECOCNKFLC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF488E0)
#define ONECOCNKFLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF48910)

inline static constexpr unsigned int ONECOCNKFLC_TypeDefinitionIndex = 52845;

	class ONECOCNKFLC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CMCFPEBEHPK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CMCFPEBEHPK*))((::PBYTE)hIl2Cpp + ONECOCNKFLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECOCNKFLC_ONTASKBEGIN_OFFSET))(this);
		}

	};
