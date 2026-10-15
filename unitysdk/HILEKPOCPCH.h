#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AddFinishMissionData_ConsumeItem; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HILEKPOCPCH_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0x15CF7710)
#define HILEKPOCPCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF6890)
#define HILEKPOCPCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CF6980)
#define HILEKPOCPCH_GDJCOKGKIGA_OFFSET UNITYSDK_OFFSET(0x15CF7570)
#define HILEKPOCPCH_HBLGHOCOHAL_OFFSET UNITYSDK_OFFSET(0x15CF78C0)
#define HILEKPOCPCH_HOPBLCDGFIN_OFFSET UNITYSDK_OFFSET(0x15CF7670)
#define HILEKPOCPCH_KEAMOLIEKBE_OFFSET UNITYSDK_OFFSET(0x15CF7310)
#define HILEKPOCPCH_LEBCFBEHNDK_OFFSET UNITYSDK_OFFSET(0x15CF6C60)
#define HILEKPOCPCH_NIDHPKONFEI_OFFSET UNITYSDK_OFFSET(0x15CF6FC0)
#define HILEKPOCPCH_OMOJNFEMELN_OFFSET UNITYSDK_OFFSET(0x15CF73F0)
#define HILEKPOCPCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CF6B70)
#define HILEKPOCPCH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CF70F0)
#define HILEKPOCPCH_TICK_OFFSET UNITYSDK_OFFSET(0x15CF71D0)

	class HILEKPOCPCH : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KPHGLEKEALH; // 0x18
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* JOABCNLPPGI; // 0x30
		::RPG::GameCore::SubMissionRow* EFLMIIAAEGP; // 0x38
		::RPG::GameCore::AddFinishMissionData_ConsumeItem* OFKGLJOAMLD; // 0x40
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
