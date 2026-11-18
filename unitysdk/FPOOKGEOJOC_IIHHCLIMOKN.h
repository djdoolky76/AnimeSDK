#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHCDHABODP;
class KLCLKCPLKHE;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define FPOOKGEOJOC_IIHHCLIMOKN_NFIJINFJGPB_OFFSET UNITYSDK_OFFSET(0x1411A8B0)
#define FPOOKGEOJOC_IIHHCLIMOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1411A8A0)

inline static constexpr unsigned int FPOOKGEOJOC_IIHHCLIMOKN_TypeDefinitionIndex = 66257;

class FPOOKGEOJOC_IIHHCLIMOKN : public ::System::Object
{
public:
	::KLCLKCPLKHE* HEJIBNEHLIG; // 0x10
	::System::Action_2<::BPHCDHABODP*, ::KLCLKCPLKHE*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_IIHHCLIMOKN__CTOR_OFFSET))(this);
	}

	::System::Void NFIJINFJGPB(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FPOOKGEOJOC_IIHHCLIMOKN_NFIJINFJGPB_OFFSET))(this, BHDNBGLCNOM);
	}
};
