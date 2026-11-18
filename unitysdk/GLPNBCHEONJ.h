#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class BDIGDABPLBK;

#define GLPNBCHEONJ_BPLIAGPFJLK_OFFSET UNITYSDK_OFFSET(0x10FD0D70)
#define GLPNBCHEONJ_CJKCFBNHNKH_OFFSET UNITYSDK_OFFSET(0x10FEAF30)
#define GLPNBCHEONJ_FJHIILEINEF_OFFSET UNITYSDK_OFFSET(0x10FEAF20)
#define GLPNBCHEONJ_HOMKMNPBFLJ_OFFSET UNITYSDK_OFFSET(0x10FEAF40)
#define GLPNBCHEONJ_JLLGHCOGANA_OFFSET UNITYSDK_OFFSET(0x10FEAFA0)
#define GLPNBCHEONJ_JNMDAAPCABN_1_OFFSET UNITYSDK_OFFSET(0x10FEAE10)
#define GLPNBCHEONJ_JNMDAAPCABN_OFFSET UNITYSDK_OFFSET(0x10FD1560)
#define GLPNBCHEONJ_NLNDNNOLLFK_OFFSET UNITYSDK_OFFSET(0x10FEAEC0)
#define GLPNBCHEONJ_PKPONELMNNJ_OFFSET UNITYSDK_OFFSET(0x10FEAF50)
#define GLPNBCHEONJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10FEAF10)

inline static constexpr unsigned int GLPNBCHEONJ_TypeDefinitionIndex = 86573;

class GLPNBCHEONJ : public ::System::Object
{
public:
	::System::Boolean _DMMGMDMNONL_k__BackingField; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 _ECJFLGLGDOD_k__BackingField; // 0x14
	::System::Int32 HEOJMPBCJKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPNBCHEONJ__CTOR_OFFSET))(this);
	}

	::System::Int32 JNMDAAPCABN(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Int32(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_JNMDAAPCABN_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Int32 JNMDAAPCABN_1(::BDIGDABPLBK*& OLAHLBBKEIL)
	{
		return ((::System::Int32(*)(::PVOID, ::BDIGDABPLBK*&))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_JNMDAAPCABN_1_OFFSET))(this, OLAHLBBKEIL);
	}

	::System::Void NLNDNNOLLFK(::System::Int32 DABCKBIAKHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_NLNDNNOLLFK_OFFSET))(this, DABCKBIAKHA);
	}

	::System::Boolean FJHIILEINEF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_FJHIILEINEF_OFFSET))(this);
	}

	::System::Void CJKCFBNHNKH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_CJKCFBNHNKH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HOMKMNPBFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_HOMKMNPBFLJ_OFFSET))(this);
	}

	::System::Void BPLIAGPFJLK(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_BPLIAGPFJLK_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 PKPONELMNNJ(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Int32(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_PKPONELMNNJ_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JLLGHCOGANA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPNBCHEONJ_JLLGHCOGANA_OFFSET))(this, EGEGIMGMJHN);
	}
};
