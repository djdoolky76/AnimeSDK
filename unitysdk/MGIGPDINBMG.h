#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByEvolveBuild; }
namespace RPG::GameCore { class TaskContext; }

#define MGIGPDINBMG_CTOR_OFFSET UNITYSDK_OFFSET(0xB9202F0)
#define MGIGPDINBMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9203D0)

inline static constexpr unsigned int MGIGPDINBMG_TypeDefinitionIndex = 55432;

	class MGIGPDINBMG
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByEvolveBuild* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByEvolveBuild*))((::PBYTE)hIl2Cpp + MGIGPDINBMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIGPDINBMG_ONTASKBEGIN_OFFSET))(this);
		}

	};
