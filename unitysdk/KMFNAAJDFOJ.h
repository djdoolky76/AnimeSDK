#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvWaitPropSteerEventV2; }
namespace RPG::GameCore { class TaskContext; }

#define KMFNAAJDFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBD9E9C0)
#define KMFNAAJDFOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD9E9D0)
#define KMFNAAJDFOJ_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBD9F190)
#define KMFNAAJDFOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD9EB30)
#define KMFNAAJDFOJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD9EDF0)
#define KMFNAAJDFOJ_TICK_OFFSET UNITYSDK_OFFSET(0xBD9EFF0)

inline static constexpr unsigned int KMFNAAJDFOJ_TypeDefinitionIndex = 53627;

	class KMFNAAJDFOJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvWaitPropSteerEventV2* OFKGLJOAMLD; // 0x18
		::GELIALJDFBL* EHMOIGBHLCP; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::GELIALJDFBL* CCEOCLLGFHH; // 0x30
		// static const ::System::String* AIEGIGMPEKD; // 0x0
		// static const ::System::String* LFAFJCOCHOK; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvWaitPropSteerEventV2*))((::PBYTE)hIl2Cpp + KMFNAAJDFOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFNAAJDFOJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFNAAJDFOJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFNAAJDFOJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMFNAAJDFOJ_TICK_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KMFNAAJDFOJ_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
