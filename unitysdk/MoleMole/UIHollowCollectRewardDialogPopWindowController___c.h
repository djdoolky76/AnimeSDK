#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLILBAKCGJA;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18398B80)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18398BC0)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__SORTCFGS_B__47_0_OFFSET UNITYSDK_OFFSET(0x18398BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController___c_TypeDefinitionIndex = 53143;

	class UIHollowCollectRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MLILBAKCGJA*>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::MLILBAKCGJA*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCollectRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38E30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCollectRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38E38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortCfgs_b__47_0(::MLILBAKCGJA* x, ::MLILBAKCGJA* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MLILBAKCGJA*, ::MLILBAKCGJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__SORTCFGS_B__47_0_OFFSET))(this, x, y);
		}
	};
}
