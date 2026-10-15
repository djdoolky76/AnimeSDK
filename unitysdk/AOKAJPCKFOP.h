#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class CalcPitchAngle; }
namespace RPG::GameCore { class TaskContext; }

#define AOKAJPCKFOP_CTOR_OFFSET UNITYSDK_OFFSET(0x158A5F50)
#define AOKAJPCKFOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158A6030)

inline static constexpr unsigned int AOKAJPCKFOP_TypeDefinitionIndex = 56348;

	class AOKAJPCKFOP
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalcPitchAngle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalcPitchAngle*))((::PBYTE)hIl2Cpp + AOKAJPCKFOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKAJPCKFOP_ONTASKBEGIN_OFFSET))(this);
		}

	};
