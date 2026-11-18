#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HELHJBHBFDO_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x14942DC0)
#define HELHJBHBFDO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14942D50)
#define HELHJBHBFDO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14942AE0)
#define HELHJBHBFDO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14943540)
#define HELHJBHBFDO__CTOR_OFFSET UNITYSDK_OFFSET(0x14943300)

inline static constexpr unsigned int HELHJBHBFDO_TypeDefinitionIndex = 89053;

class HELHJBHBFDO : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::System::String*>* FMMECCNEOCO; // 0x30
	::KCMIFNGABDC_1<::System::String*>* BECGFIIHHAP; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* IMEIIKCPOIP; // 0x40
	::CPABOPKIGAL* BOHNBOELHDG; // 0x48
	::KCMIFNGABDC_1<::System::String*>* HHGLDOKNPCK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHJBHBFDO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHJBHBFDO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HELHJBHBFDO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHJBHBFDO_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HELHJBHBFDO_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
