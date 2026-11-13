#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class AvdMonitorPlayerRun; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define IJJFCPMHOMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1805ACE0)
#define IJJFCPMHOMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1805AD70)
#define IJJFCPMHOMC_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x1805B530)
#define IJJFCPMHOMC_OMBEONEKKFH_OFFSET UNITYSDK_OFFSET(0x1805B160)
#define IJJFCPMHOMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1805AEE0)
#define IJJFCPMHOMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1805B050)
#define IJJFCPMHOMC_OPNGBLFCJGN_OFFSET UNITYSDK_OFFSET(0x1805B250)
#define IJJFCPMHOMC_TICK_OFFSET UNITYSDK_OFFSET(0x1805B0E0)

inline static constexpr unsigned int IJJFCPMHOMC_TypeDefinitionIndex = 53640;

	class IJJFCPMHOMC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AvdMonitorPlayerRun* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::String* KFOFDNOJILO; // 0x28
		::KFELGAIGHAP* PNMJOFIDEDI; // 0x30
		::System::Single GAAOODNCNEJ; // 0x38
		::System::UInt32 ANEENHPKAIM; // 0x3C
		::System::Boolean HNKGHLKPALC; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AvdMonitorPlayerRun* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AvdMonitorPlayerRun*))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_TICK_OFFSET))(this, a1);
		}

		::System::Void OPNGBLFCJGN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_OPNGBLFCJGN_OFFSET))(this, a1);
		}

		::System::Void OMBEONEKKFH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_OMBEONEKKFH_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + IJJFCPMHOMC_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
