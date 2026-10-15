#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChangeV2; }

#define LHLHHEMLINP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BA650)
#define LHLHHEMLINP_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xB6BAD70)
#define LHLHHEMLINP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6BAB70)
#define LHLHHEMLINP__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB6BA7C0)
#define LHLHHEMLINP__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6BABD0)
#define LHLHHEMLINP__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6BACA0)

	class LHLHHEMLINP
	{
	public:
		::System::UInt32 JJNEKDFIBMA; // 0x68
		::System::UInt32 IDOEBJDGHBF; // 0x6C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChangeV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChangeV2*))((::PBYTE)hIl2Cpp + LHLHHEMLINP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLHHEMLINP__PREPAREDATA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLHHEMLINP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLHHEMLINP__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLHHEMLINP__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LHLHHEMLINP_IFCNMIBPBOI_OFFSET))(this, a1);
		}

	};
