#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C76920)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C76960)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__INITITEMVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x17C76970)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooMapItemWidgetController___c_TypeDefinitionIndex = 62521;

	class UIMechBooMapItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooMapItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45110);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooMapItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitItemView_b__11_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___C__INITITEMVIEW_B__11_0_OFFSET))(this, vp);
		}
	};
}
