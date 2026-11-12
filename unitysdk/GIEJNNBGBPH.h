#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAbilityTagMapping; }
namespace RPG::GameCore { class TaskContext; }

#define GIEJNNBGBPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1696E470)
#define GIEJNNBGBPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1696E4A0)

inline static constexpr unsigned int GIEJNNBGBPH_TypeDefinitionIndex = 56514;

	class GIEJNNBGBPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAbilityTagMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAbilityTagMapping*))((::PBYTE)hIl2Cpp + GIEJNNBGBPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEJNNBGBPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
