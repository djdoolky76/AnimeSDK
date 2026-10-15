#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEmoGraphAlwaysEvaluate; }
namespace RPG::GameCore { class TaskContext; }

#define IHAKNJBEJML_CTOR_OFFSET UNITYSDK_OFFSET(0x164169D0)
#define IHAKNJBEJML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16416A00)

	class IHAKNJBEJML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate*))((::PBYTE)hIl2Cpp + IHAKNJBEJML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAKNJBEJML_ONTASKBEGIN_OFFSET))(this);
		}

	};
