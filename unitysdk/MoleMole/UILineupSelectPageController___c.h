#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173F7F20)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173F7F60)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__ONADDBUTTONCLICK_B__37_1_OFFSET UNITYSDK_OFFSET(0x173F7F70)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__ONLOCKINBATTLEBUTTONCLICK_B__39_1_OFFSET UNITYSDK_OFFSET(0x173F7FD0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__ONTOGGLENOREWARDMODEBTN_B__93_1_OFFSET UNITYSDK_OFFSET(0x173F8000)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__REALGO_B__79_1_OFFSET UNITYSDK_OFFSET(0x173F7FF0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__SHOWNEEDAVATAR_B__77_0_OFFSET UNITYSDK_OFFSET(0x173F7FE0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__TRYTOSENDSTORYMODEFIRSTVISIBLEREQUEST_B__98_0_OFFSET UNITYSDK_OFFSET(0x173F8010)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c_TypeDefinitionIndex = 68669;

	class UILineupSelectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__39_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C3A0);
		}
		static ::System::Action** StaticGet___9__98_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C3A8);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__37_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C3B0);
		}
		static ::System::Action** StaticGet___9__79_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C3B8);
		}
		static ::System::Action** StaticGet___9__93_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C3C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C3C8);
		}
		static ::System::Action** StaticGet___9__77_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _OnAddButtonClick_b__37_1(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__ONADDBUTTONCLICK_B__37_1_OFFSET))(this, id);
		}

		::System::Void _OnLockInBattleButtonClick_b__39_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__ONLOCKINBATTLEBUTTONCLICK_B__39_1_OFFSET))(this);
		}

		::System::Void _ShowNeedAvatar_b__77_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__SHOWNEEDAVATAR_B__77_0_OFFSET))(this);
		}

		::System::Void _RealGo_b__79_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__REALGO_B__79_1_OFFSET))(this);
		}

		::System::Void _OnToggleNoRewardModeBtn_b__93_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__ONTOGGLENOREWARDMODEBTN_B__93_1_OFFSET))(this);
		}

		::System::Void _TryToSendStoryModeFirstVisibleRequest_b__98_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__TRYTOSENDSTORYMODEFIRSTVISIBLEREQUEST_B__98_0_OFFSET))(this);
		}
	};
}
