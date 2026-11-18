#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class PBIHJEGJPGD;

#define MEPLJICKHLL_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x156A4B50)
#define MEPLJICKHLL_EECEHNFEDJF_OFFSET UNITYSDK_OFFSET(0x156A4290)
#define MEPLJICKHLL_HOECGPKLNLB_OFFSET UNITYSDK_OFFSET(0x156A4BE0)
#define MEPLJICKHLL_MIIHEKIIBDO_OFFSET UNITYSDK_OFFSET(0x156A4350)
#define MEPLJICKHLL_NBMGLALEDDG_OFFSET UNITYSDK_OFFSET(0x156A4BA0)
#define MEPLJICKHLL__CTOR_OFFSET UNITYSDK_OFFSET(0x156A4280)

inline static constexpr unsigned int MEPLJICKHLL_TypeDefinitionIndex = 68403;

class MEPLJICKHLL : public ::System::Object
{
public:
	// static const ::System::Int64 LNNNIJKMKBM = 0x1388; // 0x0
	// static const ::System::Int64 CEODEGNDKDA = 0x190; // 0x0
	::CFMGIKJLMBJ* HMMDLJMPFBA; // 0x10
	::PBIHJEGJPGD* LFOHODONBIL; // 0x18
	::System::Boolean NCANMCDNEAH; // 0x20
	::System::Byte _padding0[0x7];
	::System::Int64 ABIOHELMCPL; // 0x28

	::System::Void _ctor(::PBIHJEGJPGD* IONJNNHMDAB)
	{
		return ((::System::Void(*)(::PVOID, ::PBIHJEGJPGD*))((::PBYTE)hIl2Cpp + MEPLJICKHLL__CTOR_OFFSET))(this, IONJNNHMDAB);
	}

	::System::Void EECEHNFEDJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPLJICKHLL_EECEHNFEDJF_OFFSET))(this);
	}

	::System::Void MIIHEKIIBDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPLJICKHLL_MIIHEKIIBDO_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPLJICKHLL_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void NBMGLALEDDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPLJICKHLL_NBMGLALEDDG_OFFSET))(this);
	}

	::System::Void HOECGPKLNLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPLJICKHLL_HOECGPKLNLB_OFFSET))(this);
	}
};
