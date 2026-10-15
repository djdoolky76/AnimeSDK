#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvWaitPropSteerEventV2; }
namespace RPG::GameCore { class TaskContext; }

#define KMFNAAJDFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB54C4A0)
#define KMFNAAJDFOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB54C4B0)
#define KMFNAAJDFOJ_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB54CD80)
#define KMFNAAJDFOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB54C610)
#define KMFNAAJDFOJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB54C900)
#define KMFNAAJDFOJ_TICK_OFFSET UNITYSDK_OFFSET(0xB54CB30)

inline static constexpr unsigned int KMFNAAJDFOJ_TypeDefinitionIndex = 52521;

	class KMFNAAJDFOJ : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* CCEOCLLGFHH; // 0x18
		::RPG::GameCore::AdvWaitPropSteerEventV2* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::GELIALJDFBL* EHMOIGBHLCP; // 0x30
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
