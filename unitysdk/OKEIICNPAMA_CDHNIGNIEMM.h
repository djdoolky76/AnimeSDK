#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_CDHNIGNIEMM_HANGHIBMFJJ_OFFSET UNITYSDK_OFFSET(0x172D1A10)
#define OKEIICNPAMA_CDHNIGNIEMM_HFONAENHLIC_OFFSET UNITYSDK_OFFSET(0x172D1A00)
#define OKEIICNPAMA_CDHNIGNIEMM__CTOR_OFFSET UNITYSDK_OFFSET(0x172D19F0)

inline static constexpr unsigned int OKEIICNPAMA_CDHNIGNIEMM_TypeDefinitionIndex = 87978;

class OKEIICNPAMA_CDHNIGNIEMM : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CDHNIGNIEMM__CTOR_OFFSET))(this);
	}

	::System::Void HFONAENHLIC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CDHNIGNIEMM_HFONAENHLIC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HANGHIBMFJJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CDHNIGNIEMM_HANGHIBMFJJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
