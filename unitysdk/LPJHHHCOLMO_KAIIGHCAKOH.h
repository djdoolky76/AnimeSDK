#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHEKMHNCOFP;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LPJHHHCOLMO_KAIIGHCAKOH_LCBBGIHMJEP_OFFSET UNITYSDK_OFFSET(0x17CF85B0)
#define LPJHHHCOLMO_KAIIGHCAKOH_PDALKGCIBCJ_OFFSET UNITYSDK_OFFSET(0x17CF8620)
#define LPJHHHCOLMO_KAIIGHCAKOH__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF85A0)

inline static constexpr unsigned int LPJHHHCOLMO_KAIIGHCAKOH_TypeDefinitionIndex = 46629;

class LPJHHHCOLMO_KAIIGHCAKOH : public ::System::Object
{
public:
	::System::Action_1<::EHEKMHNCOFP*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KAIIGHCAKOH__CTOR_OFFSET))(this);
	}

	::System::Void LCBBGIHMJEP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KAIIGHCAKOH_LCBBGIHMJEP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void PDALKGCIBCJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_KAIIGHCAKOH_PDALKGCIBCJ_OFFSET))(this, BHDNBGLCNOM);
	}
};
