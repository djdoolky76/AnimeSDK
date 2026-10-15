#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBpFeature; }
namespace RPG::GameCore { class TaskContext; }

#define IFNNFAJLDEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1B910)
#define IFNNFAJLDEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F1B940)

inline static constexpr unsigned int IFNNFAJLDEC_TypeDefinitionIndex = 55361;

	class IFNNFAJLDEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBpFeature* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBpFeature*))((::PBYTE)hIl2Cpp + IFNNFAJLDEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNNFAJLDEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
