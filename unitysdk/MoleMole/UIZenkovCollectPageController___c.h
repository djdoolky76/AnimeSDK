#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCKHOGBDJHK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C136D0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C13710)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__REFRESHPROGRESSPOINTS_B__12_1_OFFSET UNITYSDK_OFFSET(0x18C13720)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectPageController___c_TypeDefinitionIndex = 77494;

	class UIZenkovCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GCKHOGBDJHK*, ::System::Int32>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::GCKHOGBDJHK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AE50);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshProgressPoints_b__12_1(::GCKHOGBDJHK* x)
		{
			return ((::System::Int32(*)(::PVOID, ::GCKHOGBDJHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__REFRESHPROGRESSPOINTS_B__12_1_OFFSET))(this, x);
		}
	};
}
