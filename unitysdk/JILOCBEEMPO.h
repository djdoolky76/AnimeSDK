#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEmoAnimBlinkLayerController; }

#define JILOCBEEMPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x17425830)
#define JILOCBEEMPO_CTOR_OFFSET UNITYSDK_OFFSET(0x17425820)
#define JILOCBEEMPO_DBLJKDGCCMH_OFFSET UNITYSDK_OFFSET(0x17425770)
#define JILOCBEEMPO_DOPDFNCKDHF_OFFSET UNITYSDK_OFFSET(0x17425200)
#define JILOCBEEMPO_FMHEICPJOPK_OFFSET UNITYSDK_OFFSET(0x17425370)
#define JILOCBEEMPO_GAOEGMHJAFL_OFFSET UNITYSDK_OFFSET(0x17424FA0)
#define JILOCBEEMPO_GFOKMNFMICG_OFFSET UNITYSDK_OFFSET(0x17424EB0)
#define JILOCBEEMPO_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x174250F0)
#define JILOCBEEMPO_ICANIEOKCAN_OFFSET UNITYSDK_OFFSET(0x174253F0)
#define JILOCBEEMPO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x17425190)
#define JILOCBEEMPO_KCMAGHAEJOO_OFFSET UNITYSDK_OFFSET(0x17425140)
#define JILOCBEEMPO_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x17424F60)
#define JILOCBEEMPO_MOJPIIDGIHM_OFFSET UNITYSDK_OFFSET(0x17425440)
#define JILOCBEEMPO_NPAAEBHLHOM_OFFSET UNITYSDK_OFFSET(0x17425680)
#define JILOCBEEMPO_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x17424E60)

inline static constexpr unsigned int JILOCBEEMPO_TypeDefinitionIndex = 73123;

	class JILOCBEEMPO : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean DAMFPLLELLC; // 0x18
		::System::Boolean ANKPCPAFCGI; // 0x19
		::System::Boolean MBHLLHBPDKC; // 0x1A
		::System::Boolean LOHJIHACCEK; // 0x1B
		::System::Single LOMBKKNMJJG; // 0x1C
		::System::Single JDAJMHDDIOG; // 0x20
		static ::System::Single* StaticGet_HHPOJJFDOJP()
		{
			return (::System::Single*)UnitySDK::FromName("", "JILOCBEEMPO")->GetStaticField(0x34D0);
		}

		static ::System::Single* StaticGet_NEIHNFABLKM()
		{
			return (::System::Single*)UnitySDK::FromName("", "JILOCBEEMPO")->GetStaticField(0x34D4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILOCBEEMPO_CCTOR_OFFSET))();
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void GAOEGMHJAFL(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JILOCBEEMPO_GAOEGMHJAFL_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JILOCBEEMPO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DOPDFNCKDHF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JILOCBEEMPO_DOPDFNCKDHF_OFFSET))(this, a1);
		}

		::System::Void FMHEICPJOPK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JILOCBEEMPO_FMHEICPJOPK_OFFSET))(this, a1);
		}

		::System::Void MOJPIIDGIHM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JILOCBEEMPO_MOJPIIDGIHM_OFFSET))(this, a1);
		}

		::System::Void DBLJKDGCCMH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JILOCBEEMPO_DBLJKDGCCMH_OFFSET))(this, a1);
		}

		::System::Void GFOKMNFMICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_GFOKMNFMICG_OFFSET))(this);
		}

		::System::Void ICANIEOKCAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_ICANIEOKCAN_OFFSET))(this);
		}

		::System::Void KCMAGHAEJOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_KCMAGHAEJOO_OFFSET))(this);
		}

		::System::Void NPAAEBHLHOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_NPAAEBHLHOM_OFFSET))(this);
		}

		::RPG::Client::MonoEmoAnimBlinkLayerController* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEmoAnimBlinkLayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILOCBEEMPO_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
