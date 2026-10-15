#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6598C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD659900)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL___C__GET__PROPERTYVALUES_B__4_0_OFFSET UNITYSDK_OFFSET(0xD659910)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRadarChartControl___c_TypeDefinitionIndex = 79825;

	class MechCraftRadarChartControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x55A20);
		}

		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x55A28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _get__PropertyValues_b__4_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL___C__GET__PROPERTYVALUES_B__4_0_OFFSET))(this, a1);
		}

	};
}
