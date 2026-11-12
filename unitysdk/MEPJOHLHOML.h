#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvRecoverTickValue; }
namespace RPG::GameCore { class TaskContext; }

#define MEPJOHLHOML_CTOR_OFFSET UNITYSDK_OFFSET(0xC199FA0)
#define MEPJOHLHOML_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC199FD0)
#define MEPJOHLHOML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC19A050)
#define MEPJOHLHOML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC19A010)

inline static constexpr unsigned int MEPJOHLHOML_TypeDefinitionIndex = 59120;

	class MEPJOHLHOML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRecoverTickValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRecoverTickValue*))((::PBYTE)hIl2Cpp + MEPJOHLHOML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPJOHLHOML_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPJOHLHOML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPJOHLHOML_ONTASKBEGIN_OFFSET))(this);
		}

	};
