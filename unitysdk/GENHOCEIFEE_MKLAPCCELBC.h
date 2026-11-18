#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHPCJCILIDA;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_MKLAPCCELBC_NJGFMOAKKGA_OFFSET UNITYSDK_OFFSET(0xBB8A110)
#define GENHOCEIFEE_MKLAPCCELBC_OGFHEDPIEDK_OFFSET UNITYSDK_OFFSET(0xBB8A120)
#define GENHOCEIFEE_MKLAPCCELBC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8A100)

inline static constexpr unsigned int GENHOCEIFEE_MKLAPCCELBC_TypeDefinitionIndex = 52653;

class GENHOCEIFEE_MKLAPCCELBC : public ::System::Object
{
public:
	::System::Action_1<::JHPCJCILIDA*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_MKLAPCCELBC__CTOR_OFFSET))(this);
	}

	::System::Void NJGFMOAKKGA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_MKLAPCCELBC_NJGFMOAKKGA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void OGFHEDPIEDK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_MKLAPCCELBC_OGFHEDPIEDK_OFFSET))(this, BHDNBGLCNOM);
	}
};
