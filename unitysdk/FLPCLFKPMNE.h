#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideTopPage; }
namespace RPG::GameCore { class TaskContext; }

#define FLPCLFKPMNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15838A10)
#define FLPCLFKPMNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15838A40)

inline static constexpr unsigned int FLPCLFKPMNE_TypeDefinitionIndex = 58153;

	class FLPCLFKPMNE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideTopPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideTopPage*))((::PBYTE)hIl2Cpp + FLPCLFKPMNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPCLFKPMNE_ONTASKBEGIN_OFFSET))(this);
		}

	};
