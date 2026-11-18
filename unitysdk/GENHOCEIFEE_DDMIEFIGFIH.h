#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EEDABKDPNNE;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_DDMIEFIGFIH_CGADOJHOJPB_OFFSET UNITYSDK_OFFSET(0x11DA1850)
#define GENHOCEIFEE_DDMIEFIGFIH_DMALNBHMNHI_OFFSET UNITYSDK_OFFSET(0x11DA1860)
#define GENHOCEIFEE_DDMIEFIGFIH__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA1840)

inline static constexpr unsigned int GENHOCEIFEE_DDMIEFIGFIH_TypeDefinitionIndex = 52656;

class GENHOCEIFEE_DDMIEFIGFIH : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action_1<::EEDABKDPNNE*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_DDMIEFIGFIH__CTOR_OFFSET))(this);
	}

	::System::Void CGADOJHOJPB(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_DDMIEFIGFIH_CGADOJHOJPB_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DMALNBHMNHI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_DDMIEFIGFIH_DMALNBHMNHI_OFFSET))(this, BHDNBGLCNOM);
	}
};
