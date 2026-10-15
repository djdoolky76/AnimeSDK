#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B96F560)
#define HOUDINIENGINEUNITY_HEU_PARTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B96F5A0)
#define HOUDINIENGINEUNITY_HEU_PARTDATA___C__COPYGAMEOBJECTCOMPONENTS_B__96_0_OFFSET UNITYSDK_OFFSET(0x1B96F5B0)

namespace HoudiniEngineUnity
{
	class HEU_PartData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x54BD0);
		}

		static ::System::Comparison_1<::UnityEngine::LOD>** StaticGet___9__96_0()
		{
			return (::System::Comparison_1<::UnityEngine::LOD>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x54BD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CopyGameObjectComponents_b__96_0(::UnityEngine::LOD a1, ::UnityEngine::LOD a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::LOD, ::UnityEngine::LOD))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA___C__COPYGAMEOBJECTCOMPONENTS_B__96_0_OFFSET))(this, a1, a2);
		}

	};
}
