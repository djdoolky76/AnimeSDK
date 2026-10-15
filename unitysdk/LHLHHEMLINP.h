#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChangeV2; }

#define LHLHHEMLINP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B3A30)
#define LHLHHEMLINP_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xB6B4150)
#define LHLHHEMLINP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6B3F50)
#define LHLHHEMLINP__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB6B3BA0)
#define LHLHHEMLINP__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6B3FB0)
#define LHLHHEMLINP__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6B4080)

inline static constexpr unsigned int LHLHHEMLINP_TypeDefinitionIndex = 53490;

	class LHLHHEMLINP
	{
	public:
		::System::UInt32 IDOEBJDGHBF; // 0x68
		::System::UInt32 JJNEKDFIBMA; // 0x6C
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
