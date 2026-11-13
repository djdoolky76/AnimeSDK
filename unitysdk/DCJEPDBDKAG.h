#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MNCOPNHONHO;
class PDECCEPDNDL;
namespace RPG::GameCore { class TaskContext; }

#define DCJEPDBDKAG_CKBKICMEDOE_OFFSET UNITYSDK_OFFSET(0x1B170E50)
#define DCJEPDBDKAG_CNNBCPHPCHP_OFFSET UNITYSDK_OFFSET(0x1B170C70)
#define DCJEPDBDKAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1708A0)
#define DCJEPDBDKAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B170D90)
#define DCJEPDBDKAG_IMONOMAKBHM_OFFSET UNITYSDK_OFFSET(0x1B170A60)
#define DCJEPDBDKAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B1708B0)
#define DCJEPDBDKAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B170C20)
#define DCJEPDBDKAG_TICK_OFFSET UNITYSDK_OFFSET(0x1B170DF0)

inline static constexpr unsigned int DCJEPDBDKAG_TypeDefinitionIndex = 53978;

	class DCJEPDBDKAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::MNCOPNHONHO* PDENFEFCAGN; // 0x20
		::PDECCEPDNDL* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PDECCEPDNDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PDECCEPDNDL*))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_TICK_OFFSET))(this, a1);
		}

		::System::Boolean IMONOMAKBHM(::MNCOPNHONHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_IMONOMAKBHM_OFFSET))(this, a1);
		}

		::System::Void CKBKICMEDOE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_CKBKICMEDOE_OFFSET))(this, a1);
		}

		::System::Void CNNBCPHPCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJEPDBDKAG_CNNBCPHPCHP_OFFSET))(this);
		}

	};
