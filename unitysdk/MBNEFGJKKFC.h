#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByScepterProperty; }
namespace RPG::GameCore { class TaskContext; }

#define MBNEFGJKKFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB86EA30)
#define MBNEFGJKKFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86EB10)

inline static constexpr unsigned int MBNEFGJKKFC_TypeDefinitionIndex = 55463;

	class MBNEFGJKKFC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByScepterProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByScepterProperty*))((::PBYTE)hIl2Cpp + MBNEFGJKKFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNEFGJKKFC_ONTASKBEGIN_OFFSET))(this);
		}

	};
