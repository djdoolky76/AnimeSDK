#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
class EFPLNPDOHJA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1963F4A0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1963F4E0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__INITSKILLDESCLIST_B__45_0_OFFSET UNITYSDK_OFFSET(0x1963F4F0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__ONTUTORIALBTNCLICKED_B__62_2_OFFSET UNITYSDK_OFFSET(0x1963F560)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__REFRESHPAGE_B__52_0_OFFSET UNITYSDK_OFFSET(0x1963F540)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex = 70953;

	class UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x41F10);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__52_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x41F18);
		}
		static ::System::Comparison_1<::EFPLNPDOHJA*>** StaticGet___9__45_0()
		{
			return (::System::Comparison_1<::EFPLNPDOHJA*>**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x41F20);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__62_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x41F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSkillDescList_b__45_0(::EFPLNPDOHJA* a, ::EFPLNPDOHJA* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EFPLNPDOHJA*, ::EFPLNPDOHJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__INITSKILLDESCLIST_B__45_0_OFFSET))(this, a, b);
		}

		::System::Void _RefreshPage_b__52_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__REFRESHPAGE_B__52_0_OFFSET))(this, vp);
		}

		::System::String* _OnTutorialBtnClicked_b__62_2(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__ONTUTORIALBTNCLICKED_B__62_2_OFFSET))(this, _);
		}
	};
}
