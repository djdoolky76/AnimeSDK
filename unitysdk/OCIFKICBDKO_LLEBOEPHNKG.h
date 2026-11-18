#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJPPNKFGIPB;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OCIFKICBDKO_LLEBOEPHNKG_PIGBEHCNBJO_OFFSET UNITYSDK_OFFSET(0x14F66710)
#define OCIFKICBDKO_LLEBOEPHNKG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F66700)

inline static constexpr unsigned int OCIFKICBDKO_LLEBOEPHNKG_TypeDefinitionIndex = 47829;

class OCIFKICBDKO_LLEBOEPHNKG : public ::System::Object
{
public:
	::System::Action_1<::CJPPNKFGIPB*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIFKICBDKO_LLEBOEPHNKG__CTOR_OFFSET))(this);
	}

	::System::Void PIGBEHCNBJO(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCIFKICBDKO_LLEBOEPHNKG_PIGBEHCNBJO_OFFSET))(this, DJCNCELJPOM);
	}
};
