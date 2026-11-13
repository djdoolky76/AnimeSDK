#pragma once
#include "unitysdk/unitysdk.h"
class HLIKFKIBEBA;
namespace RPG::GameCore { class SetDawnsEyeWeatherUI; }
namespace RPG::GameCore { class TaskContext; }

#define KMDGGLMJGBO_CTOR_OFFSET UNITYSDK_OFFSET(0x17B9A410)
#define KMDGGLMJGBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B9A440)
#define KMDGGLMJGBO_PPNFOMMOCMN_OFFSET UNITYSDK_OFFSET(0x17B9A4A0)

inline static constexpr unsigned int KMDGGLMJGBO_TypeDefinitionIndex = 56578;

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
