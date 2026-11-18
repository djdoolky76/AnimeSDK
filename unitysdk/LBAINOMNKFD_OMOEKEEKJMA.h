#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBIBMHAPIGM;
class OAEFGCLEHHO;
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace System { template <typename T> class Action_1; }

#define LBAINOMNKFD_OMOEKEEKJMA_GHEBJGOHBCO_OFFSET UNITYSDK_OFFSET(0x17738090)
#define LBAINOMNKFD_OMOEKEEKJMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17738080)

inline static constexpr unsigned int LBAINOMNKFD_OMOEKEEKJMA_TypeDefinitionIndex = 53384;

class LBAINOMNKFD_OMOEKEEKJMA : public ::System::Object
{
public:
	::System::Action_1<::MBIBMHAPIGM*>* EJGDHCIBCJH; // 0x10
	::NPCCrowd::AI::AttractorRuntime* LBCKFGBFLIK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAINOMNKFD_OMOEKEEKJMA__CTOR_OFFSET))(this);
	}

	::System::Void GHEBJGOHBCO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LBAINOMNKFD_OMOEKEEKJMA_GHEBJGOHBCO_OFFSET))(this, BHDNBGLCNOM);
	}
};
