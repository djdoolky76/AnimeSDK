#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KEHFHMFPCFG;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_INDEXFILEREF___C_PCODBEILIEP_OFFSET UNITYSDK_OFFSET(0x1B44CEE0)
#define MOLEMOLE_CONFIG_INDEXFILEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B44CE90)
#define MOLEMOLE_CONFIG_INDEXFILEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44CED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexFileRef___c_TypeDefinitionIndex = 49351;

	class IndexFileRef___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IndexFileRef___c_TypeDefinitionIndex)->GetStaticField(0x486D0);
		}
		static ::System::Converter_2<::KEHFHMFPCFG*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Converter_2<::KEHFHMFPCFG*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexFileRef___c_TypeDefinitionIndex)->GetStaticField(0x486D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF___C__CTOR_OFFSET))(this);
		}

		::System::String* PCODBEILIEP(::KEHFHMFPCFG* HLFFCMIFFIB)
		{
			return ((::System::String*(*)(::PVOID, ::KEHFHMFPCFG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXFILEREF___C_PCODBEILIEP_OFFSET))(this, HLFFCMIFFIB);
		}
	};
}
