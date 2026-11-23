#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/EBD8B102B967D394.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Globalization/FD689D6DB6FE1E3A.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_E29EF051F108D890_AB5D19CCA340C687_OFFSET UNITYSDK_OFFSET(0x3CAACE0)
#define SYSTEM_GLOBALIZATION_E29EF051F108D890_BAC06BEB2F95BA2D_OFFSET UNITYSDK_OFFSET(0x3CAAC00)
#define SYSTEM_GLOBALIZATION_E29EF051F108D890_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x3CAAEB0)
#define SYSTEM_GLOBALIZATION_E29EF051F108D890__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CAB160)
#define SYSTEM_GLOBALIZATION_E29EF051F108D890__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Globalization
{
	inline static constexpr unsigned int E29EF051F108D890_TypeDefinitionIndex = 10439;

	class E29EF051F108D890 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_EF7F47747664106F()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E29EF051F108D890_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Char* StaticGet_AD5A5BD9B95F5AA5()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(E29EF051F108D890_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_EE0371B93E31CEA3()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E29EF051F108D890_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Boolean BAC06BEB2F95BA2D(::System::Char E9B1EC1226C9BC85)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_E29EF051F108D890_BAC06BEB2F95BA2D_OFFSET))(E9B1EC1226C9BC85);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_E29EF051F108D890__CTOR_OFFSET))(this);
		}

		static ::System::String* E80B9F472EEFDF74(::System::Int32 BF6F8D0C223B60D8)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_E29EF051F108D890_E80B9F472EEFDF74_OFFSET))(BF6F8D0C223B60D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_E29EF051F108D890__CCTOR_OFFSET))();
		}

		static ::System::Globalization::EBD8B102B967D394 AB5D19CCA340C687(::System::Char E9B1EC1226C9BC85, ::System::Globalization::FD689D6DB6FE1E3A& E6CE7391633EEC68)
		{
			return ((::System::Globalization::EBD8B102B967D394(*)(::System::Char, ::System::Globalization::FD689D6DB6FE1E3A&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_E29EF051F108D890_AB5D19CCA340C687_OFFSET))(E9B1EC1226C9BC85, E6CE7391633EEC68);
		}
	};
}
