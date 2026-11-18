#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class IJOMBKFKJNM;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175606E0)
#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17560720)
#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__REFRESHPROGRESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x17560730)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleRewardDialogPopWindowController___c_TypeDefinitionIndex = 55329;

	class UICampIdleRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICampIdleRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46F20);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*>, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdleRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshProgress_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IJOMBKFKJNM*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__REFRESHPROGRESS_B__16_0_OFFSET))(this, x);
		}
	};
}
