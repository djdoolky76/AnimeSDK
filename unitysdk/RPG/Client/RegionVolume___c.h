#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_REGIONVOLUME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE67C80)
#define RPG_CLIENT_REGIONVOLUME___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE67CB0)
#define RPG_CLIENT_REGIONVOLUME___C__LOAD_B__2_0_OFFSET UNITYSDK_OFFSET(0xDE67CC0)

namespace RPG::Client
{
	class RegionVolume___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::MVector2, ::UnityEngine::Vector2>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::MVector2, ::UnityEngine::Vector2>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57D30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _Load_b__2_0(::RPG::MVector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME___C__LOAD_B__2_0_OFFSET))(this, a1);
		}

	};
}
