#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetImmediateAction; }
namespace RPG::GameCore { class TaskContext; }

#define PGDHMFBMKNK_CTOR_OFFSET UNITYSDK_OFFSET(0x16D8B230)
#define PGDHMFBMKNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D8B260)

inline static constexpr unsigned int PGDHMFBMKNK_TypeDefinitionIndex = 56713;

	class PGDHMFBMKNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetImmediateAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetImmediateAction*))((::PBYTE)hIl2Cpp + PGDHMFBMKNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDHMFBMKNK_ONTASKBEGIN_OFFSET))(this);
		}

	};
