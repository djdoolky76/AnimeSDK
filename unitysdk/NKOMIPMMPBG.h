#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class CalcYawAngle; }
namespace RPG::GameCore { class TaskContext; }

#define NKOMIPMMPBG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC45840)
#define NKOMIPMMPBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC45920)

inline static constexpr unsigned int NKOMIPMMPBG_TypeDefinitionIndex = 56349;

	class NKOMIPMMPBG
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalcYawAngle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalcYawAngle*))((::PBYTE)hIl2Cpp + NKOMIPMMPBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOMIPMMPBG_ONTASKBEGIN_OFFSET))(this);
		}

	};
