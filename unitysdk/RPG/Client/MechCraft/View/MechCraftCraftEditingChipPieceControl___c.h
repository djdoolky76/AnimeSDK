#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IALBJEGDCFI_HCBKBKPNDKB;
namespace R3 { class Observable; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD625510)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD625550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_0_OFFSET UNITYSDK_OFFSET(0xD625560)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_1_OFFSET UNITYSDK_OFFSET(0xD6255D0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftEditingChipPieceControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x58F00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x58F08);
		}

		static ::System::Func_2<::System::Object*, ::R3::Observable*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::System::Object*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x58F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __Bind_b__24_0(::IALBJEGDCFI_HCBKBKPNDKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IALBJEGDCFI_HCBKBKPNDKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_0_OFFSET))(this, a1);
		}

		::R3::Observable* __Bind_b__24_1(::IALBJEGDCFI_HCBKBKPNDKB* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::IALBJEGDCFI_HCBKBKPNDKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPPIECECONTROL___C___BIND_B__24_1_OFFSET))(this, a1);
		}

	};
}
