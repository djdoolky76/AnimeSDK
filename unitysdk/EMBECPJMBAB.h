#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EMBECPJMBAB_EPKCJHFNPPA;
class PDLAGKINJNL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EMBECPJMBAB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16160050)
#define EMBECPJMBAB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1615FF80)
#define EMBECPJMBAB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16160580)
#define EMBECPJMBAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16160540)
#define EMBECPJMBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x16160490)

inline static constexpr unsigned int EMBECPJMBAB_TypeDefinitionIndex = 56794;

class EMBECPJMBAB : public ::CGJEMKCKIJG
{
public:
	static ::EMBECPJMBAB_EPKCJHFNPPA** StaticGet_DNOHELNGGLJ()
	{
		return (::EMBECPJMBAB_EPKCJHFNPPA**)Il2CppClass::FromTypeDefinitionIndex(EMBECPJMBAB_TypeDefinitionIndex)->GetStaticField(0x49AC0);
	}
	::KCMIFNGABDC_1<::System::String*>* NNDBCNKABEO; // 0x18
	::PDLAGKINJNL* ACDKKCINLON; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBECPJMBAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMBECPJMBAB__CCTOR_OFFSET))();
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBECPJMBAB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EMBECPJMBAB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBECPJMBAB_GDEOPIBNOIN_OFFSET))(this);
	}
};
