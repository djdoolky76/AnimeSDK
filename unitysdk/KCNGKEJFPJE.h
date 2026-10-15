#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ParallelCompleteConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCNGKEJFPJE_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0xB33F8F0)
#define KCNGKEJFPJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB33E9A0)
#define KCNGKEJFPJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB33EBF0)
#define KCNGKEJFPJE_DONLEIOIEHM_OFFSET UNITYSDK_OFFSET(0xB33EDF0)
#define KCNGKEJFPJE_EIOIKAPEGJM_OFFSET UNITYSDK_OFFSET(0xB33E9C0)
#define KCNGKEJFPJE_FOGJHALOCJJ_OFFSET UNITYSDK_OFFSET(0xB33F260)
#define KCNGKEJFPJE_IAMKMCEAMNG_OFFSET UNITYSDK_OFFSET(0xB33F150)
#define KCNGKEJFPJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB33ED50)
#define KCNGKEJFPJE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB33EDA0)
#define KCNGKEJFPJE_TICK_OFFSET UNITYSDK_OFFSET(0xB33F0C0)

inline static constexpr unsigned int KCNGKEJFPJE_TypeDefinitionIndex = 54764;

	class KCNGKEJFPJE : public ::BNBOAMEBAOE
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* ECMFFNPIHGD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelCompleteConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Void EIOIKAPEGJM(::RPG::GameCore::ParallelCompleteConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_EIOIKAPEGJM_OFFSET))(this, a1);
		}

		::System::Void FOGJHALOCJJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_FOGJHALOCJJ_OFFSET))(this, a1);
		}

		::System::Boolean IAMKMCEAMNG(::RPG::GameCore::TaskState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_IAMKMCEAMNG_OFFSET))(this, a1);
		}

		::System::Void DONLEIOIEHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGKEJFPJE_DONLEIOIEHM_OFFSET))(this);
		}

	};
