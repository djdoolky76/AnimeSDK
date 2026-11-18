#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define FDMCCMFMEMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F60450)
#define FDMCCMFMEMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F602E0)
#define FDMCCMFMEMO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F60440)

inline static constexpr unsigned int FDMCCMFMEMO_TypeDefinitionIndex = 39587;

class FDMCCMFMEMO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* NMFDMLDEJHK; // 0x18
	::UnityEngine::Transform* LDMIMPJLKGM; // 0x20
	::UnityEngine::Transform* MLIJNKCFEKD; // 0x28
	::UnityEngine::Transform* CEAFLOBBAKC; // 0x30
	::UnityEngine::Transform* LJIMECFOIBC; // 0x38
	::UnityEngine::Transform* OOIHHANHGPN; // 0x40
	::UnityEngine::Transform* PBENJLNFBAJ; // 0x48
	::UnityEngine::Transform* AEENICFLLBM; // 0x50
	::UnityEngine::Transform* EFPBBEGKIJD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMCCMFMEMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDMCCMFMEMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDMCCMFMEMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
