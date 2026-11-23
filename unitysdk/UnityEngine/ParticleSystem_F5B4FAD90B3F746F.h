#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EFAE0B92C4F20FBF.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_F5B4FAD90B3F746F_A9DF89E2C9F2B490_OFFSET UNITYSDK_OFFSET(0x41AB4D0)
#define UNITYENGINE_PARTICLESYSTEM_F5B4FAD90B3F746F_F93E31BA58EC38F7_OFFSET UNITYSDK_OFFSET(0x41AB530)
#define UNITYENGINE_PARTICLESYSTEM_F5B4FAD90B3F746F__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_F5B4FAD90B3F746F_TypeDefinitionIndex = 21014;

	struct alignas(8) ParticleSystem_F5B4FAD90B3F746F
	{
		::UnityEngine::ParticleSystem* A58F01034DC084D9; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* E7A0E881899372B9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_F5B4FAD90B3F746F__CTOR_OFFSET))(this, E7A0E881899372B9);
		}

		::System::Void F93E31BA58EC38F7(::UnityEngine::EFAE0B92C4F20FBF BC92BE65F028CD67, ::System::Int32 F1EE4CF10E4B5F91, ::UnityEngine::ParticleSystem_MinMaxCurve BF3792D775A7C92E)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EFAE0B92C4F20FBF, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_F5B4FAD90B3F746F_F93E31BA58EC38F7_OFFSET))(this, BC92BE65F028CD67, F1EE4CF10E4B5F91, BF3792D775A7C92E);
		}

		/*
		static ::System::Void A9DF89E2C9F2B490(::UnityEngine::ParticleSystem_F5B4FAD90B3F746F& EDB794C900A30CB0, ::UnityEngine::EFAE0B92C4F20FBF BC92BE65F028CD67, ::System::Int32 F1EE4CF10E4B5F91, ::UnityEngine::ParticleSystem_MinMaxCurve& BF3792D775A7C92E)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_F5B4FAD90B3F746F&, ::UnityEngine::EFAE0B92C4F20FBF, ::System::Int32, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_F5B4FAD90B3F746F_A9DF89E2C9F2B490_OFFSET))(EDB794C900A30CB0, BC92BE65F028CD67, F1EE4CF10E4B5F91, BF3792D775A7C92E);
		}
		*/
	};
}
