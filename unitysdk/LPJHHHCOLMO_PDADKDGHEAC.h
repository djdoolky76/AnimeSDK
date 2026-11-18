#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PFOOLDNOBJF;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_PDADKDGHEAC_BABGKELENDK_OFFSET UNITYSDK_OFFSET(0x13D0DD60)
#define LPJHHHCOLMO_PDADKDGHEAC_JNANIHPFAGI_OFFSET UNITYSDK_OFFSET(0x13D0DCF0)
#define LPJHHHCOLMO_PDADKDGHEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0DCE0)

inline static constexpr unsigned int LPJHHHCOLMO_PDADKDGHEAC_TypeDefinitionIndex = 46656;

class LPJHHHCOLMO_PDADKDGHEAC : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::PFOOLDNOBJF*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_PDADKDGHEAC__CTOR_OFFSET))(this);
	}

	::System::Void JNANIHPFAGI(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_PDADKDGHEAC_JNANIHPFAGI_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void BABGKELENDK(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_PDADKDGHEAC_BABGKELENDK_OFFSET))(this, DJCNCELJPOM);
	}
};
