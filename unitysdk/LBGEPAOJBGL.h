#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define LBGEPAOJBGL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x163568B0)
#define LBGEPAOJBGL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16356760)
#define LBGEPAOJBGL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16356A30)
#define LBGEPAOJBGL__CTOR_OFFSET UNITYSDK_OFFSET(0x16356900)

inline static constexpr unsigned int LBGEPAOJBGL_TypeDefinitionIndex = 91578;

class LBGEPAOJBGL : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* GLBHDPPOAAC; // 0x28
	::AAMKEDEDHPD_1<::System::String*>* KPBEHONFCPJ; // 0x30
	::AAMKEDEDHPD_1<::System::Boolean>* IHLDIOOCHEM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGEPAOJBGL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGEPAOJBGL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LBGEPAOJBGL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGEPAOJBGL_GDEOPIBNOIN_OFFSET))(this);
	}
};
