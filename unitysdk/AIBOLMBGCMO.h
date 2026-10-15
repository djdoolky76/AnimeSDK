#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchCaseByDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIBOLMBGCMO_CTOR_OFFSET UNITYSDK_OFFSET(0xEB90370)
#define AIBOLMBGCMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB90D60)
#define AIBOLMBGCMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB90590)
#define AIBOLMBGCMO_PCOPJMDHFLN_OFFSET UNITYSDK_OFFSET(0xEB90950)

inline static constexpr unsigned int AIBOLMBGCMO_TypeDefinitionIndex = 56462;

	class AIBOLMBGCMO
	{
	public:
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* MPHJNIOIFFM; // 0x28
		::Il2CppArray<::KFELGAIGHAP*>* ILPALCPKGHE; // 0x30
		::KFELGAIGHAP* IHPPIJOMNAP; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + AIBOLMBGCMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOLMBGCMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean PCOPJMDHFLN(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::CompareType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + AIBOLMBGCMO_PCOPJMDHFLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOLMBGCMO_DISPOSE_OFFSET))(this);
		}

	};
