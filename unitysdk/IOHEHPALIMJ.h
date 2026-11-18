#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IOHEHPALIMJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15C28730)
#define IOHEHPALIMJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15C28670)
#define IOHEHPALIMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15C28720)

inline static constexpr unsigned int IOHEHPALIMJ_TypeDefinitionIndex = 47586;

class IOHEHPALIMJ : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* ICKJBLKDIOP; // 0x18
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHEHPALIMJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOHEHPALIMJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOHEHPALIMJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
