#pragma once
#include "unitysdk/unitysdk.h"
class BKNKICGINJA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAKFMPLNEID_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E5DB0)
#define LAKFMPLNEID_EKPLEFPADJE_OFFSET UNITYSDK_OFFSET(0xB5E62F0)
#define LAKFMPLNEID_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0xB5E6590)
#define LAKFMPLNEID_ODACHHLJAGJ_OFFSET UNITYSDK_OFFSET(0xB5E6430)
#define LAKFMPLNEID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5E5ED0)
#define LAKFMPLNEID_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5E65E0)
#define LAKFMPLNEID_TICK_OFFSET UNITYSDK_OFFSET(0xB5E6350)

	class LAKFMPLNEID
	{
	public:
		::RPG::GameCore::AdventureCharacterController* EJCIABDHMJJ; // 0x28
		::Il2CppArray<::System::Int32>* BAAABHJEEMM; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* IBNMFIEONNG; // 0x38
		::System::Boolean JKJIPIMEJBE; // 0x40
		::System::Boolean GAPIJOIJFMP; // 0x41
		::System::Boolean NICGJCKBCEB; // 0x42
		::System::Byte _padding0[0x1];
		::System::Int32 FNHPGGINFGH; // 0x44
		::System::Single PBLGHIGPEIP; // 0x48
		// static const ::System::Object KLPLKPHBDKD; // 0x0
		// static const ::System::Object BCMCHCODJGO; // 0x0
		// static const ::System::Object ODIFDPCDMCL; // 0x0
		// static const ::System::Object EDJLOBJGONG; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BKNKICGINJA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BKNKICGINJA*))((::PBYTE)hIl2Cpp + LAKFMPLNEID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKFMPLNEID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAKFMPLNEID_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKFMPLNEID_ONTASKRESET_OFFSET))(this);
		}

		::System::Void ODACHHLJAGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKFMPLNEID_ODACHHLJAGJ_OFFSET))(this);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKFMPLNEID_JDPGFIBLFOP_OFFSET))(this);
		}

		::System::Void EKPLEFPADJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKFMPLNEID_EKPLEFPADJE_OFFSET))(this);
		}

	};
