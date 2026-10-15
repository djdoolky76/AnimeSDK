#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define LBKDBJPNCGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6000E0)
#define LBKDBJPNCGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB600120)
#define LBKDBJPNCGI___C__EXITGAMERESULT_B__41_0_OFFSET UNITYSDK_OFFSET(0xB6002A0)
#define LBKDBJPNCGI___C__EXITGAMERESULT_B__41_1_OFFSET UNITYSDK_OFFSET(0xB600330)
#define LBKDBJPNCGI___C__HANDLESHOWBEFOREACTIVITYMAINPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0xB6001A0)
#define LBKDBJPNCGI___C__HANDLESHOWMAINPAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xB600130)
#define LBKDBJPNCGI___C__ONPVEPROGRESSPAGEEXIT_B__34_0_OFFSET UNITYSDK_OFFSET(0xB600210)

inline static constexpr unsigned int LBKDBJPNCGI___c_TypeDefinitionIndex = 76109;

	class LBKDBJPNCGI___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__34_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x540A0);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x540A8);
		}

		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x540B0);
		}

		static ::System::Action** StaticGet___9__41_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x540B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x540C0);
		}

		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x540C8);
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
