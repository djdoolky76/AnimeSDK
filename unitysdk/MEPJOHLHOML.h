#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvRecoverTickValue; }
namespace RPG::GameCore { class TaskContext; }

#define MEPJOHLHOML_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E8160)
#define MEPJOHLHOML_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8E8190)
#define MEPJOHLHOML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8E8210)
#define MEPJOHLHOML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8E81D0)

inline static constexpr unsigned int MEPJOHLHOML_TypeDefinitionIndex = 57883;

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
