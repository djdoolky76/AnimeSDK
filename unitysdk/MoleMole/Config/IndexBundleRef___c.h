#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_JAHADCAJGDC_OFFSET UNITYSDK_OFFSET(0xFFE7C50)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_PCODBEILIEP_OFFSET UNITYSDK_OFFSET(0xFFE7C30)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFE7BE0)
#define MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE7C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndexBundleRef___c_TypeDefinitionIndex = 51384;

	class IndexBundleRef___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__0_1()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x4E8C0);
		}
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x4E8C8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IndexBundleRef___c_TypeDefinitionIndex)->GetStaticField(0x4E8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C__CTOR_OFFSET))(this);
		}

		::System::String* PCODBEILIEP(::System::Int32 HLFFCMIFFIB)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_PCODBEILIEP_OFFSET))(this, HLFFCMIFFIB);
		}

		::System::String* JAHADCAJGDC(::System::Int32 HLFFCMIFFIB)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDEXBUNDLEREF___C_JAHADCAJGDC_OFFSET))(this, HLFFCMIFFIB);
		}
	};
}
