#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ConsumeMissionItemPerformance; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JINGGPPFBMC_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0xB1FE570)
#define JINGGPPFBMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FDB30)
#define JINGGPPFBMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1FDC20)
#define JINGGPPFBMC_HBLGHOCOHAL_OFFSET UNITYSDK_OFFSET(0xB1FE720)
#define JINGGPPFBMC_LEBCFBEHNDK_OFFSET UNITYSDK_OFFSET(0xB1FDF00)
#define JINGGPPFBMC_NIDHPKONFEI_OFFSET UNITYSDK_OFFSET(0xB1FE1D0)
#define JINGGPPFBMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1FDE10)
#define JINGGPPFBMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1FE350)
#define JINGGPPFBMC_TICK_OFFSET UNITYSDK_OFFSET(0xB1FE430)

inline static constexpr unsigned int JINGGPPFBMC_TypeDefinitionIndex = 52700;

	class JINGGPPFBMC : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KPHGLEKEALH; // 0x18
		::KFELGAIGHAP* JOABCNLPPGI; // 0x20
		::RPG::GameCore::SubMissionRow* EFLMIIAAEGP; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x38
		::RPG::GameCore::ConsumeMissionItemPerformance* OFKGLJOAMLD; // 0x40
		// static const ::System::String* HKBOGHBKDCN; // 0x0
		// static const ::System::String* KICKKGGMKMO; // 0x0
		// static const ::System::String* LCOMCFLABDK; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeMissionItemPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeMissionItemPerformance*))((::PBYTE)hIl2Cpp + JINGGPPFBMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGGPPFBMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGGPPFBMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGGPPFBMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JINGGPPFBMC_TICK_OFFSET))(this, a1);
		}

		::System::Void LEBCFBEHNDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGGPPFBMC_LEBCFBEHNDK_OFFSET))(this);
		}

		::System::Void BKGCGEEDHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JINGGPPFBMC_BKGCGEEDHDI_OFFSET))(this, a1);
		}

		::System::Void NIDHPKONFEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGGPPFBMC_NIDHPKONFEI_OFFSET))(this);
		}

		::System::Void HBLGHOCOHAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGGPPFBMC_HBLGHOCOHAL_OFFSET))(this);
		}

	};
