#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ChimeraTriggerPerformanceByPhase; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DCIOICKMNKC_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA9A70)
#define DCIOICKMNKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBA9A80)
#define DCIOICKMNKC_OHFMNGCHCHN_OFFSET UNITYSDK_OFFSET(0xEBAA0F0)
#define DCIOICKMNKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBA9BA0)
#define DCIOICKMNKC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBA9F00)
#define DCIOICKMNKC_TICK_OFFSET UNITYSDK_OFFSET(0xEBAA020)

inline static constexpr unsigned int DCIOICKMNKC_TypeDefinitionIndex = 54791;

	class DCIOICKMNKC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ChimeraTriggerPerformanceByPhase* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* DLJHJKLMADI; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*))((::PBYTE)hIl2Cpp + DCIOICKMNKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIOICKMNKC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIOICKMNKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIOICKMNKC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCIOICKMNKC_TICK_OFFSET))(this, a1);
		}

		::System::Void OHFMNGCHCHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCIOICKMNKC_OHFMNGCHCHN_OFFSET))(this, a1);
		}

	};
