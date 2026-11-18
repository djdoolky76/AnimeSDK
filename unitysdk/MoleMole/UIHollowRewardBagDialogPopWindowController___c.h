#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C7D7D0)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7D810)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x18C7D820)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRewardBagDialogPopWindowController___c_TypeDefinitionIndex = 90143;

	class UIHollowRewardBagDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::HGAJKHIMKJP*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRewardBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x353D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRewardBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x353D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__14_0(::HGAJKHIMKJP* cardA, ::HGAJKHIMKJP* cardB)
		{
			return ((::System::Int32(*)(::PVOID, ::HGAJKHIMKJP*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__14_0_OFFSET))(this, cardA, cardB);
		}
	};
}
