#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class PLDMCDGDGNF;
namespace RPG::GameCore { class TaskContext; }

#define IDODOAGAEHM_ABKMPGNDAHO_OFFSET UNITYSDK_OFFSET(0x15EE0CE0)
#define IDODOAGAEHM_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE0270)
#define IDODOAGAEHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EE0370)
#define IDODOAGAEHM_NFNECIHEOAF_OFFSET UNITYSDK_OFFSET(0x15EE0B70)
#define IDODOAGAEHM_NIBCKCMKMMI_OFFSET UNITYSDK_OFFSET(0x15EE0C10)
#define IDODOAGAEHM_OAGGNEPCCGE_OFFSET UNITYSDK_OFFSET(0x15EE0A10)
#define IDODOAGAEHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EE04E0)
#define IDODOAGAEHM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EE0740)
#define IDODOAGAEHM_TICK_OFFSET UNITYSDK_OFFSET(0x15EE0A90)

inline static constexpr unsigned int IDODOAGAEHM_TypeDefinitionIndex = 52834;

	class IDODOAGAEHM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* MPLMGDDNFLM; // 0x20
		::PLDMCDGDGNF* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* DOGACPGEDDH; // 0x30
		::System::Boolean IDOBBOEHGLO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PLDMCDGDGNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PLDMCDGDGNF*))((::PBYTE)hIl2Cpp + IDODOAGAEHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODOAGAEHM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODOAGAEHM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODOAGAEHM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDODOAGAEHM_TICK_OFFSET))(this, a1);
		}

		::System::Void NFNECIHEOAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODOAGAEHM_NFNECIHEOAF_OFFSET))(this);
		}

		::System::Void OAGGNEPCCGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODOAGAEHM_OAGGNEPCCGE_OFFSET))(this);
		}

		::System::Void NIBCKCMKMMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODOAGAEHM_NIBCKCMKMMI_OFFSET))(this);
		}

		::System::Boolean ABKMPGNDAHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDODOAGAEHM_ABKMPGNDAHO_OFFSET))(this);
		}

	};
