#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGMKPPLBGPE;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define NGMKPPLBGPE_PAIKDIJBJEA_AGGMLCMCHLP_OFFSET UNITYSDK_OFFSET(0xE57F7E0)
#define NGMKPPLBGPE_PAIKDIJBJEA_LLBKOKFCKMF_OFFSET UNITYSDK_OFFSET(0xE57F780)
#define NGMKPPLBGPE_PAIKDIJBJEA__CTOR_OFFSET UNITYSDK_OFFSET(0xE57F770)

inline static constexpr unsigned int NGMKPPLBGPE_PAIKDIJBJEA_TypeDefinitionIndex = 83118;

class NGMKPPLBGPE_PAIKDIJBJEA : public ::System::Object
{
public:
	::System::Action_2<::System::String*, ::System::String*>* HHNPGCDPMEJ; // 0x10
	::NGMKPPLBGPE* KLHPEBKNIFB; // 0x18
	::System::String* BNNPDDOBGNP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMKPPLBGPE_PAIKDIJBJEA__CTOR_OFFSET))(this);
	}

	::System::Void LLBKOKFCKMF(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGMKPPLBGPE_PAIKDIJBJEA_LLBKOKFCKMF_OFFSET))(this, DKPGLAFDLBC);
	}

	::System::Void AGGMLCMCHLP(::System::String* DKPGLAFDLBC, ::System::String* IIAHLOFIFCE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NGMKPPLBGPE_PAIKDIJBJEA_AGGMLCMCHLP_OFFSET))(this, DKPGLAFDLBC, IIAHLOFIFCE);
	}
};
