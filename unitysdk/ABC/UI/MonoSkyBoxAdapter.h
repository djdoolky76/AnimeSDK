#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define ABC_UI_MONOSKYBOXADAPTER_B111F3F81F5BF72D_OFFSET UNITYSDK_OFFSET(0x21DCE10)
#define ABC_UI_MONOSKYBOXADAPTER_BD0CD01CE7744067_OFFSET UNITYSDK_OFFSET(0x21DCC00)
#define ABC_UI_MONOSKYBOXADAPTER_E86083F43EE7885F_OFFSET UNITYSDK_OFFSET(0x21DD1C0)
#define ABC_UI_MONOSKYBOXADAPTER_FA520487303BA92E_OFFSET UNITYSDK_OFFSET(0x21DD2E0)
#define ABC_UI_MONOSKYBOXADAPTER_FB666C769F65F246_OFFSET UNITYSDK_OFFSET(0x21DCF40)
#define ABC_UI_MONOSKYBOXADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoSkyBoxAdapter_TypeDefinitionIndex = 8967;

	class MonoSkyBoxAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* E6431895CF3C6949; // 0x20
		::UnityEngine::Transform* SkyBox; // 0x28

		::System::Void BD0CD01CE7744067(::System::Single AA980EF49EBE7E10, ::System::Single E3D799181178E68F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKYBOXADAPTER_BD0CD01CE7744067_OFFSET))(this, AA980EF49EBE7E10, E3D799181178E68F);
		}

		::System::Void FB666C769F65F246()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKYBOXADAPTER_FB666C769F65F246_OFFSET))(this);
		}

		::System::Void B111F3F81F5BF72D(::System::Single AA980EF49EBE7E10, ::System::Single E3D799181178E68F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKYBOXADAPTER_B111F3F81F5BF72D_OFFSET))(this, AA980EF49EBE7E10, E3D799181178E68F);
		}

		::System::Void E86083F43EE7885F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKYBOXADAPTER_E86083F43EE7885F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKYBOXADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void FA520487303BA92E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKYBOXADAPTER_FA520487303BA92E_OFFSET))(this);
		}
	};
}
