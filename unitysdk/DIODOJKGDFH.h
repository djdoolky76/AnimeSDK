#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByAdsorption; }
namespace RPG::GameCore { class TaskContext; }

#define DIODOJKGDFH_CTOR_OFFSET UNITYSDK_OFFSET(0xF224F20)
#define DIODOJKGDFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF225000)

inline static constexpr unsigned int DIODOJKGDFH_TypeDefinitionIndex = 55405;

	class DIODOJKGDFH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByAdsorption* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByAdsorption*))((::PBYTE)hIl2Cpp + DIODOJKGDFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIODOJKGDFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
