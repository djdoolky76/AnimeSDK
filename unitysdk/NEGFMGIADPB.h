#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define NEGFMGIADPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1288DA80)
#define NEGFMGIADPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1288D9E0)
#define NEGFMGIADPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1288DA70)

inline static constexpr unsigned int NEGFMGIADPB_TypeDefinitionIndex = 86305;

class NEGFMGIADPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MGLJHABNDJO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGFMGIADPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEGFMGIADPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEGFMGIADPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
