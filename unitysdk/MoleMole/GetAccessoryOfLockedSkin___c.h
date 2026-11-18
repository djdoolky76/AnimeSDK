#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130DCD10)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130DCD50)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__ONPROCESS_B__5_0_OFFSET UNITYSDK_OFFSET(0x130DCD60)

namespace MoleMole
{
	inline static constexpr unsigned int GetAccessoryOfLockedSkin___c_TypeDefinitionIndex = 83459;

	class GetAccessoryOfLockedSkin___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__5_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GetAccessoryOfLockedSkin___c_TypeDefinitionIndex)->GetStaticField(0x34A70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GetAccessoryOfLockedSkin___c_TypeDefinitionIndex)->GetStaticField(0x34A78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CTOR_OFFSET))(this);
		}

		::System::String* _OnProcess_b__5_0(::System::Int32 s)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__ONPROCESS_B__5_0_OFFSET))(this, s);
		}
	};
}
