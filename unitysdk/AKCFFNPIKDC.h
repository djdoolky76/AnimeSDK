#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCJNBGEHNHE;
class EDPPLJEMHBC;
class EOGICIGMDBL;
class KMNLFJHLPAK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKCFFNPIKDC_APDPCPODCGE_OFFSET UNITYSDK_OFFSET(0x16D8C030)
#define AKCFFNPIKDC_BGOCICNLOPM_OFFSET UNITYSDK_OFFSET(0x16D8BE90)
#define AKCFFNPIKDC_CKBEELBJJFG_OFFSET UNITYSDK_OFFSET(0x16D8C210)
#define AKCFFNPIKDC_IBMIGHEHPHN_OFFSET UNITYSDK_OFFSET(0x16D8BD00)
#define AKCFFNPIKDC_KGGPADCPBNM_OFFSET UNITYSDK_OFFSET(0x16D8C1F0)
#define AKCFFNPIKDC_KIELMKLDAEO_OFFSET UNITYSDK_OFFSET(0x16D8C200)
#define AKCFFNPIKDC_MMLMFLKPMPI_OFFSET UNITYSDK_OFFSET(0x16D8BEA0)
#define AKCFFNPIKDC_NLLJAEAHLFA_OFFSET UNITYSDK_OFFSET(0x16D8BDD0)
#define AKCFFNPIKDC_PIFPCAGPEHG_OFFSET UNITYSDK_OFFSET(0x16D8C1E0)
#define AKCFFNPIKDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8BE80)

inline static constexpr unsigned int AKCFFNPIKDC_TypeDefinitionIndex = 70794;

class AKCFFNPIKDC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CCJNBGEHNHE*>* _EPJOCDGDDDI_k__BackingField; // 0x10
	::System::UInt32 _AMNEHADPNBH_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCFFNPIKDC__CTOR_OFFSET))(this);
	}

	::System::Void IBMIGHEHPHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_IBMIGHEHPHN_OFFSET))(this);
	}

	::System::Void NLLJAEAHLFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_NLLJAEAHLFA_OFFSET))(this);
	}

	::System::Void BGOCICNLOPM(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CCJNBGEHNHE*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CCJNBGEHNHE*>*))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_BGOCICNLOPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMLMFLKPMPI(::KMNLFJHLPAK* BCJNKEMJECH)
	{
		return ((::System::Void(*)(::PVOID, ::KMNLFJHLPAK*))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_MMLMFLKPMPI_OFFSET))(this, BCJNKEMJECH);
	}

	::System::Void APDPCPODCGE(::EDPPLJEMHBC* AMEFDLEMJEL)
	{
		return ((::System::Void(*)(::PVOID, ::EDPPLJEMHBC*))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_APDPCPODCGE_OFFSET))(this, AMEFDLEMJEL);
	}

	::System::UInt32 PIFPCAGPEHG()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_PIFPCAGPEHG_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CCJNBGEHNHE*>* KGGPADCPBNM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CCJNBGEHNHE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_KGGPADCPBNM_OFFSET))(this);
	}

	::System::Void KIELMKLDAEO(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_KIELMKLDAEO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CKBEELBJJFG(::EOGICIGMDBL* AMEFDLEMJEL)
	{
		return ((::System::Void(*)(::PVOID, ::EOGICIGMDBL*))((::PBYTE)hIl2Cpp + AKCFFNPIKDC_CKBEELBJJFG_OFFSET))(this, AMEFDLEMJEL);
	}
};
