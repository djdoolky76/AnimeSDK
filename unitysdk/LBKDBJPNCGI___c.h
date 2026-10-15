#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define LBKDBJPNCGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB606360)
#define LBKDBJPNCGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB6063A0)
#define LBKDBJPNCGI___C__EXITGAMERESULT_B__41_0_OFFSET UNITYSDK_OFFSET(0xB606520)
#define LBKDBJPNCGI___C__EXITGAMERESULT_B__41_1_OFFSET UNITYSDK_OFFSET(0xB6065B0)
#define LBKDBJPNCGI___C__HANDLESHOWBEFOREACTIVITYMAINPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0xB606420)
#define LBKDBJPNCGI___C__HANDLESHOWMAINPAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xB6063B0)
#define LBKDBJPNCGI___C__ONPVEPROGRESSPAGEEXIT_B__34_0_OFFSET UNITYSDK_OFFSET(0xB606490)

	class LBKDBJPNCGI___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545B0);
		}

		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545B8);
		}

		static ::System::Action** StaticGet___9__34_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545C8);
		}

		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545D0);
		}

		static ::System::Action** StaticGet___9__41_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C_CTOR_OFFSET))(this);
		}

		::System::Void _HandleShowMainPage_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__HANDLESHOWMAINPAGE_B__5_0_OFFSET))(this);
		}

		::System::Void _HandleShowBeforeActivityMainPage_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__HANDLESHOWBEFOREACTIVITYMAINPAGE_B__7_0_OFFSET))(this);
		}

		::System::Void _OnPVEProgressPageExit_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__ONPVEPROGRESSPAGEEXIT_B__34_0_OFFSET))(this);
		}

		::System::Void _ExitGameResult_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__EXITGAMERESULT_B__41_0_OFFSET))(this);
		}

		::System::Void _ExitGameResult_b__41_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKDBJPNCGI___C__EXITGAMERESULT_B__41_1_OFFSET))(this);
		}

	};
