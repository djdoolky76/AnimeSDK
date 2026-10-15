#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectPluginManagerMode.h"
#include "unitysdk/System/Object.h"
class FKLBAPLFKJG;
class FOLELKOHPCC;
class GJBCDLKDNEH;
class OIOAKEPOKJG;
namespace RPG::Client { class TABehaviorBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECTPLUGINMANAGER_BIDDPPEHBEC_1_OFFSET UNITYSDK_OFFSET(0xCD0D430)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_BIDDPPEHBEC_OFFSET UNITYSDK_OFFSET(0xCD0C920)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0xCD0DF60)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_CFANGKKCBJD_1_OFFSET UNITYSDK_OFFSET(0xCD0DDC0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_CFANGKKCBJD_OFFSET UNITYSDK_OFFSET(0xCD0CC50)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD0E9A0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD0E3B0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_DJPPMKGCJEC_OFFSET UNITYSDK_OFFSET(0xCD0C510)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_DMNOEFIMGHC_OFFSET UNITYSDK_OFFSET(0xCD0CDC0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_DNKNPFGMPCL_1_OFFSET UNITYSDK_OFFSET(0xCD0DED0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_DNKNPFGMPCL_OFFSET UNITYSDK_OFFSET(0xCD0D300)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_ENMNPCMDJNJ_OFFSET UNITYSDK_OFFSET(0xCD0C8D0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xCD0DAE0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_HPFFNIALFGC_OFFSET UNITYSDK_OFFSET(0xCD0CF30)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_HPNKEMOBCND_OFFSET UNITYSDK_OFFSET(0xCD0D8B0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_IAJFFMLPBKH_1_OFFSET UNITYSDK_OFFSET(0xCD0D540)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_IAJFFMLPBKH_OFFSET UNITYSDK_OFFSET(0xCD0D160)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_IIDCMBJEJKO_OFFSET UNITYSDK_OFFSET(0xCD0E240)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_JCJACDENGNE_1_OFFSET UNITYSDK_OFFSET(0xCD0DA50)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_JCJACDENGNE_OFFSET UNITYSDK_OFFSET(0xCD0D230)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCD0D5D0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_KDAMKHMJAAG_OFFSET UNITYSDK_OFFSET(0xCD0D3D0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_KDJBIGNAOCL_OFFSET UNITYSDK_OFFSET(0xCD0E6F0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_KHIKBNNBBHJ_OFFSET UNITYSDK_OFFSET(0xCD0BD30)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD0BAC0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_MEIIKBBEIIE_OFFSET UNITYSDK_OFFSET(0xCD0BF70)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_MJGBFIMKEED_OFFSET UNITYSDK_OFFSET(0xCD0BB10)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_MNGIEGBICGO_OFFSET UNITYSDK_OFFSET(0xCD0C1B0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_NLJOAIICOBO_OFFSET UNITYSDK_OFFSET(0xCD0CA90)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_OEALEKAMLCO_OFFSET UNITYSDK_OFFSET(0xCD0C4B0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_PJPNKHDIPNG_1_OFFSET UNITYSDK_OFFSET(0xCD0D940)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_PJPNKHDIPNG_OFFSET UNITYSDK_OFFSET(0xCD0CAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPluginManager_TypeDefinitionIndex = 70416;

	class EffectPluginManager : public ::System::Object
	{
	public:
		::RPG::Client::EffectPluginManagerMode _EffectPluginManagerMode; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* _EffectPluginTickIDList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _EffectPluginLateTickIDList; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _EffectPluginEndOfLateTickIDList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _EffectPluginRenderTickIDList; // 0x30
		::System::Collections::Generic::List_1<::FOLELKOHPCC*>* _EffectPluginTickList; // 0x38
		::System::Collections::Generic::List_1<::OIOAKEPOKJG*>* _EffectPluginLateTickList; // 0x40
		::System::Collections::Generic::List_1<::FKLBAPLFKJG*>* _EffectPluginEndOfLateTickList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TABehaviorBase*>* _TABehaviorID2BehaviorDic; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _GOInstanceID2TABehaviorIDListDic; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _GOInstanceID2ResetTABehaviorIDListDic; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::TABehaviorBase*>* _TmpBehaviorList; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::EffectPluginManagerMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EffectPluginManagerMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void MJGBFIMKEED(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_MJGBFIMKEED_OFFSET))(this, a1, a2);
		}

		::System::Void KHIKBNNBBHJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_KHIKBNNBBHJ_OFFSET))(this, a1);
		}

		::System::Void MEIIKBBEIIE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_MEIIKBBEIIE_OFFSET))(this, a1);
		}

		::System::Void MNGIEGBICGO(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::TABehaviorBase* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::TABehaviorBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_MNGIEGBICGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OEALEKAMLCO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_OEALEKAMLCO_OFFSET))(this, a1);
		}

		::System::Void DJPPMKGCJEC(::System::Int32 a1, ::GJBCDLKDNEH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::GJBCDLKDNEH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_DJPPMKGCJEC_OFFSET))(this, a1, a2);
		}

		::System::Void HPFFNIALFGC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_HPFFNIALFGC_OFFSET))(this, a1);
		}

		::System::Void BIDDPPEHBEC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_BIDDPPEHBEC_OFFSET))(this, a1);
		}

		::System::Void IAJFFMLPBKH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_IAJFFMLPBKH_OFFSET))(this, a1);
		}

		::System::Void BIDDPPEHBEC_1(::FOLELKOHPCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOLELKOHPCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_BIDDPPEHBEC_1_OFFSET))(this, a1);
		}

		::System::Void IAJFFMLPBKH_1(::FOLELKOHPCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOLELKOHPCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_IAJFFMLPBKH_1_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PJPNKHDIPNG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_PJPNKHDIPNG_OFFSET))(this, a1);
		}

		::System::Void JCJACDENGNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_JCJACDENGNE_OFFSET))(this, a1);
		}

		::System::Void PJPNKHDIPNG_1(::OIOAKEPOKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIOAKEPOKJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_PJPNKHDIPNG_1_OFFSET))(this, a1);
		}

		::System::Void JCJACDENGNE_1(::OIOAKEPOKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIOAKEPOKJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_JCJACDENGNE_1_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void CFANGKKCBJD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_CFANGKKCBJD_OFFSET))(this, a1);
		}

		::System::Void DNKNPFGMPCL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_DNKNPFGMPCL_OFFSET))(this, a1);
		}

		::System::Void CFANGKKCBJD_1(::FKLBAPLFKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLBAPLFKJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_CFANGKKCBJD_1_OFFSET))(this, a1);
		}

		::System::Void DNKNPFGMPCL_1(::FKLBAPLFKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLBAPLFKJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_DNKNPFGMPCL_1_OFFSET))(this, a1);
		}

		::System::Void BLJJEKIMKOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_BLJJEKIMKOE_OFFSET))(this, a1);
		}

		::System::Void DMNOEFIMGHC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_DMNOEFIMGHC_OFFSET))(this, a1);
		}

		::System::Void KDAMKHMJAAG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_KDAMKHMJAAG_OFFSET))(this, a1);
		}

		::System::Void IIDCMBJEJKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_IIDCMBJEJKO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::TABehaviorBase* HPNKEMOBCND(::System::Int32 a1)
		{
			return ((::RPG::Client::TABehaviorBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_HPNKEMOBCND_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TABehaviorBase*>* KDJBIGNAOCL(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TABehaviorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_KDJBIGNAOCL_OFFSET))(this, a1);
		}

		::System::Boolean NLJOAIICOBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_NLJOAIICOBO_OFFSET))(this);
		}

		::System::Boolean ENMNPCMDJNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_ENMNPCMDJNJ_OFFSET))(this);
		}

	};
}
