#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define HNHEIGGAFND_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140C2B20)
#define HNHEIGGAFND_KBLCPFJMEPO_OFFSET UNITYSDK_OFFSET(0x140C2890)
#define HNHEIGGAFND_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140C29E0)
#define HNHEIGGAFND_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140C25B0)
#define HNHEIGGAFND__CTOR_OFFSET UNITYSDK_OFFSET(0x140C2B10)

inline static constexpr unsigned int HNHEIGGAFND_TypeDefinitionIndex = 84039;

class HNHEIGGAFND : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IOIANILNPPI; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FKAIAHLECAG; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* ABDLEONNPAJ; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x38
	::FGCOIBFFCHB* ICKNPABEDEE; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* MELOGLAEJBD; // 0x48
	::MoleMole::MonoGamepadModule* KALIABCOCGA; // 0x50
	::KNLFLMMHALL_1<::System::Object*>* DAPCBDMHKJA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHEIGGAFND__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNHEIGGAFND_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* KBLCPFJMEPO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNHEIGGAFND_KBLCPFJMEPO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHEIGGAFND_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNHEIGGAFND_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
