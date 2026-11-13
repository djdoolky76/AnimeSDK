#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class NIEELAKBEKI;
namespace RPG::GameCore { class TaskContext; }

#define HPMJMHNDKBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF426C0)
#define HPMJMHNDKBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AF427A0)

inline static constexpr unsigned int HPMJMHNDKBM_TypeDefinitionIndex = 56617;

	class HPMJMHNDKBM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NIEELAKBEKI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NIEELAKBEKI*))((::PBYTE)hIl2Cpp + HPMJMHNDKBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMJMHNDKBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
