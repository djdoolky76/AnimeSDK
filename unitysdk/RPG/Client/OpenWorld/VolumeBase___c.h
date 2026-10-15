#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_OPENWORLD_VOLUMEBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA11DE0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA11E20)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__WRITEREGIONTOSTAGEVOLUMECONFIGV2_B__2_0_OFFSET UNITYSDK_OFFSET(0xDA11E30)

namespace RPG::Client::OpenWorld
{
	class VolumeBase___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector2, ::RPG::MVector2>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::Vector2, ::RPG::MVector2>**)UnitySDK::FromName("RPG.Client.OpenWorld", "<>c")->GetStaticField(0xD960);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.OpenWorld", "<>c")->GetStaticField(0xD968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE___C_CTOR_OFFSET))(this);
		}

		::RPG::MVector2 _WriteRegionToStageVolumeConfigV2_b__2_0(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__WRITEREGIONTOSTAGEVOLUMECONFIGV2_B__2_0_OFFSET))(this, a1);
		}

	};
}
