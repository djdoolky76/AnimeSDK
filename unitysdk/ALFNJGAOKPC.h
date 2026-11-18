#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define ALFNJGAOKPC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11BAF400)
#define ALFNJGAOKPC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11BAF1A0)
#define ALFNJGAOKPC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11BAF9D0)
#define ALFNJGAOKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x11BAF750)

inline static constexpr unsigned int ALFNJGAOKPC_TypeDefinitionIndex = 41907;

class ALFNJGAOKPC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::MKBBPOFGLOF* EDALDICDKFC; // 0x28
	::MKBBPOFGLOF* EBJPHPDGDFD; // 0x30
	::KCMIFNGABDC_1<::System::String*>* PLIIMEKIFLB; // 0x38
	::MKBBPOFGLOF* ANKNHOMANMJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFNJGAOKPC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFNJGAOKPC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ALFNJGAOKPC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFNJGAOKPC_GDEOPIBNOIN_OFFSET))(this);
	}
};
