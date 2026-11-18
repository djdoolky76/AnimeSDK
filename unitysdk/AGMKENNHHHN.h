#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OBOPDFEMAFJ.h"

class DJKHNKJFMJO;
class IFBGJJPIDLA;
class MLJNEFKDCKN;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AGMKENNHHHN_BAPMLOGMHHD_OFFSET UNITYSDK_OFFSET(0x181F2720)
#define AGMKENNHHHN__CTOR_OFFSET UNITYSDK_OFFSET(0x181F26E0)

inline static constexpr unsigned int AGMKENNHHHN_TypeDefinitionIndex = 82460;

class AGMKENNHHHN : public ::System::Object
{
public:
	::System::String* DBKHIPLOKMJ; // 0x10
	::IFBGJJPIDLA* ALNJFPDHKPO; // 0x18
	::DJKHNKJFMJO* POKDDLDOBCO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN__CTOR_OFFSET))(this);
	}

	::System::Void BAPMLOGMHHD(::MLJNEFKDCKN* LMMLPEHICJN, ::System::Action* EDNJGMKPFHG, ::System::Action_1<::OBOPDFEMAFJ>* LMGFIOAMHHB)
	{
		return ((::System::Void(*)(::PVOID, ::MLJNEFKDCKN*, ::System::Action*, ::System::Action_1<::OBOPDFEMAFJ>*))((::PBYTE)hIl2Cpp + AGMKENNHHHN_BAPMLOGMHHD_OFFSET))(this, LMMLPEHICJN, EDNJGMKPFHG, LMGFIOAMHHB);
	}
};
