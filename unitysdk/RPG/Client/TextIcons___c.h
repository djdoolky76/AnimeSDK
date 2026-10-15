#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextIcons_OPCDCEBBCHA.h"
namespace RPG::Client { class TextIcons_KMPBAAJEKPL; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEXTICONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE208BB0)
#define RPG_CLIENT_TEXTICONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE208BF0)
#define RPG_CLIENT_TEXTICONS___C__CLEAR_B__10_0_OFFSET UNITYSDK_OFFSET(0xE208C10)
#define RPG_CLIENT_TEXTICONS___C__ONDISABLE_B__5_0_OFFSET UNITYSDK_OFFSET(0xE208C00)
#define RPG_CLIENT_TEXTICONS___C__UPDATEKEY_B__19_0_OFFSET UNITYSDK_OFFSET(0xE208C40)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons___c_TypeDefinitionIndex = 72682;

	class TextIcons___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15750);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15758);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15760);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnDisable_b__5_0(::RPG::Client::TextIcons_OPCDCEBBCHA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextIcons_OPCDCEBBCHA))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__ONDISABLE_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _Clear_b__10_0(::RPG::Client::TextIcons_KMPBAAJEKPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextIcons_KMPBAAJEKPL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__CLEAR_B__10_0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateKey_b__19_0(::RPG::Client::TextIcons_OPCDCEBBCHA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextIcons_OPCDCEBBCHA))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__UPDATEKEY_B__19_0_OFFSET))(this, a1);
		}

	};
}
