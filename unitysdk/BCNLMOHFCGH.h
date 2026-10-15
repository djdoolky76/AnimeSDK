#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPBOGKHKBE.h"
class BCNLMOHFCGH;
class DBEILICHGCG;
class IFEABBJBIGK;
class JBACCAGFHON;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define BCNLMOHFCGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x162E98B0)
#define BCNLMOHFCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x162E9900)
#define BCNLMOHFCGH_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x162E9890)
#define BCNLMOHFCGH_HLOGMBDGPCC_OFFSET UNITYSDK_OFFSET(0x162E9910)
#define BCNLMOHFCGH_SET_COMMAND_OFFSET UNITYSDK_OFFSET(0x162E98A0)
#define BCNLMOHFCGH___ONEXECUTE_B__6_0_OFFSET UNITYSDK_OFFSET(0x162E9B30)

	class BCNLMOHFCGH : public ::JIPBOGKHKBE
	{
	public:
		::IFEABBJBIGK* _Command_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + BCNLMOHFCGH_CTOR_OFFSET))(this, a1);
		}

		::IFEABBJBIGK* get_Command()
		{
			return ((::IFEABBJBIGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNLMOHFCGH_GET_COMMAND_OFFSET))(this);
		}

		::System::Void set_Command(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + BCNLMOHFCGH_SET_COMMAND_OFFSET))(this, a1);
		}

		static ::BCNLMOHFCGH* BPLPBPMEODA(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::BCNLMOHFCGH*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + BCNLMOHFCGH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HLOGMBDGPCC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + BCNLMOHFCGH_HLOGMBDGPCC_OFFSET))(this, a1, a2);
		}

		::System::Void __OnExecute_b__6_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCNLMOHFCGH___ONEXECUTE_B__6_0_OFFSET))(this, a1);
		}

	};
