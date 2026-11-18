#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PALNMBCNNKP;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_KDNGBMCKIDI_COELGCHKKON_OFFSET UNITYSDK_OFFSET(0x16C6DB70)
#define LPJHHHCOLMO_KDNGBMCKIDI_JGABDOOOOLO_OFFSET UNITYSDK_OFFSET(0x16C6DBE0)
#define LPJHHHCOLMO_KDNGBMCKIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6DB60)

inline static constexpr unsigned int LPJHHHCOLMO_KDNGBMCKIDI_TypeDefinitionIndex = 46632;

class LPJHHHCOLMO_KDNGBMCKIDI : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::PALNMBCNNKP*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KDNGBMCKIDI__CTOR_OFFSET))(this);
	}

	::System::Void COELGCHKKON(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KDNGBMCKIDI_COELGCHKKON_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void JGABDOOOOLO(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KDNGBMCKIDI_JGABDOOOOLO_OFFSET))(this, DJCNCELJPOM);
	}
};
