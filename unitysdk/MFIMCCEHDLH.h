#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageKeyboardLayoutType.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define MFIMCCEHDLH_ADFINAHEDBI_OFFSET UNITYSDK_OFFSET(0x12D80A50)
#define MFIMCCEHDLH_CMNMDADAKIO_OFFSET UNITYSDK_OFFSET(0x12D7FB80)
#define MFIMCCEHDLH_ECGOCAOAJEM_OFFSET UNITYSDK_OFFSET(0x12D80010)
#define MFIMCCEHDLH_EFFMIOEAJOG_OFFSET UNITYSDK_OFFSET(0x12D80ED0)
#define MFIMCCEHDLH_FFLINMDEPIG_OFFSET UNITYSDK_OFFSET(0x12D80E70)
#define MFIMCCEHDLH_GLIOIIJFHFI_OFFSET UNITYSDK_OFFSET(0x12D81450)
#define MFIMCCEHDLH_HBFBDJOOAJC_OFFSET UNITYSDK_OFFSET(0x12D7FCA0)
#define MFIMCCEHDLH_HHEKAACKDHD_OFFSET UNITYSDK_OFFSET(0x12D81680)
#define MFIMCCEHDLH_IGNEKDGEIAE_1_OFFSET UNITYSDK_OFFSET(0x12D80720)
#define MFIMCCEHDLH_IGNEKDGEIAE_OFFSET UNITYSDK_OFFSET(0x12D80910)
#define MFIMCCEHDLH_JCEILCEFFBJ_OFFSET UNITYSDK_OFFSET(0x12D81530)
#define MFIMCCEHDLH_JEHHDIBPHJO_OFFSET UNITYSDK_OFFSET(0x12D801C0)
#define MFIMCCEHDLH_LPGGFLALGFO_OFFSET UNITYSDK_OFFSET(0x12D80B60)
#define MFIMCCEHDLH_OOLJBNIBNDK_OFFSET UNITYSDK_OFFSET(0x12D80AB0)
#define MFIMCCEHDLH_PPKPDHNKCEE_OFFSET UNITYSDK_OFFSET(0x12D807D0)
#define MFIMCCEHDLH__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D7CE70)

inline static constexpr unsigned int MFIMCCEHDLH_TypeDefinitionIndex = 58385;

class MFIMCCEHDLH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageKeyboardLayoutType>** StaticGet_NFAPKGBJFFP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageKeyboardLayoutType>**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageType>** StaticGet_DOCEDMEMGNP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageType>**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A18);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Globalization::NumberFormatInfo*>** StaticGet_GDPCNFNIFMK()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Globalization::NumberFormatInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A20);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Globalization::NumberFormatInfo*>** StaticGet_PKBFLDOCEND()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Globalization::NumberFormatInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A28);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_IFMCEJKMIGM()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::SystemLanguage, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A30);
	}
	static ::System::Globalization::CultureInfo** StaticGet_EELCPJJKNLI()
	{
		return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A38);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageType>** StaticGet_HBPKODJFPAF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageType>**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A40);
	}
	static ::System::Globalization::CultureInfo** StaticGet_JAHKECMADOO()
	{
		return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A48);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageVoiceType>** StaticGet_FMFLBECOOII()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::LanguageVoiceType>**)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0x34A50);
	}
	static ::MoleMole::LanguageVoiceType* StaticGet_LGHICHIJKDC()
	{
		return (::MoleMole::LanguageVoiceType*)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0xB180);
	}
	static ::MoleMole::LanguageType* StaticGet_MBABHIFLICA()
	{
		return (::MoleMole::LanguageType*)Il2CppClass::FromTypeDefinitionIndex(MFIMCCEHDLH_TypeDefinitionIndex)->GetStaticField(0xB184);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH__CCTOR_OFFSET))();
	}

	static ::System::Globalization::CultureInfo* CMNMDADAKIO()
	{
		return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_CMNMDADAKIO_OFFSET))();
	}

	static ::MoleMole::LanguageType HBFBDJOOAJC()
	{
		return ((::MoleMole::LanguageType(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_HBFBDJOOAJC_OFFSET))();
	}

	static ::MoleMole::LanguageKeyboardLayoutType ECGOCAOAJEM()
	{
		return ((::MoleMole::LanguageKeyboardLayoutType(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_ECGOCAOAJEM_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* JEHHDIBPHJO()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_JEHHDIBPHJO_OFFSET))();
	}

	static ::MoleMole::LanguageVoiceType PPKPDHNKCEE(::System::String* CPIKFOIAHOI)
	{
		return ((::MoleMole::LanguageVoiceType(*)(::System::String*))((::PBYTE)hIl2Cpp + MFIMCCEHDLH_PPKPDHNKCEE_OFFSET))(CPIKFOIAHOI);
	}

	static ::System::String* IGNEKDGEIAE()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_IGNEKDGEIAE_OFFSET))();
	}

	static ::System::Void ADFINAHEDBI(::System::Globalization::CultureInfo* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + MFIMCCEHDLH_ADFINAHEDBI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::String* OOLJBNIBNDK(::MoleMole::LanguageVoiceType LGHICHIJKDC)
	{
		return ((::System::String*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + MFIMCCEHDLH_OOLJBNIBNDK_OFFSET))(LGHICHIJKDC);
	}

	static ::MoleMole::LanguageVoiceType LPGGFLALGFO()
	{
		return ((::MoleMole::LanguageVoiceType(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_LPGGFLALGFO_OFFSET))();
	}

	static ::System::Int32 FFLINMDEPIG()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_FFLINMDEPIG_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* EFFMIOEAJOG()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_EFFMIOEAJOG_OFFSET))();
	}

	static ::System::Globalization::CultureInfo* GLIOIIJFHFI()
	{
		return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_GLIOIIJFHFI_OFFSET))();
	}

	static ::System::String* JCEILCEFFBJ()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MFIMCCEHDLH_JCEILCEFFBJ_OFFSET))();
	}

	static ::System::String* IGNEKDGEIAE_1(::MoleMole::LanguageVoiceType LGHICHIJKDC)
	{
		return ((::System::String*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + MFIMCCEHDLH_IGNEKDGEIAE_1_OFFSET))(LGHICHIJKDC);
	}

	static ::System::String* HHEKAACKDHD(::MoleMole::LanguageType OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + MFIMCCEHDLH_HHEKAACKDHD_OFFSET))(OBNIAHNMHPF);
	}
};
