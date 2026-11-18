#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageSizeFontBrushStyle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C_HLMGGOBLDLN_OFFSET UNITYSDK_OFFSET(0x190B5420)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x190B53D0)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x190B5410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontBrushStyle___c_TypeDefinitionIndex = 54421;

	class LanguageFontBrushStyle___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle___c_TypeDefinitionIndex)->GetStaticField(0x3BE10);
		}
		static ::System::Comparison_1<::MoleMole::Config::LanguageSizeFontBrushStyle>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::MoleMole::Config::LanguageSizeFontBrushStyle>**)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle___c_TypeDefinitionIndex)->GetStaticField(0x3BE18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 HLMGGOBLDLN(::MoleMole::Config::LanguageSizeFontBrushStyle EJCBEJMGFAJ, ::MoleMole::Config::LanguageSizeFontBrushStyle EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::LanguageSizeFontBrushStyle, ::MoleMole::Config::LanguageSizeFontBrushStyle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE___C_HLMGGOBLDLN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
