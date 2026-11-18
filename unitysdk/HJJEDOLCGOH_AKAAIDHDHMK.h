#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIAPDGENKAH;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HJJEDOLCGOH_AKAAIDHDHMK_FJOHOLLEFGP_OFFSET UNITYSDK_OFFSET(0x16CF4CF0)
#define HJJEDOLCGOH_AKAAIDHDHMK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF4CE0)

inline static constexpr unsigned int HJJEDOLCGOH_AKAAIDHDHMK_TypeDefinitionIndex = 87722;

class HJJEDOLCGOH_AKAAIDHDHMK : public ::System::Object
{
public:
	::System::Action_1<::AIAPDGENKAH*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_AKAAIDHDHMK__CTOR_OFFSET))(this);
	}

	::System::Void FJOHOLLEFGP(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_AKAAIDHDHMK_FJOHOLLEFGP_OFFSET))(this, LJBPECKCCEA);
	}
};
