#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStreamingJobFinished; }

#define FJLIIODCNBG_CTOR_OFFSET UNITYSDK_OFFSET(0x157CD590)
#define FJLIIODCNBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157CD5A0)
#define FJLIIODCNBG_DKPILKHIOKC_OFFSET UNITYSDK_OFFSET(0x157CDA50)
#define FJLIIODCNBG_EGFJAPEHLPL_OFFSET UNITYSDK_OFFSET(0x157CD9D0)
#define FJLIIODCNBG_IKHMHOFHPHP_OFFSET UNITYSDK_OFFSET(0x157CDB30)
#define FJLIIODCNBG_MEAOONIJGGK_OFFSET UNITYSDK_OFFSET(0x157CD700)
#define FJLIIODCNBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157CD5E0)
#define FJLIIODCNBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157CD630)
#define FJLIIODCNBG_TICK_OFFSET UNITYSDK_OFFSET(0x157CD680)

inline static constexpr unsigned int FJLIIODCNBG_TypeDefinitionIndex = 58929;

	class FJLIIODCNBG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitStreamingJobFinished* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStreamingJobFinished* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStreamingJobFinished*))((::PBYTE)hIl2Cpp + FJLIIODCNBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLIIODCNBG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLIIODCNBG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLIIODCNBG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJLIIODCNBG_TICK_OFFSET))(this, a1);
		}

		static ::System::Boolean MEAOONIJGGK(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FJLIIODCNBG_MEAOONIJGGK_OFFSET))(a1);
		}

		static ::System::Boolean DKPILKHIOKC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJLIIODCNBG_DKPILKHIOKC_OFFSET))();
		}

		static ::System::Void IKHMHOFHPHP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLIIODCNBG_IKHMHOFHPHP_OFFSET))();
		}

		static ::System::Boolean EGFJAPEHLPL()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJLIIODCNBG_EGFJAPEHLPL_OFFSET))();
		}

	};
