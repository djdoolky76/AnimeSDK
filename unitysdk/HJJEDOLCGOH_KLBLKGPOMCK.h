#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_KLBLKGPOMCK_PBEOBFECFBN_OFFSET UNITYSDK_OFFSET(0x16CF4E10)
#define HJJEDOLCGOH_KLBLKGPOMCK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF4E00)

inline static constexpr unsigned int HJJEDOLCGOH_KLBLKGPOMCK_TypeDefinitionIndex = 87719;

class HJJEDOLCGOH_KLBLKGPOMCK : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_KLBLKGPOMCK__CTOR_OFFSET))(this);
	}

	::System::Void PBEOBFECFBN(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_KLBLKGPOMCK_PBEOBFECFBN_OFFSET))(this, LJBPECKCCEA);
	}
};
