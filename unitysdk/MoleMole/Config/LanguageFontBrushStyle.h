#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageSizeFontBrushStyle.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_FBBNDKEKAIC_OFFSET UNITYSDK_OFFSET(0x1925A790)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_GGCPNABGGGP_OFFSET UNITYSDK_OFFSET(0x1925A8B0)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_IPCCLDHEBKI_OFFSET UNITYSDK_OFFSET(0x1925A590)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1925A530)
#define MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1925A420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontBrushStyle_TypeDefinitionIndex = 54420;

	class LanguageFontBrushStyle : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MoleMole::Config::LanguageSizeFontBrushStyle>** StaticGet_Empty()
		{
			return (::Il2CppArray<::MoleMole::Config::LanguageSizeFontBrushStyle>**)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle_TypeDefinitionIndex)->GetStaticField(0x3BE00);
		}
		static ::System::ValueTuple_2<::System::Single, ::System::Single>* StaticGet_DefaultStyle()
		{
			return (::System::ValueTuple_2<::System::Single, ::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(LanguageFontBrushStyle_TypeDefinitionIndex)->GetStaticField(0xDB50);
		}
		::Il2CppArray<::MoleMole::LanguageType>* fontBrushEnabledLanguages; // 0x10
		::Il2CppArray<::MoleMole::Config::LanguageSizeFontBrushStyle>* sizeStyles; // 0x18
		::System::Boolean _sorted; // 0x20
		::System::Byte _padding0[0x7];
		::System::UInt64 _fontBrushEnabledLanguages; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* fontBrushEnabledDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE__CCTOR_OFFSET))();
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> IPCCLDHEBKI(::System::Int32 PPJMNMAPCGG)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_IPCCLDHEBKI_OFFSET))(this, PPJMNMAPCGG);
		}

		::System::Void FBBNDKEKAIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_FBBNDKEKAIC_OFFSET))(this);
		}

		::System::Boolean GGCPNABGGGP(::MoleMole::LanguageType DMKBGJMJELN)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTBRUSHSTYLE_GGCPNABGGGP_OFFSET))(this, DMKBGJMJELN);
		}
	};
}
