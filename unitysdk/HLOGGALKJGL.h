#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class GPMHFIDMKIN;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define HLOGGALKJGL_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x12E86160)
#define HLOGGALKJGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E860C0)
#define HLOGGALKJGL_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x12E86000)
#define HLOGGALKJGL_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x12E85E50)
#define HLOGGALKJGL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E85DC0)
#define HLOGGALKJGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E85BF0)
#define HLOGGALKJGL__CTOR_OFFSET UNITYSDK_OFFSET(0x12E85E40)

inline static constexpr unsigned int HLOGGALKJGL_TypeDefinitionIndex = 79980;

class HLOGGALKJGL : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::GCIMMDDIFBJ* OBMCPPLFHAO; // 0x18
	::FGCOIBFFCHB* NBEPDODKHGH; // 0x20
	::UnityEngine::CanvasGroup* MBKACMJJMBH; // 0x28
	::GCIMMDDIFBJ* JAKLKHNNIIK; // 0x30
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOGGALKJGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLOGGALKJGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::HLOGGALKJGL* KDGMEFEJMGJ(::GPMHFIDMKIN* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::HLOGGALKJGL*(*)(::GPMHFIDMKIN*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLOGGALKJGL_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLOGGALKJGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLOGGALKJGL_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::GPMHFIDMKIN* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::GPMHFIDMKIN*))((::PBYTE)hIl2Cpp + HLOGGALKJGL_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOGGALKJGL_KGEBDLGBGNM_OFFSET))(this);
	}
};
