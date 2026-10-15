#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMIAJMPNJOO;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTASSISTANT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0CCC50)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0CCC90)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET UNITYSDK_OFFSET(0xD0CCDB0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0xD0CD110)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0xD0CCFF0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET UNITYSDK_OFFSET(0xD0CCED0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET UNITYSDK_OFFSET(0xD0CCCA0)

namespace RPG::Client
{
	class GridFightAssistant___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F70);
		}

		static ::System::Func_2<::PMIAJMPNJOO*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::PMIAJMPNJOO*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F78);
		}

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F88);
		}

		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F90);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C_CTOR_OFFSET))(this);
		}

		::System::Void _UsedOrb_b__2_0(::PMIAJMPNJOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMIAJMPNJOO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _BoughtExp_b__3_0(::PMIAJMPNJOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMIAJMPNJOO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _UsedEquip_b__4_0(::PMIAJMPNJOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMIAJMPNJOO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _TickRound_b__6_0(::PMIAJMPNJOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMIAJMPNJOO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllMessage_b__7_0(::PMIAJMPNJOO* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PMIAJMPNJOO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET))(this, a1);
		}

	};
}
