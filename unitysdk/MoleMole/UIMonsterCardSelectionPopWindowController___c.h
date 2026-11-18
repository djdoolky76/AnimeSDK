#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCFCONNDCI;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EAE5B0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_0_OFFSET UNITYSDK_OFFSET(0x18EAE600)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_1_OFFSET UNITYSDK_OFFSET(0x18EAE6E0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAE5F0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_0_OFFSET UNITYSDK_OFFSET(0x18EAE7E0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_1_OFFSET UNITYSDK_OFFSET(0x18EAE800)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex = 86927;

	class UIMonsterCardSelectionPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50D60);
		}
		static ::System::Func_1<::System::Collections::Generic::IList_1<::System::Int32>*>** StaticGet___9__52_1()
		{
			return (::System::Func_1<::System::Collections::Generic::IList_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50D68);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__60_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50D70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50D78);
		}
		static ::System::Func_2<::BPCFCONNDCI*, ::System::Int32>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::BPCFCONNDCI*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterCardSelectionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _CreateRewardFilter_b__52_0(::System::Int32 filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_0_OFFSET))(this, filter);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* _CreateRewardFilter_b__52_1()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__CREATEREWARDFILTER_B__52_1_OFFSET))(this);
		}

		::System::Int32 _OnlyRefreshFilterCardBuff_b__60_0(::BPCFCONNDCI* x)
		{
			return ((::System::Int32(*)(::PVOID, ::BPCFCONNDCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_0_OFFSET))(this, x);
		}

		::System::Boolean _OnlyRefreshFilterCardBuff_b__60_1(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER___C__ONLYREFRESHFILTERCARDBUFF_B__60_1_OFFSET))(this, x);
		}
	};
}
