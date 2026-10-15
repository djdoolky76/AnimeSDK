#pragma once
#include "unitysdk/unitysdk.h"
class HLIKFKIBEBA;
namespace RPG::GameCore { class SetDawnsEyeWeatherUI; }
namespace RPG::GameCore { class TaskContext; }

#define KMDGGLMJGBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB543320)
#define KMDGGLMJGBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB543350)
#define KMDGGLMJGBO_PPNFOMMOCMN_OFFSET UNITYSDK_OFFSET(0xB5433B0)

inline static constexpr unsigned int KMDGGLMJGBO_TypeDefinitionIndex = 55393;

	class KMDGGLMJGBO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDawnsEyeWeatherUI*))((::PBYTE)hIl2Cpp + KMDGGLMJGBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDGGLMJGBO_ONTASKBEGIN_OFFSET))(this);
		}

		::HLIKFKIBEBA* PPNFOMMOCMN()
		{
			return ((::HLIKFKIBEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDGGLMJGBO_PPNFOMMOCMN_OFFSET))(this);
		}

	};
