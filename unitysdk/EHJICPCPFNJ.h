#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EHJICPCPFNJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF9C6D70)
#define EHJICPCPFNJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9C6B70)
#define EHJICPCPFNJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9C7270)
#define EHJICPCPFNJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C70F0)

inline static constexpr unsigned int EHJICPCPFNJ_TypeDefinitionIndex = 92349;

class EHJICPCPFNJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* IFHAOBKGEOL; // 0x28
	::CPABOPKIGAL* HMNPNEALHEH; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* ILAFMOHPFIE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJICPCPFNJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJICPCPFNJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EHJICPCPFNJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJICPCPFNJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
