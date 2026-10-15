#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIMFJHFAEJE.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/System/Object.h"
class BGNIMFMFKLH;
class FJKMGCKMNNA;
class IBGFKJMMICI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKCOHFPIHIA_CMOFKLBPNJG_OFFSET UNITYSDK_OFFSET(0x164836A0)
#define IKCOHFPIHIA_CNHJMNHMFGK_OFFSET UNITYSDK_OFFSET(0x16483790)
#define IKCOHFPIHIA_CTOR_OFFSET UNITYSDK_OFFSET(0x16484400)
#define IKCOHFPIHIA_GMDEGPHLIJD_OFFSET UNITYSDK_OFFSET(0x16484380)
#define IKCOHFPIHIA_IGPIKCMMFNF_OFFSET UNITYSDK_OFFSET(0x16484230)
#define IKCOHFPIHIA_NHMEGICGKHG_OFFSET UNITYSDK_OFFSET(0x16483190)
#define IKCOHFPIHIA_OALPGPNHGPD_OFFSET UNITYSDK_OFFSET(0x16483CD0)
#define IKCOHFPIHIA_PKNJDNLGCGD_OFFSET UNITYSDK_OFFSET(0x164843C0)

	class IKCOHFPIHIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::KIMFJHFAEJE, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* KBICOGNOMEG; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* JOPBIICJOLA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_CTOR_OFFSET))(this);
		}

		::System::Void NHMEGICGKHG(::IBGFKJMMICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBGFKJMMICI*))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_NHMEGICGKHG_OFFSET))(this, a1);
		}

		::System::Void CMOFKLBPNJG(::BGNIMFMFKLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNIMFMFKLH*))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_CMOFKLBPNJG_OFFSET))(this, a1);
		}

		::System::Void IGPIKCMMFNF(::FJKMGCKMNNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_IGPIKCMMFNF_OFFSET))(this, a1);
		}

		::System::Void CNHJMNHMFGK(::BGNIMFMFKLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNIMFMFKLH*))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_CNHJMNHMFGK_OFFSET))(this, a1);
		}

		::System::Void OALPGPNHGPD(::BGNIMFMFKLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNIMFMFKLH*))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_OALPGPNHGPD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* GMDEGPHLIJD()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_GMDEGPHLIJD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::KIMFJHFAEJE, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* PKNJDNLGCGD()
		{
			return ((::System::Collections::Generic::Dictionary_2<::KIMFJHFAEJE, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCOHFPIHIA_PKNJDNLGCGD_OFFSET))(this);
		}

	};
