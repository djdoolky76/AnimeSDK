#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FHJDJLLPFEA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B94550)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B94590)
#define MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x17B945A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex = 56268;

	class UIOverlordFeastPromotionPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FHJDJLLPFEA*, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::FHJDJLLPFEA*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex)->GetStaticField(0x45140);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastPromotionPageController___c_TypeDefinitionIndex)->GetStaticField(0x45148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshView_b__9_0(::FHJDJLLPFEA* t)
		{
			return ((::System::String*(*)(::PVOID, ::FHJDJLLPFEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPROMOTIONPAGECONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, t);
		}
	};
}
