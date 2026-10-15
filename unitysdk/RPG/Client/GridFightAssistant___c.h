#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMIAJMPNJOO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTASSISTANT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0C49A0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0C49E0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET UNITYSDK_OFFSET(0xD0C4B00)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0xD0C4E60)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0xD0C4D40)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET UNITYSDK_OFFSET(0xD0C4C20)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET UNITYSDK_OFFSET(0xD0C49F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAssistant___c_TypeDefinitionIndex = 64366;

	class GridFightAssistant___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::PMIAJMPNJOO*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::PMIAJMPNJOO*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x651A0);
		}

		static ::System::Action_1<::PMIAJMPNJOO*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::PMIAJMPNJOO*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x651A8);
		}

		static ::System::Action_1<::PMIAJMPNJOO*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::PMIAJMPNJOO*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x651B0);
		}

		static ::System::Action_1<::PMIAJMPNJOO*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::PMIAJMPNJOO*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x651B8);
		}

		static ::System::Func_2<::PMIAJMPNJOO*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::PMIAJMPNJOO*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x651C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x651C8);
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
