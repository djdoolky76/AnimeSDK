#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_AspectOffset.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C_KEHKCEEBFHN_OFFSET UNITYSDK_OFFSET(0x10D399C0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D39970)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D399B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera___c_TypeDefinitionIndex = 60953;

	class MonoEffectPluginAttachToCamera___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAttachToCamera___c_TypeDefinitionIndex)->GetStaticField(0x38960);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAttachToCamera___c_TypeDefinitionIndex)->GetStaticField(0x38968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 KEHKCEEBFHN(::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset DPGFPHIMDEL, ::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset DLJPLHKELCO)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset, ::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C_KEHKCEEBFHN_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
		}
	};
}
