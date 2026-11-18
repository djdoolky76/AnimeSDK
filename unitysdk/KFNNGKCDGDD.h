#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFFLAMAFFLH.h"
#include "unitysdk/IFEKLJHCIEL.h"
#include "unitysdk/System/Nullable_1.h"

class BEKLEIALMDF;
class CNBBKIKPFKA;
class OGEIKLGMBKD;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFNNGKCDGDD_AOACKPCKKAP_OFFSET UNITYSDK_OFFSET(0x13C5AF90)
#define KFNNGKCDGDD_BMCFNBGEGAK_OFFSET UNITYSDK_OFFSET(0x13C5B2C0)
#define KFNNGKCDGDD_CCEFJLACBMB_OFFSET UNITYSDK_OFFSET(0x13C5AFE0)
#define KFNNGKCDGDD_GLBEGNFHPIA_OFFSET UNITYSDK_OFFSET(0x13C5B0C0)
#define KFNNGKCDGDD_HGPHMHMPCPC_OFFSET UNITYSDK_OFFSET(0x13C5B0E0)
#define KFNNGKCDGDD_KGHFEFHLEDP_OFFSET UNITYSDK_OFFSET(0x13C5B0D0)
#define KFNNGKCDGDD_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x13C5ABB0)
#define KFNNGKCDGDD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13C5B350)
#define KFNNGKCDGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5B540)

inline static constexpr unsigned int KFNNGKCDGDD_TypeDefinitionIndex = 86169;

class KFNNGKCDGDD : public ::System::Object
{
public:
	::BEKLEIALMDF* NBGIILOHAEM; // 0x10
	::BEKLEIALMDF* FJCBDPBJGMK; // 0x18
	::System::Action_1<::BEKLEIALMDF*>* _BBLLBAHPFJK_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNNGKCDGDD__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::IFEKLJHCIEL> KNDMMHPDPIB(::HFFLAMAFFLH& AAOCANGHBDG)
	{
		return ((::System::Nullable_1<::IFEKLJHCIEL>(*)(::PVOID, ::HFFLAMAFFLH&))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_KNDMMHPDPIB_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void AOACKPCKKAP(::BEKLEIALMDF* EFFOOBAOGOA, ::HFFLAMAFFLH& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BEKLEIALMDF*, ::HFFLAMAFFLH&))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_AOACKPCKKAP_OFFSET))(this, EFFOOBAOGOA, AAOCANGHBDG);
	}

	::System::Void CCEFJLACBMB(::BEKLEIALMDF* AJFFIBBGBCG)
	{
		return ((::System::Void(*)(::PVOID, ::BEKLEIALMDF*))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_CCEFJLACBMB_OFFSET))(this, AJFFIBBGBCG);
	}

	::System::Action_1<::BEKLEIALMDF*>* GLBEGNFHPIA()
	{
		return ((::System::Action_1<::BEKLEIALMDF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_GLBEGNFHPIA_OFFSET))(this);
	}

	::System::Void KGHFEFHLEDP(::System::Action_1<::BEKLEIALMDF*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::BEKLEIALMDF*>*))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_KGHFEFHLEDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HGPHMHMPCPC(::System::Collections::Generic::List_1<::BEKLEIALMDF*>*& EGEGIMGMJHN, ::CNBBKIKPFKA* PACHPEFCDKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BEKLEIALMDF*>*&, ::CNBBKIKPFKA*))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_HGPHMHMPCPC_OFFSET))(this, EGEGIMGMJHN, PACHPEFCDKP);
	}

	::System::Boolean BMCFNBGEGAK(::HFFLAMAFFLH& CFKMGONCLLN, ::System::Boolean& FELDCAPNAKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::HFFLAMAFFLH&, ::System::Boolean&))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_BMCFNBGEGAK_OFFSET))(this, CFKMGONCLLN, FELDCAPNAKB);
	}

	::System::Void PHOADBJGFBE(::OGEIKLGMBKD* PACHPEFCDKP)
	{
		return ((::System::Void(*)(::PVOID, ::OGEIKLGMBKD*))((::PBYTE)hIl2Cpp + KFNNGKCDGDD_PHOADBJGFBE_OFFSET))(this, PACHPEFCDKP);
	}
};
