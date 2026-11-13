#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActiveActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define BOEIKFCGKLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A783C00)
#define BOEIKFCGKLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A783C30)

inline static constexpr unsigned int BOEIKFCGKLI_TypeDefinitionIndex = 55969;

	class BOEIKFCGKLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveActionCountDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveActionCountDown*))((::PBYTE)hIl2Cpp + BOEIKFCGKLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEIKFCGKLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
