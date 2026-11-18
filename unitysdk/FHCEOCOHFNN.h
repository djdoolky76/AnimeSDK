#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define FHCEOCOHFNN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB421A0)
#define FHCEOCOHFNN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB42100)
#define FHCEOCOHFNN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB42190)

inline static constexpr unsigned int FHCEOCOHFNN_TypeDefinitionIndex = 53623;

class FHCEOCOHFNN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* OIJLDPBCDNB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEOCOHFNN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHCEOCOHFNN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHCEOCOHFNN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
