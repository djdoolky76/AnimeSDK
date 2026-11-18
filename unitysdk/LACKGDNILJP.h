#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class AGOFJMFOFLG;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define LACKGDNILJP_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x129B1A90)
#define LACKGDNILJP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129B1860)
#define LACKGDNILJP_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x129B1900)
#define LACKGDNILJP_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x129B17C0)
#define LACKGDNILJP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129B16E0)
#define LACKGDNILJP__CTOR_OFFSET UNITYSDK_OFFSET(0x129B17B0)

inline static constexpr unsigned int LACKGDNILJP_TypeDefinitionIndex = 38812;

class LACKGDNILJP : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::Animation* IEOIENFFIGH; // 0x18
	::UnityEngine::Animation* MCHBBPJHNCK; // 0x20
	::UnityEngine::Transform* PDACHPLBKIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACKGDNILJP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LACKGDNILJP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ(::AGOFJMFOFLG* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::AGOFJMFOFLG*))((::PBYTE)hIl2Cpp + LACKGDNILJP_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LACKGDNILJP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::LACKGDNILJP* KDGMEFEJMGJ_1(::AGOFJMFOFLG* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::LACKGDNILJP*(*)(::AGOFJMFOFLG*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LACKGDNILJP_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LACKGDNILJP_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
