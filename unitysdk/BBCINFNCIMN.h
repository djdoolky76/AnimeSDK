#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define BBCINFNCIMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E82EC0)
#define BBCINFNCIMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E82FA0)

inline static constexpr unsigned int BBCINFNCIMN_TypeDefinitionIndex = 54799;

	class BBCINFNCIMN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByActionCountDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByActionCountDown*))((::PBYTE)hIl2Cpp + BBCINFNCIMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCINFNCIMN_ONTASKBEGIN_OFFSET))(this);
		}

	};
