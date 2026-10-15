#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define GNPNJOJJNNO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1FA00)
#define GNPNJOJJNNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B1FAE0)

inline static constexpr unsigned int GNPNJOJJNNO_TypeDefinitionIndex = 55403;

	class GNPNJOJJNNO
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicString*))((::PBYTE)hIl2Cpp + GNPNJOJJNNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPNJOJJNNO_ONTASKBEGIN_OFFSET))(this);
		}

	};
