#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLEEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD25CE90)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD25CED0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__GETSHOWNEFFECTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xD25CEE0)

namespace RPG::Client
{
	class GridFightRoleEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IGridFightTraitShowEffect*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitShowEffect*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E400);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E408);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShownEffects_b__4_0(::RPG::Client::IGridFightTraitShowEffect* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__GETSHOWNEFFECTS_B__4_0_OFFSET))(this, a1);
		}

	};
}
