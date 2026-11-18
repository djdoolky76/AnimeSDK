#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIAMHMOLOF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C3CFF0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C3D030)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTDELICIOUSNESS_B__77_1_OFFSET UNITYSDK_OFFSET(0x15C3D040)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTHEALTH_B__78_1_OFFSET UNITYSDK_OFFSET(0x15C3D070)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c_TypeDefinitionIndex = 66423;

	class UIOverlordFeastServePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastServePageController___c_TypeDefinitionIndex)->GetStaticField(0x355B0);
		}
		static ::System::Func_2<::OCIAMHMOLOF*, ::System::Int32>** StaticGet___9__77_1()
		{
			return (::System::Func_2<::OCIAMHMOLOF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastServePageController___c_TypeDefinitionIndex)->GetStaticField(0x355B8);
		}
		static ::System::Func_2<::OCIAMHMOLOF*, ::System::Int32>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::OCIAMHMOLOF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIOverlordFeastServePageController___c_TypeDefinitionIndex)->GetStaticField(0x355C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetGuestDeliciousness_b__77_1(::OCIAMHMOLOF* context)
		{
			return ((::System::Int32(*)(::PVOID, ::OCIAMHMOLOF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTDELICIOUSNESS_B__77_1_OFFSET))(this, context);
		}

		::System::Int32 _GetGuestHealth_b__78_1(::OCIAMHMOLOF* context)
		{
			return ((::System::Int32(*)(::PVOID, ::OCIAMHMOLOF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__GETGUESTHEALTH_B__78_1_OFFSET))(this, context);
		}
	};
}
