#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ParallelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPNAANANDJD_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0x181B2AB0)
#define DPNAANANDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x181B1C30)
#define DPNAANANDJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181B1E80)
#define DPNAANANDJD_DONLEIOIEHM_OFFSET UNITYSDK_OFFSET(0x181B2080)
#define DPNAANANDJD_ECOJJLFFJEM_OFFSET UNITYSDK_OFFSET(0x181B23A0)
#define DPNAANANDJD_EIOIKAPEGJM_OFFSET UNITYSDK_OFFSET(0x181B1C50)
#define DPNAANANDJD_FOGJHALOCJJ_OFFSET UNITYSDK_OFFSET(0x181B2530)
#define DPNAANANDJD_MABOIANGJIJ_OFFSET UNITYSDK_OFFSET(0x181B2480)
#define DPNAANANDJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181B1FE0)
#define DPNAANANDJD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181B2030)
#define DPNAANANDJD_TICK_OFFSET UNITYSDK_OFFSET(0x181B22F0)

inline static constexpr unsigned int DPNAANANDJD_TypeDefinitionIndex = 55932;

	class DPNAANANDJD : public ::BNBOAMEBAOE
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* ECMFFNPIHGD; // 0x20
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
