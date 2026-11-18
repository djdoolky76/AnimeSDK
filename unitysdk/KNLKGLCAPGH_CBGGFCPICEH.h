#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH;
class OAEFGCLEHHO;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNLKGLCAPGH_CBGGFCPICEH_DOPPFKGOIJO_OFFSET UNITYSDK_OFFSET(0x1772BB70)
#define KNLKGLCAPGH_CBGGFCPICEH_MFOMMEDHCOL_OFFSET UNITYSDK_OFFSET(0x1772BCE0)
#define KNLKGLCAPGH_CBGGFCPICEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1772BB60)

inline static constexpr unsigned int KNLKGLCAPGH_CBGGFCPICEH_TypeDefinitionIndex = 41098;

class KNLKGLCAPGH_CBGGFCPICEH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* EBJPCDLMAMA; // 0x10
	::MoleMole::UserLocalDataItem* BNHIFIHNCHD; // 0x18
	::KNLKGLCAPGH* KLHPEBKNIFB; // 0x20
	::System::Action* LPFMDKKFMBA; // 0x28
	::System::Boolean PAKOBHFGLEE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_CBGGFCPICEH__CTOR_OFFSET))(this);
	}

	::System::Void DOPPFKGOIJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_CBGGFCPICEH_DOPPFKGOIJO_OFFSET))(this);
	}

	::System::Void MFOMMEDHCOL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_CBGGFCPICEH_MFOMMEDHCOL_OFFSET))(this, BHDNBGLCNOM);
	}
};
