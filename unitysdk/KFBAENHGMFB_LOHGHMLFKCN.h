#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_LOHGHMLFKCN_GFPFAFBFFHP_OFFSET UNITYSDK_OFFSET(0x15207A00)
#define KFBAENHGMFB_LOHGHMLFKCN_OJABLLHPNDB_OFFSET UNITYSDK_OFFSET(0x15207B30)
#define KFBAENHGMFB_LOHGHMLFKCN__CTOR_OFFSET UNITYSDK_OFFSET(0x152079F0)

inline static constexpr unsigned int KFBAENHGMFB_LOHGHMLFKCN_TypeDefinitionIndex = 78589;

class KFBAENHGMFB_LOHGHMLFKCN : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x10
	::CJIEIHEDMME* LADPIPOMBJM; // 0x18
	::System::Action_1<::OAEFGCLEHHO*>* EJGDHCIBCJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LOHGHMLFKCN__CTOR_OFFSET))(this);
	}

	::System::Void GFPFAFBFFHP(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LOHGHMLFKCN_GFPFAFBFFHP_OFFSET))(this, JBLGEGMELPE);
	}

	::System::Void OJABLLHPNDB(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LOHGHMLFKCN_OJABLLHPNDB_OFFSET))(this, IMILJHBDOGJ);
	}
};
