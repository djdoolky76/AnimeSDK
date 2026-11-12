#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class ClearTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIBJHDHGGNG_CTOR_OFFSET UNITYSDK_OFFSET(0xC202B00)
#define MIBJHDHGGNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC202D90)

inline static constexpr unsigned int MIBJHDHGGNG_TypeDefinitionIndex = 57076;

	class MIBJHDHGGNG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OLFGIJKJJFB; // 0x28
		::RPG::Client::MockAnimator* JDFCDMAPBFJ; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTrigger*))((::PBYTE)hIl2Cpp + MIBJHDHGGNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJHDHGGNG_ONTASKBEGIN_OFFSET))(this);
		}

	};
