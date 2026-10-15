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

#define RPG_CLIENT_FMSYSTEM_BFFNPJJNBPF_OFFSET UNITYSDK_OFFSET(0xCE56580)
#define RPG_CLIENT_FMSYSTEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCE59B70)
#define RPG_CLIENT_FMSYSTEM_DCBHEEDOFCG_OFFSET UNITYSDK_OFFSET(0xCE590D0)
#define RPG_CLIENT_FMSYSTEM_DHCPMCPFLBO_OFFSET UNITYSDK_OFFSET(0xCE57980)
#define RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE58EA0)
#define RPG_CLIENT_FMSYSTEM_EHAHNLNLDCH_OFFSET UNITYSDK_OFFSET(0xCE55740)
#define RPG_CLIENT_FMSYSTEM_FHMHEFLGHOI_OFFSET UNITYSDK_OFFSET(0xCE59330)
#define RPG_CLIENT_FMSYSTEM_FJNILKNOJHD_OFFSET UNITYSDK_OFFSET(0xCE56190)
#define RPG_CLIENT_FMSYSTEM_GAIFNNNKMCP_OFFSET UNITYSDK_OFFSET(0xCE57170)
#define RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCE59B50)
#define RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCE58700)
#define RPG_CLIENT_FMSYSTEM_GIGCKEMAGDF_OFFSET UNITYSDK_OFFSET(0xCE575A0)
#define RPG_CLIENT_FMSYSTEM_HHGNJAFMBDP_OFFSET UNITYSDK_OFFSET(0xCE56FD0)
#define RPG_CLIENT_FMSYSTEM_HIDDDEFFHGF_OFFSET UNITYSDK_OFFSET(0xCE560B0)
#define RPG_CLIENT_FMSYSTEM_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xCE58760)
#define RPG_CLIENT_FMSYSTEM_JEPPAOEABNB_OFFSET UNITYSDK_OFFSET(0xCE57B80)
#define RPG_CLIENT_FMSYSTEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCE587A0)
#define RPG_CLIENT_FMSYSTEM_KEIKDANOIHM_OFFSET UNITYSDK_OFFSET(0xCE57650)
#define RPG_CLIENT_FMSYSTEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCE586C0)
#define RPG_CLIENT_FMSYSTEM_LEPDCELLGJB_OFFSET UNITYSDK_OFFSET(0xCE59900)
#define RPG_CLIENT_FMSYSTEM_MICJJNEOCPP_OFFSET UNITYSDK_OFFSET(0xCE57310)
#define RPG_CLIENT_FMSYSTEM_NGOIJHEDCEI_OFFSET UNITYSDK_OFFSET(0xCE59460)
#define RPG_CLIENT_FMSYSTEM_NLAIJFDGGMH_OFFSET UNITYSDK_OFFSET(0xCE580E0)
#define RPG_CLIENT_FMSYSTEM_OFMOPCKAEAN_OFFSET UNITYSDK_OFFSET(0xCE574B0)
#define RPG_CLIENT_FMSYSTEM_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xCE58720)
#define RPG_CLIENT_FMSYSTEM_OPLPNEABDOF_OFFSET UNITYSDK_OFFSET(0xCE57260)
#define RPG_CLIENT_FMSYSTEM_PLHEIJBAKJI_OFFSET UNITYSDK_OFFSET(0xCE555B0)
#define RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCE59B60)
#define RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCE58710)

namespace RPG::Client
{
	inline static constexpr unsigned int FMSystem_TypeDefinitionIndex = 60903;

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
