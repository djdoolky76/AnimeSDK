#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideEndTransferType; }
namespace RPG::GameCore { class TaskContext; }

#define OCIGKEIFBLI_CTOR_OFFSET UNITYSDK_OFFSET(0x19A17B50)
#define OCIGKEIFBLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A17B80)

inline static constexpr unsigned int OCIGKEIFBLI_TypeDefinitionIndex = 54209;

	class OCIGKEIFBLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideEndTransferType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideEndTransferType*))((::PBYTE)hIl2Cpp + OCIGKEIFBLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIGKEIFBLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
