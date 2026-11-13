#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define LBKDBJPNCGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2A45E0)
#define LBKDBJPNCGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A4620)
#define LBKDBJPNCGI___C__EXITGAMERESULT_B__41_0_OFFSET UNITYSDK_OFFSET(0x1B2A47A0)
#define LBKDBJPNCGI___C__EXITGAMERESULT_B__41_1_OFFSET UNITYSDK_OFFSET(0x1B2A4830)
#define LBKDBJPNCGI___C__HANDLESHOWBEFOREACTIVITYMAINPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B2A46A0)
#define LBKDBJPNCGI___C__HANDLESHOWMAINPAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B2A4630)
#define LBKDBJPNCGI___C__ONPVEPROGRESSPAGEEXIT_B__34_0_OFFSET UNITYSDK_OFFSET(0x1B2A4710)

inline static constexpr unsigned int LBKDBJPNCGI___c_TypeDefinitionIndex = 78436;

	class LBKDBJPNCGI___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__41_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70260);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70268);
		}

		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70270);
		}

		static ::System::Action** StaticGet___9__34_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70278);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70280);
		}

		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70288);
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
