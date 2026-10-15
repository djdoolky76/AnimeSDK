#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Effect_MahJongAutoLayout; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace RPG::Client::Promises { class Promise; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CIIFBLMIPGP_AFPGLOKBFNF_OFFSET UNITYSDK_OFFSET(0xCF75730)
#define CIIFBLMIPGP_BADMEJGLFNJ_OFFSET UNITYSDK_OFFSET(0xCF754E0)
#define CIIFBLMIPGP_BGFENILNBJO_OFFSET UNITYSDK_OFFSET(0xCF76430)
#define CIIFBLMIPGP_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0xCF72820)
#define CIIFBLMIPGP_CTOR_OFFSET UNITYSDK_OFFSET(0xCF77870)
#define CIIFBLMIPGP_DCDEEALNBKC_OFFSET UNITYSDK_OFFSET(0xCF75CC0)
#define CIIFBLMIPGP_DHCIFKMFCGE_OFFSET UNITYSDK_OFFSET(0xCF75940)
#define CIIFBLMIPGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF72740)
#define CIIFBLMIPGP_DJFIEOKLBOP_OFFSET UNITYSDK_OFFSET(0xCF75EA0)
#define CIIFBLMIPGP_FGLEOOJLGGO_OFFSET UNITYSDK_OFFSET(0xCF751D0)
#define CIIFBLMIPGP_GGGDMAKAFEO_OFFSET UNITYSDK_OFFSET(0xCF77760)
#define CIIFBLMIPGP_HEKEEBCAKGL_OFFSET UNITYSDK_OFFSET(0xCF756F0)
#define CIIFBLMIPGP_HHBIELBHKBE_OFFSET UNITYSDK_OFFSET(0xCF76130)
#define CIIFBLMIPGP_HOIBCJFJHCB_OFFSET UNITYSDK_OFFSET(0xCF74520)
#define CIIFBLMIPGP_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xCF72CA0)
#define CIIFBLMIPGP_IJCNNBCIMEH_OFFSET UNITYSDK_OFFSET(0xCF745C0)
#define CIIFBLMIPGP_IOHLHGJBLNK_OFFSET UNITYSDK_OFFSET(0xCF757A0)
#define CIIFBLMIPGP_JBCLDMEEGNO_OFFSET UNITYSDK_OFFSET(0xCF72CF0)
#define CIIFBLMIPGP_JDJHMBNIJLM_OFFSET UNITYSDK_OFFSET(0xCF73950)
#define CIIFBLMIPGP_JPOMDOCDLND_OFFSET UNITYSDK_OFFSET(0xCF72DA0)
#define CIIFBLMIPGP_KCBEDDDIGPD_OFFSET UNITYSDK_OFFSET(0xCF730C0)
#define CIIFBLMIPGP_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xCF727B0)
#define CIIFBLMIPGP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF726D0)
#define CIIFBLMIPGP_LDNCEAINMFD_OFFSET UNITYSDK_OFFSET(0xCF77330)
#define CIIFBLMIPGP_LFINAIMIDEM_OFFSET UNITYSDK_OFFSET(0xCF75A20)
#define CIIFBLMIPGP_LGEAAHBLPEG_OFFSET UNITYSDK_OFFSET(0xCF74010)
#define CIIFBLMIPGP_LHMGAMGBHDF_OFFSET UNITYSDK_OFFSET(0xCF74D50)
#define CIIFBLMIPGP_MGIEBFEGHIA_OFFSET UNITYSDK_OFFSET(0xCF75870)
#define CIIFBLMIPGP_NFDPAOKJFMN_OFFSET UNITYSDK_OFFSET(0xCF73D40)
#define CIIFBLMIPGP_NLAKPDGKPLC_OFFSET UNITYSDK_OFFSET(0xCF75420)
#define CIIFBLMIPGP_OEJNOHCMNOE_OFFSET UNITYSDK_OFFSET(0xCF73430)
#define CIIFBLMIPGP_OGFLPHBFEAP_OFFSET UNITYSDK_OFFSET(0xCF767A0)
#define CIIFBLMIPGP_OLNBCJNGMDG_OFFSET UNITYSDK_OFFSET(0xCF77550)
#define CIIFBLMIPGP_ONFCLAPMNAA_OFFSET UNITYSDK_OFFSET(0xCF760D0)
#define CIIFBLMIPGP_PEMICJFNMHP_OFFSET UNITYSDK_OFFSET(0xCF74610)
#define CIIFBLMIPGP_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xCF73690)

inline static constexpr unsigned int CIIFBLMIPGP_TypeDefinitionIndex = 69861;

	class CIIFBLMIPGP : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::Promises::Promise* LKJBKPINEIM; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MOMCKKNOIPF; // 0x20
		::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>* OOOCPMHNBCF; // 0x28
		::RPG::Client::MonoEffectManager* KENLJFPJNJO; // 0x30
		::System::Single EHFHMAGDJHE; // 0x38
		::System::Int32 BHLGKBIIGLF; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void BLJJEKIMKOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_BLJJEKIMKOE_OFFSET))(this, a1);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void JDJHMBNIJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_JDJHMBNIJLM_OFFSET))(this);
		}

		::System::Void NFDPAOKJFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_NFDPAOKJFMN_OFFSET))(this);
		}

		::System::Void IJCNNBCIMEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_IJCNNBCIMEH_OFFSET))(this);
		}

		::System::Void PEMICJFNMHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_PEMICJFNMHP_OFFSET))(this);
		}

		::System::Void LHMGAMGBHDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_LHMGAMGBHDF_OFFSET))(this, a1);
		}

		::System::Void FGLEOOJLGGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_FGLEOOJLGGO_OFFSET))(this);
		}

		::System::Void NLAKPDGKPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_NLAKPDGKPLC_OFFSET))(this);
		}

		::System::Void BADMEJGLFNJ(::RPG::Client::MonoEffectPluginMahJongItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_BADMEJGLFNJ_OFFSET))(this, a1);
		}

		::System::Int32 HEKEEBCAKGL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_HEKEEBCAKGL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* AFPGLOKBFNF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_AFPGLOKBFNF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* IOHLHGJBLNK()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_IOHLHGJBLNK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* MGIEBFEGHIA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_MGIEBFEGHIA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* DHCIFKMFCGE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_DHCIFKMFCGE_OFFSET))(this);
		}

		::System::Void LFINAIMIDEM(::RPG::Client::Effect_MahJongAutoLayout* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_MahJongAutoLayout*))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_LFINAIMIDEM_OFFSET))(this, a1);
		}

		::System::Void DCDEEALNBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_DCDEEALNBKC_OFFSET))(this);
		}

		::System::Void LGEAAHBLPEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_LGEAAHBLPEG_OFFSET))(this);
		}

		::System::Void DJFIEOKLBOP(::RPG::Client::MonoEffectPluginMahJongItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_DJFIEOKLBOP_OFFSET))(this, a1);
		}

		::System::Void JBCLDMEEGNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_JBCLDMEEGNO_OFFSET))(this);
		}

		::System::Void HHBIELBHKBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_HHBIELBHKBE_OFFSET))(this);
		}

		::System::Void JPOMDOCDLND(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_JPOMDOCDLND_OFFSET))(this, a1);
		}

		::System::Void HOIBCJFJHCB(::RPG::Client::MonoEffectPluginMahJongItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_HOIBCJFJHCB_OFFSET))(this, a1, a2);
		}

		::System::Void KCBEDDDIGPD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_KCBEDDDIGPD_OFFSET))(this, a1);
		}

		::System::Void OEJNOHCMNOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_OEJNOHCMNOE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LDNCEAINMFD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_LDNCEAINMFD_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion OLNBCJNGMDG(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_OLNBCJNGMDG_OFFSET))(this, a1);
		}

		::System::Void BGFENILNBJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_BGFENILNBJO_OFFSET))(this);
		}

		::System::Int32 GGGDMAKAFEO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_GGGDMAKAFEO_OFFSET))(this);
		}

		::System::Void ONFCLAPMNAA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_ONFCLAPMNAA_OFFSET))(this, a1);
		}

		::System::Void OGFLPHBFEAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_OGFLPHBFEAP_OFFSET))(this);
		}

		::RPG::Client::Effect_MahJongAutoLayout* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_MahJongAutoLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
