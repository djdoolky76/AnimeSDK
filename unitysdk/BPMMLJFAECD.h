#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITapesConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BPMMLJFAECD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x159A4490)
#define BPMMLJFAECD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x159A43C0)
#define BPMMLJFAECD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159A4190)
#define BPMMLJFAECD__CTOR_OFFSET UNITYSDK_OFFSET(0x159A4480)

inline static constexpr unsigned int BPMMLJFAECD_TypeDefinitionIndex = 89117;

class BPMMLJFAECD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DJFONDDPAPN; // 0x18
	::UnityEngine::Animation* NNMPOEIFDFL; // 0x20
	::UnityEngine::GameObject* NLHHNCBHNDO; // 0x28
	::UnityEngine::Animation* ANEEEIBEEPJ; // 0x30
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x38
	::MoleMole::UITapesConfig* AHMFPFACACD; // 0x40
	::UnityEngine::Transform* NDMEIDAIEML; // 0x48
	::UnityEngine::Transform* BPLCMMDMCFL; // 0x50
	::UnityEngine::Transform* ONDPMDEBPME; // 0x58
	::UnityEngine::Animation* HIAPJLNDDOP; // 0x60
	::UnityEngine::Transform* CBJGMGIBMLO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMMLJFAECD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPMMLJFAECD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMMLJFAECD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPMMLJFAECD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
