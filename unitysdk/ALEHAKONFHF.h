#pragma once
#include "unitysdk/unitysdk.h"
class HEOCCIIJGDN;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define ALEHAKONFHF_CTOR_OFFSET UNITYSDK_OFFSET(0x15565650)
#define ALEHAKONFHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15565680)
#define ALEHAKONFHF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15565830)
#define ALEHAKONFHF_TICK_OFFSET UNITYSDK_OFFSET(0x15565880)

inline static constexpr unsigned int ALEHAKONFHF_TypeDefinitionIndex = 52138;

	class ALEHAKONFHF
	{
	public:
		::NGFHCJIAOLH* DPOJGPNDPMD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HEOCCIIJGDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HEOCCIIJGDN*))((::PBYTE)hIl2Cpp + ALEHAKONFHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEHAKONFHF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEHAKONFHF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALEHAKONFHF_TICK_OFFSET))(this, a1);
		}

	};
