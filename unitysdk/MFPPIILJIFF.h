#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/ONLHJAEPLBB.h"
class BGOBCKLPEMK;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimStateWithMove; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define MFPPIILJIFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB90C9A0)
#define MFPPIILJIFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB90CCD0)
#define MFPPIILJIFF_FAELOPANPPM_OFFSET UNITYSDK_OFFSET(0xB90D7D0)
#define MFPPIILJIFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90CE40)
#define MFPPIILJIFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB90DBD0)
#define MFPPIILJIFF_TICK_OFFSET UNITYSDK_OFFSET(0xB90DD80)

inline static constexpr unsigned int MFPPIILJIFF_TypeDefinitionIndex = 55716;

	class MFPPIILJIFF : public ::GELIALJDFBL
	{
	public:
		::BGOBCKLPEMK* JDNLKGBPHDC; // 0x18
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
		::UnityEngine::Animator* JDFCDMAPBFJ; // 0x28
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* KELALIPPMIM; // 0x30
		::ONLHJAEPLBB EJPILIBEFCB; // 0x38
		::System::Collections::Generic::List_1<::System::Boolean>* NFJNDAFJCAG; // 0x48
		::RPG::GameCore::TriggerAnimStateWithMove* OFKGLJOAMLD; // 0x50
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x58
		::System::Int32 APNGJPMPMOB; // 0x60
		::System::Boolean HHCFIHBHPLB; // 0x64
		::System::Boolean PFMNLFEOAGO; // 0x65
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + MFPPIILJIFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPIILJIFF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPIILJIFF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPIILJIFF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFPPIILJIFF_TICK_OFFSET))(this, a1);
		}

		::System::Void FAELOPANPPM(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + MFPPIILJIFF_FAELOPANPPM_OFFSET))(this, a1);
		}

	};
