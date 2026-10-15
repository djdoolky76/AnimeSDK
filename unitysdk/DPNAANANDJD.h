#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ParallelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPNAANANDJD_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0x1265D8A0)
#define DPNAANANDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1265C840)
#define DPNAANANDJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1265CA90)
#define DPNAANANDJD_DONLEIOIEHM_OFFSET UNITYSDK_OFFSET(0x1265CC90)
#define DPNAANANDJD_ECOJJLFFJEM_OFFSET UNITYSDK_OFFSET(0x1265D010)
#define DPNAANANDJD_EIOIKAPEGJM_OFFSET UNITYSDK_OFFSET(0x1265C860)
#define DPNAANANDJD_FOGJHALOCJJ_OFFSET UNITYSDK_OFFSET(0x1265D210)
#define DPNAANANDJD_MABOIANGJIJ_OFFSET UNITYSDK_OFFSET(0x1265D110)
#define DPNAANANDJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1265CBF0)
#define DPNAANANDJD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1265CC40)
#define DPNAANANDJD_TICK_OFFSET UNITYSDK_OFFSET(0x1265CF60)

	class DPNAANANDJD : public ::BNBOAMEBAOE
	{
	public:
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* ECMFFNPIHGD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + DPNAANANDJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNAANANDJD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNAANANDJD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNAANANDJD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPNAANANDJD_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNAANANDJD_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Void EIOIKAPEGJM(::RPG::GameCore::ParallelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + DPNAANANDJD_EIOIKAPEGJM_OFFSET))(this, a1);
		}

		::System::Void FOGJHALOCJJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPNAANANDJD_FOGJHALOCJJ_OFFSET))(this, a1);
		}

		::System::Boolean MABOIANGJIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNAANANDJD_MABOIANGJIJ_OFFSET))(this);
		}

		::System::Boolean ECOJJLFFJEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNAANANDJD_ECOJJLFFJEM_OFFSET))(this);
		}

		::System::Void DONLEIOIEHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNAANANDJD_DONLEIOIEHM_OFFSET))(this);
		}

	};
