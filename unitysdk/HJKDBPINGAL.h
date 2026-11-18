#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HJKDBPINGAL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A1C550)
#define HJKDBPINGAL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A1C3A0)
#define HJKDBPINGAL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A1C870)
#define HJKDBPINGAL__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1C730)

inline static constexpr unsigned int HJKDBPINGAL_TypeDefinitionIndex = 41259;

class HJKDBPINGAL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* AEMGLNIMMPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* KIIDLHMOMLC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKDBPINGAL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKDBPINGAL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HJKDBPINGAL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKDBPINGAL_GDEOPIBNOIN_OFFSET))(this);
	}
};
