#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FCHKLNJJDBD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x140E5D90)
#define FCHKLNJJDBD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x140E5C50)
#define FCHKLNJJDBD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x140E6270)
#define FCHKLNJJDBD__CTOR_OFFSET UNITYSDK_OFFSET(0x140E6170)

inline static constexpr unsigned int FCHKLNJJDBD_TypeDefinitionIndex = 43785;

class FCHKLNJJDBD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* HMNPNEALHEH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHKLNJJDBD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHKLNJJDBD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FCHKLNJJDBD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHKLNJJDBD_GDEOPIBNOIN_OFFSET))(this);
	}
};
