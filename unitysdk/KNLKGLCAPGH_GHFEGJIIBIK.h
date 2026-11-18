#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH;
class OAEFGCLEHHO;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }

#define KNLKGLCAPGH_GHFEGJIIBIK_KDGEBIABNNM_OFFSET UNITYSDK_OFFSET(0x1A2D77E0)
#define KNLKGLCAPGH_GHFEGJIIBIK_PIOAKIJAGEC_OFFSET UNITYSDK_OFFSET(0x1A2D7940)
#define KNLKGLCAPGH_GHFEGJIIBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D77D0)

inline static constexpr unsigned int KNLKGLCAPGH_GHFEGJIIBIK_TypeDefinitionIndex = 41117;

class KNLKGLCAPGH_GHFEGJIIBIK : public ::System::Object
{
public:
	::KNLKGLCAPGH* KLHPEBKNIFB; // 0x10
	::MoleMole::UserLocalDataItem* BNHIFIHNCHD; // 0x18
	::System::Action* LPFMDKKFMBA; // 0x20
	::System::Boolean OCBPHJEHHAD; // 0x28
	::System::Byte _padding0[0x3];
	::System::UInt32 ACHBBPJIBIE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_GHFEGJIIBIK__CTOR_OFFSET))(this);
	}

	::System::Void KDGEBIABNNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_GHFEGJIIBIK_KDGEBIABNNM_OFFSET))(this);
	}

	::System::Void PIOAKIJAGEC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_GHFEGJIIBIK_PIOAKIJAGEC_OFFSET))(this, BHDNBGLCNOM);
	}
};
