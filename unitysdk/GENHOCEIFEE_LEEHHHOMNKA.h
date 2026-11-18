#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNEHIEJFFNM;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_LEEHHHOMNKA_ECBKFJFJCCE_OFFSET UNITYSDK_OFFSET(0x149BFC20)
#define GENHOCEIFEE_LEEHHHOMNKA_PICBOIDJOFK_OFFSET UNITYSDK_OFFSET(0x149BFC30)
#define GENHOCEIFEE_LEEHHHOMNKA__CTOR_OFFSET UNITYSDK_OFFSET(0x149BFC10)

inline static constexpr unsigned int GENHOCEIFEE_LEEHHHOMNKA_TypeDefinitionIndex = 52661;

class GENHOCEIFEE_LEEHHHOMNKA : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action_1<::GNEHIEJFFNM*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_LEEHHHOMNKA__CTOR_OFFSET))(this);
	}

	::System::Void ECBKFJFJCCE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_LEEHHHOMNKA_ECBKFJFJCCE_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void PICBOIDJOFK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_LEEHHHOMNKA_PICBOIDJOFK_OFFSET))(this, BHDNBGLCNOM);
	}
};
