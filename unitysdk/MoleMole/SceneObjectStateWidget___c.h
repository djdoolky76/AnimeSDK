#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_BKALFDHLPKF_OFFSET UNITYSDK_OFFSET(0x162EE0A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_FGLFLIMDOGA_OFFSET UNITYSDK_OFFSET(0x162EE090)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162EE040)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162EE080)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectStateWidget___c_TypeDefinitionIndex = 63266;

	class SceneObjectStateWidget___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__43_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectStateWidget___c_TypeDefinitionIndex)->GetStaticField(0x46CE0);
		}
		static ::System::Action** StaticGet___9__43_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectStateWidget___c_TypeDefinitionIndex)->GetStaticField(0x46CE8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectStateWidget___c_TypeDefinitionIndex)->GetStaticField(0x46CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CTOR_OFFSET))(this);
		}

		::System::Void FGLFLIMDOGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_FGLFLIMDOGA_OFFSET))(this);
		}

		::System::Void BKALFDHLPKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_BKALFDHLPKF_OFFSET))(this);
		}
	};
}
