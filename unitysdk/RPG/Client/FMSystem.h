#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJEKHAKEEPJ;
class KODNBILFFFG;
class LDEKLAGHCDH;
namespace RPG::Client { class FMSystem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FMSYSTEM_BFFNPJJNBPF_OFFSET UNITYSDK_OFFSET(0xCE5E8A0)
#define RPG_CLIENT_FMSYSTEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCE61E90)
#define RPG_CLIENT_FMSYSTEM_DCBHEEDOFCG_OFFSET UNITYSDK_OFFSET(0xCE613F0)
#define RPG_CLIENT_FMSYSTEM_DHCPMCPFLBO_OFFSET UNITYSDK_OFFSET(0xCE5FCA0)
#define RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE611C0)
#define RPG_CLIENT_FMSYSTEM_EHAHNLNLDCH_OFFSET UNITYSDK_OFFSET(0xCE5DA60)
#define RPG_CLIENT_FMSYSTEM_FHMHEFLGHOI_OFFSET UNITYSDK_OFFSET(0xCE61650)
#define RPG_CLIENT_FMSYSTEM_FJNILKNOJHD_OFFSET UNITYSDK_OFFSET(0xCE5E4B0)
#define RPG_CLIENT_FMSYSTEM_GAIFNNNKMCP_OFFSET UNITYSDK_OFFSET(0xCE5F490)
#define RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCE61E70)
#define RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCE60A20)
#define RPG_CLIENT_FMSYSTEM_GIGCKEMAGDF_OFFSET UNITYSDK_OFFSET(0xCE5F8C0)
#define RPG_CLIENT_FMSYSTEM_HHGNJAFMBDP_OFFSET UNITYSDK_OFFSET(0xCE5F2F0)
#define RPG_CLIENT_FMSYSTEM_HIDDDEFFHGF_OFFSET UNITYSDK_OFFSET(0xCE5E3D0)
#define RPG_CLIENT_FMSYSTEM_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xCE60A80)
#define RPG_CLIENT_FMSYSTEM_JEPPAOEABNB_OFFSET UNITYSDK_OFFSET(0xCE5FEA0)
#define RPG_CLIENT_FMSYSTEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCE60AC0)
#define RPG_CLIENT_FMSYSTEM_KEIKDANOIHM_OFFSET UNITYSDK_OFFSET(0xCE5F970)
#define RPG_CLIENT_FMSYSTEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCE609E0)
#define RPG_CLIENT_FMSYSTEM_LEPDCELLGJB_OFFSET UNITYSDK_OFFSET(0xCE61C20)
#define RPG_CLIENT_FMSYSTEM_MICJJNEOCPP_OFFSET UNITYSDK_OFFSET(0xCE5F630)
#define RPG_CLIENT_FMSYSTEM_NGOIJHEDCEI_OFFSET UNITYSDK_OFFSET(0xCE61780)
#define RPG_CLIENT_FMSYSTEM_NLAIJFDGGMH_OFFSET UNITYSDK_OFFSET(0xCE60400)
#define RPG_CLIENT_FMSYSTEM_OFMOPCKAEAN_OFFSET UNITYSDK_OFFSET(0xCE5F7D0)
#define RPG_CLIENT_FMSYSTEM_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xCE60A40)
#define RPG_CLIENT_FMSYSTEM_OPLPNEABDOF_OFFSET UNITYSDK_OFFSET(0xCE5F580)
#define RPG_CLIENT_FMSYSTEM_PLHEIJBAKJI_OFFSET UNITYSDK_OFFSET(0xCE5D8D0)
#define RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCE61E80)
#define RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCE60A30)

namespace RPG::Client
{
	class FMSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::GJEKHAKEEPJ*>* _CustomChannelSources; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KODNBILFFFG*>* _CustomChannelClients; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x20
		::System::Boolean _IsPause_k__BackingField; // 0x21
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GJEKHAKEEPJ*>* _ChannelSources; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GJEKHAKEEPJ*>* _ActiveChannelSources; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::LDEKLAGHCDH*>* _ChannelReceivers; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_CTOR_OFFSET))(this);
		}

		::System::Void HHGNJAFMBDP(::System::String* a1, ::GJEKHAKEEPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GJEKHAKEEPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_HHGNJAFMBDP_OFFSET))(this, a1, a2);
		}

		::System::Void GAIFNNNKMCP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GAIFNNNKMCP_OFFSET))(this, a1);
		}

		::GJEKHAKEEPJ* OPLPNEABDOF(::System::String* a1)
		{
			return ((::GJEKHAKEEPJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_OPLPNEABDOF_OFFSET))(this, a1);
		}

		::System::Void MICJJNEOCPP(::System::String* a1, ::KODNBILFFFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::KODNBILFFFG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_MICJJNEOCPP_OFFSET))(this, a1, a2);
		}

		::System::Void OFMOPCKAEAN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_OFMOPCKAEAN_OFFSET))(this, a1);
		}

		::KODNBILFFFG* GIGCKEMAGDF(::System::String* a1)
		{
			return ((::KODNBILFFFG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GIGCKEMAGDF_OFFSET))(this, a1);
		}

		::System::Void KEIKDANOIHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_KEIKDANOIHM_OFFSET))(this);
		}

		static ::RPG::Client::FMSystem* DHCPMCPFLBO()
		{
			return ((::RPG::Client::FMSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_DHCPMCPFLBO_OFFSET))();
		}

		static ::System::Boolean HIDDDEFFHGF(::GJEKHAKEEPJ* a1)
		{
			return ((::System::Boolean(*)(::GJEKHAKEEPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_HIDDDEFFHGF_OFFSET))(a1);
		}

		static ::System::Boolean PLHEIJBAKJI(::KODNBILFFFG* a1)
		{
			return ((::System::Boolean(*)(::KODNBILFFFG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_PLHEIJBAKJI_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void JEPPAOEABNB(::GJEKHAKEEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJEKHAKEEPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_JEPPAOEABNB_OFFSET))(this, a1);
		}

		::System::Void BFFNPJJNBPF(::GJEKHAKEEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJEKHAKEEPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_BFFNPJJNBPF_OFFSET))(this, a1);
		}

		::System::Void FJNILKNOJHD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_FJNILKNOJHD_OFFSET))(this, a1);
		}

		::System::Void DCBHEEDOFCG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_DCBHEEDOFCG_OFFSET))(this, a1);
		}

		::System::Boolean FHMHEFLGHOI(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_FHMHEFLGHOI_OFFSET))(this, a1, a2);
		}

		::System::Void NLAIJFDGGMH(::KODNBILFFFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KODNBILFFFG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_NLAIJFDGGMH_OFFSET))(this, a1);
		}

		::System::Void EHAHNLNLDCH(::KODNBILFFFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KODNBILFFFG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_EHAHNLNLDCH_OFFSET))(this, a1);
		}

		::System::Void NGOIJHEDCEI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_NGOIJHEDCEI_OFFSET))(this, a1);
		}

		::System::Void LEPDCELLGJB(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_LEPDCELLGJB_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET))(this, a1);
		}

	};
}
