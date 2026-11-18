#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define NECONCJIAKJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1313B1E0)
#define NECONCJIAKJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1313B030)
#define NECONCJIAKJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1313AD80)
#define NECONCJIAKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1313B1D0)

inline static constexpr unsigned int NECONCJIAKJ_TypeDefinitionIndex = 89241;

class NECONCJIAKJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DDBDEJNNEFG; // 0x18
	::FGCOIBFFCHB* FAPCKDKJPFJ; // 0x20
	::FGCOIBFFCHB* OLCPBMCFNIM; // 0x28
	::FGCOIBFFCHB* PPDMGBNLLDB; // 0x30
	::UnityEngine::GameObject* JFFJPNALABG; // 0x38
	::FGCOIBFFCHB* NMAOIKFLFOO; // 0x40
	::FGCOIBFFCHB* IKGJFFMOCKI; // 0x48
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x50
	::FGCOIBFFCHB* AOIHDBLMELN; // 0x58
	::FGCOIBFFCHB* OHHLOBPCNPO; // 0x60
	::FGCOIBFFCHB* GLMAMPNHADJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECONCJIAKJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NECONCJIAKJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECONCJIAKJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NECONCJIAKJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
