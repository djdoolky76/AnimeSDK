#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

#define DLKKIKCALEG_CTOR_OFFSET UNITYSDK_OFFSET(0xF89DB60)
#define DLKKIKCALEG_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xF89CC90)
#define DLKKIKCALEG_EFOKNMPOIPE_OFFSET UNITYSDK_OFFSET(0xF89CCD0)

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

		::System::Void EFOKNMPOIPE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::HJIOMFDJLLA a3, ::RPG::GameCore::FixPoint a4, ::System::Nullable_1<::RPG::GameCore::FixPoint> a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::HJIOMFDJLLA, ::RPG::GameCore::FixPoint, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + DLKKIKCALEG_EFOKNMPOIPE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
