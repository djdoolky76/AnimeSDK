#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIDIOBNBEKJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define DONEPCIBBJD_ABBLKKJOBEF_AFNEPMIHPKE_OFFSET UNITYSDK_OFFSET(0x13E653C0)
#define DONEPCIBBJD_ABBLKKJOBEF_PDMCKHPAPJC_OFFSET UNITYSDK_OFFSET(0x13E65350)
#define DONEPCIBBJD_ABBLKKJOBEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E65340)

inline static constexpr unsigned int DONEPCIBBJD_ABBLKKJOBEF_TypeDefinitionIndex = 40183;

class DONEPCIBBJD_ABBLKKJOBEF : public ::System::Object
{
public:
	::System::Action_1<::LIDIOBNBEKJ*>* DMPEOJCCCLO; // 0x10
	::System::Action_1<::LIDIOBNBEKJ*>* LJFKEJMODMK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONEPCIBBJD_ABBLKKJOBEF__CTOR_OFFSET))(this);
	}

	::System::Void PDMCKHPAPJC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DONEPCIBBJD_ABBLKKJOBEF_PDMCKHPAPJC_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void AFNEPMIHPKE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DONEPCIBBJD_ABBLKKJOBEF_AFNEPMIHPKE_OFFSET))(this, GLAOEHCGCFO);
	}
};
