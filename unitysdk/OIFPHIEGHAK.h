#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OIFPHIEGHAK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18445F30)
#define OIFPHIEGHAK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18445D30)
#define OIFPHIEGHAK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18446370)
#define OIFPHIEGHAK__CTOR_OFFSET UNITYSDK_OFFSET(0x184461F0)

inline static constexpr unsigned int OIFPHIEGHAK_TypeDefinitionIndex = 75653;

class OIFPHIEGHAK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* HMNPNEALHEH; // 0x20
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FONFDLOHLIP; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* EGINAPKOEMJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFPHIEGHAK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFPHIEGHAK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OIFPHIEGHAK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFPHIEGHAK_GDEOPIBNOIN_OFFSET))(this);
	}
};
