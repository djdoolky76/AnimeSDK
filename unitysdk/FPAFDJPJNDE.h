#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define FPAFDJPJNDE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x14117940)
#define FPAFDJPJNDE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141178D0)
#define FPAFDJPJNDE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14117720)
#define FPAFDJPJNDE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14117D90)
#define FPAFDJPJNDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14117D80)
#define FPAFDJPJNDE__CTOR_OFFSET UNITYSDK_OFFSET(0x14117C40)

inline static constexpr unsigned int FPAFDJPJNDE_TypeDefinitionIndex = 58029;

class FPAFDJPJNDE : public ::CGJEMKCKIJG
{
public:
	static ::System::Int32* StaticGet_MHBKKHPPLEN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FPAFDJPJNDE_TypeDefinitionIndex)->GetStaticField(0x13120);
	}
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Object*>*>* BBGIJLDJIDF; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFDJPJNDE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPAFDJPJNDE__CCTOR_OFFSET))();
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFDJPJNDE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FPAFDJPJNDE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FPAFDJPJNDE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFDJPJNDE_GDEOPIBNOIN_OFFSET))(this);
	}
};
