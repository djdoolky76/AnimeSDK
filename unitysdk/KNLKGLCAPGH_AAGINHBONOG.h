#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH;
class OAEFGCLEHHO;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNLKGLCAPGH_AAGINHBONOG_FKKHLHCDDCJ_OFFSET UNITYSDK_OFFSET(0x1791A0B0)
#define KNLKGLCAPGH_AAGINHBONOG_MDLOGDCMGEN_OFFSET UNITYSDK_OFFSET(0x1791A0A0)
#define KNLKGLCAPGH_AAGINHBONOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A090)

inline static constexpr unsigned int KNLKGLCAPGH_AAGINHBONOG_TypeDefinitionIndex = 41124;

class KNLKGLCAPGH_AAGINHBONOG : public ::System::Object
{
public:
	::KNLKGLCAPGH* KLHPEBKNIFB; // 0x10
	::MoleMole::UserLocalDataItem* BNHIFIHNCHD; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* EBJPCDLMAMA; // 0x20
	::System::Action* LPFMDKKFMBA; // 0x28
	::System::Boolean PAKOBHFGLEE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_AAGINHBONOG__CTOR_OFFSET))(this);
	}

	::System::Void MDLOGDCMGEN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_AAGINHBONOG_MDLOGDCMGEN_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void FKKHLHCDDCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_AAGINHBONOG_FKKHLHCDDCJ_OFFSET))(this);
	}
};
