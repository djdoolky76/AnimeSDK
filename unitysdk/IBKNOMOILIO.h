#pragma once
#include "unitysdk/unitysdk.h"
class MADACECCBAJ;
namespace RPG::GameCore { class TaskContext; }

#define IBKNOMOILIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2FC20)
#define IBKNOMOILIO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E2FC50)

inline static constexpr unsigned int IBKNOMOILIO_TypeDefinitionIndex = 53826;

	class IBKNOMOILIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MADACECCBAJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MADACECCBAJ*))((::PBYTE)hIl2Cpp + IBKNOMOILIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKNOMOILIO_ONTASKBEGIN_OFFSET))(this);
		}

	};
