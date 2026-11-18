#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABLGAGODCKD;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define HJJEDOLCGOH_NFLJKFGCKKD_BGLJEHMIGFC_OFFSET UNITYSDK_OFFSET(0x15DBBC60)
#define HJJEDOLCGOH_NFLJKFGCKKD_LABJGPOCFAP_OFFSET UNITYSDK_OFFSET(0x15DBBBE0)
#define HJJEDOLCGOH_NFLJKFGCKKD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBBBD0)

inline static constexpr unsigned int HJJEDOLCGOH_NFLJKFGCKKD_TypeDefinitionIndex = 87720;

class HJJEDOLCGOH_NFLJKFGCKKD : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action_1<::ABLGAGODCKD*>* KCIPHLPEBIL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_NFLJKFGCKKD__CTOR_OFFSET))(this);
	}

	::System::Void LABJGPOCFAP(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_NFLJKFGCKKD_LABJGPOCFAP_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void BGLJEHMIGFC(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_NFLJKFGCKKD_BGLJEHMIGFC_OFFSET))(this, LJBPECKCCEA);
	}
};
