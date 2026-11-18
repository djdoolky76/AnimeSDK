#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HDAGICFMMJP;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define ICBOCOHGMBL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16563640)
#define ICBOCOHGMBL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16563430)
#define ICBOCOHGMBL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16563FC0)
#define ICBOCOHGMBL__CTOR_OFFSET UNITYSDK_OFFSET(0x16563DB0)

inline static constexpr unsigned int ICBOCOHGMBL_TypeDefinitionIndex = 61147;

class ICBOCOHGMBL : public ::MHMFINLCNFN
{
public:
	static ::HDAGICFMMJP** StaticGet_KIDLFDHOBCP()
	{
		return (::HDAGICFMMJP**)Il2CppClass::FromTypeDefinitionIndex(ICBOCOHGMBL_TypeDefinitionIndex)->GetStaticField(0x377D0);
	}
	::KCMIFNGABDC_1<::System::Int32>* JPIHKNPJKPH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* GOFMMIFLMPN; // 0x30
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x40
	::MKBBPOFGLOF* MIFBOCIJIFC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOCOHGMBL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOCOHGMBL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ICBOCOHGMBL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOCOHGMBL_GDEOPIBNOIN_OFFSET))(this);
	}
};
