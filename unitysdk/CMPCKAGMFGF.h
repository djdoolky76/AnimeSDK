#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCDHMDKNOP;
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMPCKAGMFGF_AHPHEMEEDBH_OFFSET UNITYSDK_OFFSET(0xDA3BD30)
#define CMPCKAGMFGF_BCALOJGKNME_OFFSET UNITYSDK_OFFSET(0xDA3D4B0)
#define CMPCKAGMFGF_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xDA3C630)
#define CMPCKAGMFGF_CGDEJOHCAPA_OFFSET UNITYSDK_OFFSET(0xDA3CB10)
#define CMPCKAGMFGF_CHHBMGINBOF_OFFSET UNITYSDK_OFFSET(0xDA3BFA0)
#define CMPCKAGMFGF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3BFF0)
#define CMPCKAGMFGF_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0xDA3DE70)
#define CMPCKAGMFGF_EPPOIGMAHEF_OFFSET UNITYSDK_OFFSET(0xDA3C980)
#define CMPCKAGMFGF_GAIJAKHALID_OFFSET UNITYSDK_OFFSET(0xDA3C020)
#define CMPCKAGMFGF_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xDA3BF80)
#define CMPCKAGMFGF_GIONPFLILFO_OFFSET UNITYSDK_OFFSET(0xDA3C5E0)
#define CMPCKAGMFGF_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xDA3D050)
#define CMPCKAGMFGF_IEHFMKKFBPC_OFFSET UNITYSDK_OFFSET(0xDA3E1F0)
#define CMPCKAGMFGF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDA3D650)
#define CMPCKAGMFGF_LINNGFPLHNF_OFFSET UNITYSDK_OFFSET(0xDA3C380)
#define CMPCKAGMFGF_MGODBCJOCPO_OFFSET UNITYSDK_OFFSET(0xDA3CE90)
#define CMPCKAGMFGF_MLFPFCGKLGK_OFFSET UNITYSDK_OFFSET(0xDA3C7C0)
#define CMPCKAGMFGF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xDA3C830)
#define CMPCKAGMFGF_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0xDA3CD20)
#define CMPCKAGMFGF_OEJOANHBPPP_OFFSET UNITYSDK_OFFSET(0xDA3DED0)
#define CMPCKAGMFGF_OFEDJBENHKM_OFFSET UNITYSDK_OFFSET(0xDA3D6D0)
#define CMPCKAGMFGF_OGGOKNDGNPE_OFFSET UNITYSDK_OFFSET(0xDA3D130)
#define CMPCKAGMFGF_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xDA3C940)
#define CMPCKAGMFGF_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xDA3BF90)

inline static constexpr unsigned int CMPCKAGMFGF_TypeDefinitionIndex = 69198;

	class CMPCKAGMFGF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::IBCDHMDKNOP*>* PGHFDBHKNKI; // 0x10
		::IBCDHMDKNOP* LMCCPIDGDBC; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>* KIJICCJEGMF; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BBCKAEJKLNI; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GIIFHKLFMDN; // 0x30
		::RPG::GameCore::MunicipalChatConfig* EJJEEJENLDA; // 0x38
		::System::Collections::Generic::List_1<::IBCDHMDKNOP*>* FBHMMHICDDG; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* JLDDEOIICOM; // 0x48
		::System::Boolean _IsStarted_k__BackingField; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single NBCMJCAKMNN; // 0x54
		static ::RPG::Client::Billboard::BillboardNotifyParam** StaticGet_MDOJNPFLKPK()
		{
			return (::RPG::Client::Billboard::BillboardNotifyParam**)UnitySDK::FromName("", "CMPCKAGMFGF")->GetStaticField(0x31B0);
		}

		static ::System::UInt32* StaticGet_ENBDNGNBAKB()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "CMPCKAGMFGF")->GetStaticField(0x23B0);
		}

		// static const ::System::String* GEHLLIAHIAK; // 0x0
		::System::Void _ctor(::RPG::GameCore::MunicipalChatConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MunicipalChatConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::Billboard::BillboardNotifyParam* AHPHEMEEDBH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_AHPHEMEEDBH_OFFSET))(a1);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_GET_ISSTARTED_OFFSET))(this);
		}

		::System::Void set_IsStarted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_SET_ISSTARTED_OFFSET))(this, a1);
		}

		::System::Single CHHBMGINBOF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_CHHBMGINBOF_OFFSET))(this);
		}

		::System::Void GIONPFLILFO(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_GIONPFLILFO_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Boolean MLFPFCGKLGK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_MLFPFCGKLGK_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void EPPOIGMAHEF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_EPPOIGMAHEF_OFFSET))(this, a1);
		}

		::System::Void CGDEJOHCAPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_CGDEJOHCAPA_OFFSET))(this);
		}

		::System::Void NPIIEBDOBAE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_NPIIEBDOBAE_OFFSET))(this, a1);
		}

		::System::Void MGODBCJOCPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_MGODBCJOCPO_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void BCALOJGKNME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_BCALOJGKNME_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void OFEDJBENHKM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_OFEDJBENHKM_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* EDMMDOLNANO(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_EDMMDOLNANO_OFFSET))(this, a1);
		}

		::System::Void OEJOANHBPPP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_OEJOANHBPPP_OFFSET))(this, a1);
		}

		static ::System::Void IEHFMKKFBPC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_IEHFMKKFBPC_OFFSET))(a1);
		}

		::System::Void LINNGFPLHNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_LINNGFPLHNF_OFFSET))(this);
		}

		::System::Void GAIJAKHALID(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_GAIJAKHALID_OFFSET))(this, a1);
		}

		::System::Void OGGOKNDGNPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_OGGOKNDGNPE_OFFSET))(this);
		}

	};
