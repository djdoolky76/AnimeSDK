#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FCOBPGEJDPJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JDDMMGEFKPN_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x17B1F980)
#define JDDMMGEFKPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B1F6B0)
#define JDDMMGEFKPN_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x17B1F8E0)
#define JDDMMGEFKPN_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x17B1F750)
#define JDDMMGEFKPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B1F5B0)
#define JDDMMGEFKPN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1F6A0)

inline static constexpr unsigned int JDDMMGEFKPN_TypeDefinitionIndex = 88776;

class JDDMMGEFKPN : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DEMGHPAAOKC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDMMGEFKPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDDMMGEFKPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDDMMGEFKPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::JDDMMGEFKPN* KDGMEFEJMGJ(::FCOBPGEJDPJ* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::JDDMMGEFKPN*(*)(::FCOBPGEJDPJ*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDDMMGEFKPN_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::FCOBPGEJDPJ* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FCOBPGEJDPJ*))((::PBYTE)hIl2Cpp + JDDMMGEFKPN_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDDMMGEFKPN_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
