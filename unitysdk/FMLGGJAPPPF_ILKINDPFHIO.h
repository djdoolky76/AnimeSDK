#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class FMLGGJAPPPF_AHPDBNPLJDL;
class OAEFGCLEHHO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMLGGJAPPPF_ILKINDPFHIO_CODCCELJLDK_OFFSET UNITYSDK_OFFSET(0x11D83CE0)
#define FMLGGJAPPPF_ILKINDPFHIO_DBCIKFAPENP_OFFSET UNITYSDK_OFFSET(0x11D83D70)
#define FMLGGJAPPPF_ILKINDPFHIO_NOKCAPMNAEI_OFFSET UNITYSDK_OFFSET(0x11D83DF0)
#define FMLGGJAPPPF_ILKINDPFHIO__CTOR_OFFSET UNITYSDK_OFFSET(0x11D83CD0)

inline static constexpr unsigned int FMLGGJAPPPF_ILKINDPFHIO_TypeDefinitionIndex = 64641;

class FMLGGJAPPPF_ILKINDPFHIO : public ::System::Object
{
public:
	::FMLGGJAPPPF_AHPDBNPLJDL* FGBNBFHOKAA; // 0x10
	::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* GEAGNOPHOLK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_ILKINDPFHIO__CTOR_OFFSET))(this);
	}

	::System::Void CODCCELJLDK(::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* KFPOCEEKEPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_ILKINDPFHIO_CODCCELJLDK_OFFSET))(this, KFPOCEEKEPE);
	}

	::System::Void DBCIKFAPENP(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_ILKINDPFHIO_DBCIKFAPENP_OFFSET))(this, JBLGEGMELPE);
	}

	::System::Void NOKCAPMNAEI(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_ILKINDPFHIO_NOKCAPMNAEI_OFFSET))(this, IMILJHBDOGJ);
	}
};
