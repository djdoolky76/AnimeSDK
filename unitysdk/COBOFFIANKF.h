#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MuseumItemRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGetMuseumExhibit; }
namespace System { class Object; }

#define COBOFFIANKF_AHIKPDFEAPJ_OFFSET UNITYSDK_OFFSET(0xDCB2200)
#define COBOFFIANKF_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB1A30)
#define COBOFFIANKF_DCGPALFDFBK_OFFSET UNITYSDK_OFFSET(0xDCB1F40)
#define COBOFFIANKF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB1DF0)
#define COBOFFIANKF_DKBNBJCAOAI_OFFSET UNITYSDK_OFFSET(0xDCB1A50)
#define COBOFFIANKF_ICMGBOHAAHJ_OFFSET UNITYSDK_OFFSET(0xDCB2040)
#define COBOFFIANKF_IPLCFJOMBID_OFFSET UNITYSDK_OFFSET(0xDCB2260)
#define COBOFFIANKF_OJGGADHPJOB_OFFSET UNITYSDK_OFFSET(0xDCB1BD0)
#define COBOFFIANKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB1B60)
#define COBOFFIANKF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCB1E80)
#define COBOFFIANKF_TICK_OFFSET UNITYSDK_OFFSET(0xDCB1EE0)

inline static constexpr unsigned int COBOFFIANKF_TypeDefinitionIndex = 53472;

	class COBOFFIANKF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitGetMuseumExhibit* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::MuseumItemRow* DBFIKAIEMIP; // 0x28
		::System::Boolean JPNPHBOJCBO; // 0x30
		::System::Boolean GGFPHEOIOBO; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGetMuseumExhibit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGetMuseumExhibit*))((::PBYTE)hIl2Cpp + COBOFFIANKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBOFFIANKF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBOFFIANKF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COBOFFIANKF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBOFFIANKF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void ICMGBOHAAHJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COBOFFIANKF_ICMGBOHAAHJ_OFFSET))(this, a1);
		}

		::System::Void AHIKPDFEAPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COBOFFIANKF_AHIKPDFEAPJ_OFFSET))(this, a1);
		}

		::System::Void DKBNBJCAOAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBOFFIANKF_DKBNBJCAOAI_OFFSET))(this);
		}

		::System::Void DCGPALFDFBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBOFFIANKF_DCGPALFDFBK_OFFSET))(this);
		}

		::System::Boolean OJGGADHPJOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COBOFFIANKF_OJGGADHPJOB_OFFSET))(this);
		}

		::RPG::GameCore::MuseumItemRow* IPLCFJOMBID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MuseumItemRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + COBOFFIANKF_IPLCFJOMBID_OFFSET))(this, a1, a2);
		}

	};
