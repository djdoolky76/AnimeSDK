#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AddFinishMissionData_ConsumeItem; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HILEKPOCPCH_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0x16C46980)
#define HILEKPOCPCH_CTOR_OFFSET UNITYSDK_OFFSET(0x16C45B90)
#define HILEKPOCPCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C45C80)
#define HILEKPOCPCH_GDJCOKGKIGA_OFFSET UNITYSDK_OFFSET(0x16C467E0)
#define HILEKPOCPCH_HBLGHOCOHAL_OFFSET UNITYSDK_OFFSET(0x16C46B30)
#define HILEKPOCPCH_HOPBLCDGFIN_OFFSET UNITYSDK_OFFSET(0x16C468E0)
#define HILEKPOCPCH_KEAMOLIEKBE_OFFSET UNITYSDK_OFFSET(0x16C46580)
#define HILEKPOCPCH_LEBCFBEHNDK_OFFSET UNITYSDK_OFFSET(0x16C45F60)
#define HILEKPOCPCH_NIDHPKONFEI_OFFSET UNITYSDK_OFFSET(0x16C462C0)
#define HILEKPOCPCH_OMOJNFEMELN_OFFSET UNITYSDK_OFFSET(0x16C46660)
#define HILEKPOCPCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C45E70)
#define HILEKPOCPCH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16C463F0)
#define HILEKPOCPCH_TICK_OFFSET UNITYSDK_OFFSET(0x16C464D0)

inline static constexpr unsigned int HILEKPOCPCH_TypeDefinitionIndex = 53424;

	class HILEKPOCPCH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SubMissionRow* EFLMIIAAEGP; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* JOABCNLPPGI; // 0x28
		::RPG::GameCore::AddFinishMissionData_ConsumeItem* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* KPHGLEKEALH; // 0x38
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x40
		// static const ::System::String* HKBOGHBKDCN; // 0x0
		// static const ::System::String* MHOLHFFKCMI; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_ConsumeItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_ConsumeItem*))((::PBYTE)hIl2Cpp + HILEKPOCPCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HILEKPOCPCH_TICK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* KEAMOLIEKBE()
		{
			return ((::Il2CppArray<::RPG::GameCore::MissionItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_KEAMOLIEKBE_OFFSET))(this);
		}

		::System::Boolean OMOJNFEMELN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_OMOJNFEMELN_OFFSET))(this);
		}

		::System::Void LEBCFBEHNDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_LEBCFBEHNDK_OFFSET))(this);
		}

		::System::Void HOPBLCDGFIN(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HILEKPOCPCH_HOPBLCDGFIN_OFFSET))(this, a1);
		}

		::System::Void GDJCOKGKIGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_GDJCOKGKIGA_OFFSET))(this);
		}

		::System::Void BKGCGEEDHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HILEKPOCPCH_BKGCGEEDHDI_OFFSET))(this, a1);
		}

		::System::Void NIDHPKONFEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_NIDHPKONFEI_OFFSET))(this);
		}

		::System::Void HBLGHOCOHAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILEKPOCPCH_HBLGHOCOHAL_OFFSET))(this);
		}

	};
