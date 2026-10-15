#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFX_SkinnedMesh_SkinnedMeshBinder.h"
namespace RPG::Client::AstraFX { class AstraFX_SkinnedMesh_PassSettingByMesh; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6A63D0)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A6410)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_0_OFFSET UNITYSDK_OFFSET(0xC6A6420)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_1_OFFSET UNITYSDK_OFFSET(0xC6A6540)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFX_SkinnedMesh___c_TypeDefinitionIndex = 73695;

	class AstraFX_SkinnedMesh___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.AstraFX", "<>c")->GetStaticField(0x580A0);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.AstraFX", "<>c")->GetStaticField(0x580A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.AstraFX", "<>c")->GetStaticField(0x580B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _ResetSimulationState_b__5_0(::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _ResetSimulationState_b__5_1(::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_1_OFFSET))(this, a1);
		}

	};
}
