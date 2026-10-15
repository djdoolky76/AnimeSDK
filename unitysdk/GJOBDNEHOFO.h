#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMapPoseSwitcherRemove; }
namespace System { class Object; }

#define GJOBDNEHOFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A6E230)
#define GJOBDNEHOFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A6E4C0)
#define GJOBDNEHOFO_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15A6E8F0)
#define GJOBDNEHOFO_KDFLCALIPBJ_OFFSET UNITYSDK_OFFSET(0x15A6E980)
#define GJOBDNEHOFO__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x15A6E530)
#define GJOBDNEHOFO__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A6E770)
#define GJOBDNEHOFO__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A6E830)

inline static constexpr unsigned int GJOBDNEHOFO_TypeDefinitionIndex = 52994;

	class GJOBDNEHOFO
	{
	public:
		::RPG::PoolList_1<::System::UInt32>* HDBOBADLEML; // 0x68
		::System::UInt32 PEEFHNHDBMF; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*))((::PBYTE)hIl2Cpp + GJOBDNEHOFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOBDNEHOFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOBDNEHOFO__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOBDNEHOFO__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOBDNEHOFO__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJOBDNEHOFO_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Boolean KDFLCALIPBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOBDNEHOFO_KDFLCALIPBJ_OFFSET))(this);
		}

	};
