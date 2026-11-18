#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UISlider; }
template <typename T> class ADJHBNPPGEE_1;

#define LOAFHGHDDAH_BLCLKECHMCO_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0x1A62D490)
#define LOAFHGHDDAH_BLCLKECHMCO_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1A62D680)
#define LOAFHGHDDAH_BLCLKECHMCO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A62D3C0)
#define LOAFHGHDDAH_BLCLKECHMCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62D7C0)

inline static constexpr unsigned int LOAFHGHDDAH_BLCLKECHMCO_TypeDefinitionIndex = 60750;

class LOAFHGHDDAH_BLCLKECHMCO : public ::MLJGPKJJPIL
{
public:
	::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>* BNKEEHDFLAG; // 0x28
	::UnityEngine::UI::Extension::UISlider* EGAGEFLKHHA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_BLCLKECHMCO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_BLCLKECHMCO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_BLCLKECHMCO_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_BLCLKECHMCO_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
