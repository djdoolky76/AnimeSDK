#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetAIStop; }
namespace RPG::GameCore { class TaskContext; }

#define NGLHDJOKGGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA8B60)
#define NGLHDJOKGGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBA8B90)

inline static constexpr unsigned int NGLHDJOKGGL_TypeDefinitionIndex = 52490;

	class NGLHDJOKGGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIStop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIStop*))((::PBYTE)hIl2Cpp + NGLHDJOKGGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLHDJOKGGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
