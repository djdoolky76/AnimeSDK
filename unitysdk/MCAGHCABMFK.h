#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetNpcStatus; }
namespace RPG::GameCore { class TaskContext; }

#define MCAGHCABMFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB86B7F0)
#define MCAGHCABMFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86B820)

inline static constexpr unsigned int MCAGHCABMFK_TypeDefinitionIndex = 53250;

	class MCAGHCABMFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNpcStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNpcStatus*))((::PBYTE)hIl2Cpp + MCAGHCABMFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAGHCABMFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
