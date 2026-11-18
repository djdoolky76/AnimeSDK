#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C_BGMAJGNEEFI_OFFSET UNITYSDK_OFFSET(0x162F4F80)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C_EFMCOHHINDD_OFFSET UNITYSDK_OFFSET(0x162F4F90)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162F4F30)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162F4F70)

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectWidget___c_TypeDefinitionIndex = 55060;

	class StaticSceneObjectWidget___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget___c_TypeDefinitionIndex)->GetStaticField(0x46D00);
		}
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget___c_TypeDefinitionIndex)->GetStaticField(0x46D08);
		}
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget___c_TypeDefinitionIndex)->GetStaticField(0x46D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CTOR_OFFSET))(this);
		}

		::System::Void BGMAJGNEEFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C_BGMAJGNEEFI_OFFSET))(this);
		}

		::System::Void EFMCOHHINDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C_EFMCOHHINDD_OFFSET))(this);
		}
	};
}
