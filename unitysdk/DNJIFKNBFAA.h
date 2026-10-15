#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
class FDLCPHKGHME;
namespace RPG::GameCore { class LockUISkillOperation; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNJIFKNBFAA_CTOR_OFFSET UNITYSDK_OFFSET(0x11963240)
#define DNJIFKNBFAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11963250)
#define DNJIFKNBFAA_FLMFCGFOPHE_OFFSET UNITYSDK_OFFSET(0x11963690)
#define DNJIFKNBFAA_HKHKEELPNIC_OFFSET UNITYSDK_OFFSET(0x11963950)
#define DNJIFKNBFAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11963290)
#define DNJIFKNBFAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11963A70)
#define DNJIFKNBFAA_TICK_OFFSET UNITYSDK_OFFSET(0x11963AC0)

	class DNJIFKNBFAA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LockUISkillOperation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockUISkillOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockUISkillOperation*))((::PBYTE)hIl2Cpp + DNJIFKNBFAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJIFKNBFAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJIFKNBFAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJIFKNBFAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNJIFKNBFAA_TICK_OFFSET))(this, a1);
		}

		::System::Void FLMFCGFOPHE(::System::Collections::Generic::List_1<::FDLCPHKGHME*>* a1, ::RPG::GameCore::ControlSkillType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FDLCPHKGHME*>*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + DNJIFKNBFAA_FLMFCGFOPHE_OFFSET))(this, a1, a2);
		}

		::System::Void HKHKEELPNIC(::System::Collections::Generic::List_1<::FDLCPHKGHME*>* a1, ::RPG::GameCore::ControlSkillType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FDLCPHKGHME*>*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + DNJIFKNBFAA_HKHKEELPNIC_OFFSET))(this, a1, a2);
		}

	};
