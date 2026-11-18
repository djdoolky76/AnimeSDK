#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/LanguageTextStyleConfig.h"

class DGBFDMAJHJE;
namespace MoleMole::Config { class ConfigUITextStyle; }
namespace MoleMole::Config { class UITextStyleRule; }
namespace MoleMole::Config { class UITextStyleTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EACMEPBPKEJ_CBCEDCCIMEK_OFFSET UNITYSDK_OFFSET(0x132ABD20)
#define EACMEPBPKEJ_CECADDNFNEJ_OFFSET UNITYSDK_OFFSET(0x132AAEE0)
#define EACMEPBPKEJ_IFNPBIBNKOA_OFFSET UNITYSDK_OFFSET(0x132AB5F0)
#define EACMEPBPKEJ_JGAPCFHBBPD_OFFSET UNITYSDK_OFFSET(0x132AB920)
#define EACMEPBPKEJ_MBNMJAHCFKJ_OFFSET UNITYSDK_OFFSET(0x132AB140)
#define EACMEPBPKEJ_MDDPJKNMGAP_OFFSET UNITYSDK_OFFSET(0x132AB3B0)
#define EACMEPBPKEJ_PNKDCLOKLPO_OFFSET UNITYSDK_OFFSET(0x132ABDA0)

inline static constexpr unsigned int EACMEPBPKEJ_TypeDefinitionIndex = 70635;

class EACMEPBPKEJ : public ::System::Object
{
public:
	// static const ::System::Int32 AADIGINKILM = -0x80000000; // 0x0

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UITextStyleTemplate*>* CECADDNFNEJ(::System::Collections::Generic::List_1<::MoleMole::Config::UITextStyleTemplate*>* ILFGKPPJFIL)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UITextStyleTemplate*>*(*)(::System::Collections::Generic::List_1<::MoleMole::Config::UITextStyleTemplate*>*))((::PBYTE)hIl2Cpp + EACMEPBPKEJ_CECADDNFNEJ_OFFSET))(ILFGKPPJFIL);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>* MBNMJAHCFKJ(::System::Collections::Generic::List_1<::MoleMole::Config::LanguageTextStyleConfig>* INBACCBOBDN)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>*(*)(::System::Collections::Generic::List_1<::MoleMole::Config::LanguageTextStyleConfig>*))((::PBYTE)hIl2Cpp + EACMEPBPKEJ_MBNMJAHCFKJ_OFFSET))(INBACCBOBDN);
	}

	static ::System::Void MDDPJKNMGAP(::MoleMole::Config::ConfigUITextStyle* DFMKILICPFB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>*& OMBPDBGHIPN, ::System::Collections::Generic::List_1<::DGBFDMAJHJE*>*& EPFFDMGCLOD)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigUITextStyle*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>*&, ::System::Collections::Generic::List_1<::DGBFDMAJHJE*>*&))((::PBYTE)hIl2Cpp + EACMEPBPKEJ_MDDPJKNMGAP_OFFSET))(DFMKILICPFB, OMBPDBGHIPN, EPFFDMGCLOD);
	}

	static ::System::Boolean CBCEDCCIMEK(::MoleMole::Config::UITextStyleRule* EOKGCJINPDH, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::UITextStyleRule*, ::System::Int32))((::PBYTE)hIl2Cpp + EACMEPBPKEJ_CBCEDCCIMEK_OFFSET))(EOKGCJINPDH, ABHBKFJKINO);
	}

	static ::System::Void JGAPCFHBBPD(::System::Collections::Generic::List_1<::MoleMole::Config::UITextStyleRule*>* KLPLLHDEEOP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UITextStyleTemplate*>* NPDAEECKPGE, ::System::Collections::Generic::List_1<::DGBFDMAJHJE*>* EPFFDMGCLOD, ::System::Int32& CADLHJJOGCC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::UITextStyleRule*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UITextStyleTemplate*>*, ::System::Collections::Generic::List_1<::DGBFDMAJHJE*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + EACMEPBPKEJ_JGAPCFHBBPD_OFFSET))(KLPLLHDEEOP, NPDAEECKPGE, EPFFDMGCLOD, CADLHJJOGCC);
	}

	static ::System::Void IFNPBIBNKOA(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>* OMBPDBGHIPN, ::System::Collections::Generic::List_1<::DGBFDMAJHJE*>* EPFFDMGCLOD, ::System::Int32& CADLHJJOGCC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>*, ::System::Collections::Generic::List_1<::DGBFDMAJHJE*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + EACMEPBPKEJ_IFNPBIBNKOA_OFFSET))(OMBPDBGHIPN, EPFFDMGCLOD, CADLHJJOGCC);
	}

	static ::System::String* PNKDCLOKLPO(::MoleMole::Config::UITextStyleRule* EOKGCJINPDH, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::String*(*)(::MoleMole::Config::UITextStyleRule*, ::System::Int32))((::PBYTE)hIl2Cpp + EACMEPBPKEJ_PNKDCLOKLPO_OFFSET))(EOKGCJINPDH, ABHBKFJKINO);
	}
};
