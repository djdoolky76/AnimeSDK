#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
class EFPLNPDOHJA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CD3B70)
#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD3BB0)
#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__INITSKILLDESCLIST_B__38_0_OFFSET UNITYSDK_OFFSET(0x14CD3BC0)
#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__ONTUTORIALBTNCLICKED_B__45_1_OFFSET UNITYSDK_OFFSET(0x14CD3C30)
#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__REFRESHVIDEO_B__40_0_OFFSET UNITYSDK_OFFSET(0x14CD3C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyDetailPageController___c_TypeDefinitionIndex = 77807;

	class UIStrategyDetailPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C6A0);
		}
		static ::System::Comparison_1<::EFPLNPDOHJA*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::EFPLNPDOHJA*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C6A8);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__45_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C6B0);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__40_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyDetailPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C6B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSkillDescList_b__38_0(::EFPLNPDOHJA* a, ::EFPLNPDOHJA* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EFPLNPDOHJA*, ::EFPLNPDOHJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__INITSKILLDESCLIST_B__38_0_OFFSET))(this, a, b);
		}

		::System::Void _RefreshVideo_b__40_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__REFRESHVIDEO_B__40_0_OFFSET))(this, vp);
		}

		::System::String* _OnTutorialBtnClicked_b__45_1(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__ONTUTORIALBTNCLICKED_B__45_1_OFFSET))(this, _);
		}
	};
}
