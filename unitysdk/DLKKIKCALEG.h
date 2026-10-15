#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Nullable; }

#define DLKKIKCALEG_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A3530)
#define DLKKIKCALEG_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xF8A2640)
#define DLKKIKCALEG_EFOKNMPOIPE_OFFSET UNITYSDK_OFFSET(0xF8A2680)

inline static constexpr unsigned int DLKKIKCALEG_TypeDefinitionIndex = 53722;

	class DLKKIKCALEG : public ::KIFCLJJAOFJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKKIKCALEG_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKKIKCALEG_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void EFOKNMPOIPE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::HJIOMFDJLLA a3, ::RPG::GameCore::FixPoint a4, ::System::Nullable* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::HJIOMFDJLLA, ::RPG::GameCore::FixPoint, ::System::Nullable*))((::PBYTE)hIl2Cpp + DLKKIKCALEG_EFOKNMPOIPE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
