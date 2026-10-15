#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ConsumeMissionItem; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HFGLBLCOLPH_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0x15C7A0B0)
#define HFGLBLCOLPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C79620)
#define HFGLBLCOLPH_DBEKIJDIKDH_OFFSET UNITYSDK_OFFSET(0x15C7A5B0)
#define HFGLBLCOLPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C79630)
#define HFGLBLCOLPH_LEBCFBEHNDK_OFFSET UNITYSDK_OFFSET(0x15C798B0)
#define HFGLBLCOLPH_LEPONDILPNO_OFFSET UNITYSDK_OFFSET(0x15C79FF0)
#define HFGLBLCOLPH_NGNEJKDJKAJ_OFFSET UNITYSDK_OFFSET(0x15C7A320)
#define HFGLBLCOLPH_OMOJNFEMELN_OFFSET UNITYSDK_OFFSET(0x15C79DF0)
#define HFGLBLCOLPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C79740)
#define HFGLBLCOLPH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C79D40)
#define HFGLBLCOLPH_PDDHJJBHHHK_OFFSET UNITYSDK_OFFSET(0x15C7A540)
#define HFGLBLCOLPH_TICK_OFFSET UNITYSDK_OFFSET(0x15C79D90)

	class HFGLBLCOLPH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SubMissionRow* EFLMIIAAEGP; // 0x18
		::RPG::GameCore::ConsumeMissionItem* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		// static const ::System::String* HKBOGHBKDCN; // 0x0
		// static const ::System::String* KICKKGGMKMO; // 0x0
		// static const ::System::String* LCOMCFLABDK; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeMissionItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeMissionItem*))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_TICK_OFFSET))(this, a1);
		}

		::System::Void LEBCFBEHNDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_LEBCFBEHNDK_OFFSET))(this);
		}

		::System::Boolean OMOJNFEMELN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_OMOJNFEMELN_OFFSET))(this);
		}

		::System::Void BKGCGEEDHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_BKGCGEEDHDI_OFFSET))(this, a1);
		}

		::System::Void NGNEJKDJKAJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_NGNEJKDJKAJ_OFFSET))(this, a1, a2);
		}

		::System::Void PDDHJJBHHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_PDDHJJBHHHK_OFFSET))(this);
		}

		::System::Void LEPONDILPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_LEPONDILPNO_OFFSET))(this);
		}

		::System::Void DBEKIJDIKDH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFGLBLCOLPH_DBEKIJDIKDH_OFFSET))(this, a1);
		}

	};
