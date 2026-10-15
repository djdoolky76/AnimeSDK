#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskTemplateFetchParamSequence; }

#define GCGHJHGDHMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1596A9C0)
#define GCGHJHGDHMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1596A9D0)
#define GCGHJHGDHMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1596AA10)
#define GCGHJHGDHMI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1596ACA0)
#define GCGHJHGDHMI_TICK_OFFSET UNITYSDK_OFFSET(0x1596ACF0)

	class GCGHJHGDHMI : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HFOFIODMFGB; // 0x18
		::RPG::GameCore::TaskTemplateFetchParamSequence* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskTemplateFetchParamSequence* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskTemplateFetchParamSequence*))((::PBYTE)hIl2Cpp + GCGHJHGDHMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGHJHGDHMI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGHJHGDHMI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGHJHGDHMI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCGHJHGDHMI_TICK_OFFSET))(this, a1);
		}

	};
