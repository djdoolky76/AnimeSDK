#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnterMarblePVEMatch; }
namespace RPG::GameCore { class TaskContext; }

#define LHKNGLAFOIA_BBLFMIHBLAB_OFFSET UNITYSDK_OFFSET(0xB6B1DE0)
#define LHKNGLAFOIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B1B70)
#define LHKNGLAFOIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6B1BA0)
#define LHKNGLAFOIA__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB6B2570)

inline static constexpr unsigned int LHKNGLAFOIA_TypeDefinitionIndex = 52300;

	class LHKNGLAFOIA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMarblePVEMatch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMarblePVEMatch*))((::PBYTE)hIl2Cpp + LHKNGLAFOIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNGLAFOIA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BBLFMIHBLAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNGLAFOIA_BBLFMIHBLAB_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHKNGLAFOIA__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

	};
