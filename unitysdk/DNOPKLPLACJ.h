#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define DNOPKLPLACJ_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDC680)
#define DNOPKLPLACJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FDC760)

inline static constexpr unsigned int DNOPKLPLACJ_TypeDefinitionIndex = 55459;

	class DNOPKLPLACJ
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + DNOPKLPLACJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOPKLPLACJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
