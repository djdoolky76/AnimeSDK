#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJIAHMMPICB_NpcShowState.h"
#include "unitysdk/HJIAHMMPICB_NpcStateControlSource.h"
#include "unitysdk/KBKJEDAFBDO_DeviceInputType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HPKACEPPPCA;
class KFOMKKPPMBO;
class KGDADKNPPOL;
class KLEFGGIHGMI;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsMonoPlugin; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define KBKJEDAFBDO_ABIGEDLAAFL_OFFSET UNITYSDK_OFFSET(0xB308330)
#define KBKJEDAFBDO_ANIJGNOBEOO_OFFSET UNITYSDK_OFFSET(0xB309510)
#define KBKJEDAFBDO_BDPIOIGBOIB_OFFSET UNITYSDK_OFFSET(0xB307CA0)
#define KBKJEDAFBDO_BGGNKLAEDLH_OFFSET UNITYSDK_OFFSET(0xB3088E0)
#define KBKJEDAFBDO_BMDDEPJGMLJ_OFFSET UNITYSDK_OFFSET(0xB3097C0)
#define KBKJEDAFBDO_BMINIJCDEMK_OFFSET UNITYSDK_OFFSET(0xB309B30)
#define KBKJEDAFBDO_BPFOPMOEKFD_OFFSET UNITYSDK_OFFSET(0xB3074B0)
#define KBKJEDAFBDO_BPMMOPIHGFM_OFFSET UNITYSDK_OFFSET(0xB309EC0)
#define KBKJEDAFBDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB304EF0)
#define KBKJEDAFBDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB307DF0)
#define KBKJEDAFBDO_DMPBCDBLCGI_OFFSET UNITYSDK_OFFSET(0xB307660)
#define KBKJEDAFBDO_EJANDHBMAEC_OFFSET UNITYSDK_OFFSET(0xB308B50)
#define KBKJEDAFBDO_ELOIHAMPKLB_OFFSET UNITYSDK_OFFSET(0xB305C10)
#define KBKJEDAFBDO_FELCAFOBAEF_OFFSET UNITYSDK_OFFSET(0xB309A50)
#define KBKJEDAFBDO_FEPPLOIGGMK_OFFSET UNITYSDK_OFFSET(0xB30A0C0)
#define KBKJEDAFBDO_FHDFDGHJHEO_OFFSET UNITYSDK_OFFSET(0xB308A70)
#define KBKJEDAFBDO_GCOKAHNKOMG_OFFSET UNITYSDK_OFFSET(0xB30AD90)
#define KBKJEDAFBDO_GJHGFJJDOOA_OFFSET UNITYSDK_OFFSET(0xB3081B0)
#define KBKJEDAFBDO_HBMFHNJJEIH_OFFSET UNITYSDK_OFFSET(0xB305A00)
#define KBKJEDAFBDO_HKFNLIGAAMO_OFFSET UNITYSDK_OFFSET(0xB307740)
#define KBKJEDAFBDO_HNOMMLFAAKG_OFFSET UNITYSDK_OFFSET(0xB309000)
#define KBKJEDAFBDO_ICIOBBMPPDK_OFFSET UNITYSDK_OFFSET(0xB309E40)
#define KBKJEDAFBDO_IEBGEOFOBAB_OFFSET UNITYSDK_OFFSET(0xB30AAD0)
#define KBKJEDAFBDO_IOOMOCKMCHO_OFFSET UNITYSDK_OFFSET(0xB305160)
#define KBKJEDAFBDO_IPJNMPEKGJJ_OFFSET UNITYSDK_OFFSET(0xB309390)
#define KBKJEDAFBDO_JHMKINHPIHE_OFFSET UNITYSDK_OFFSET(0xB307D70)
#define KBKJEDAFBDO_JJMGHIPBGGL_OFFSET UNITYSDK_OFFSET(0xB307CE0)
#define KBKJEDAFBDO_JLEKFOAPFLH_OFFSET UNITYSDK_OFFSET(0xB30B010)
#define KBKJEDAFBDO_JPBIJBIJGNA_OFFSET UNITYSDK_OFFSET(0xB307D20)
#define KBKJEDAFBDO_LAPBMFHPBNO_OFFSET UNITYSDK_OFFSET(0xB307B30)
#define KBKJEDAFBDO_MDMJLJEOJDB_OFFSET UNITYSDK_OFFSET(0xB30A9F0)
#define KBKJEDAFBDO_MHGLFKCDDBG_OFFSET UNITYSDK_OFFSET(0xB3054F0)
#define KBKJEDAFBDO_MMNMPBNCCAI_OFFSET UNITYSDK_OFFSET(0xB3069B0)
#define KBKJEDAFBDO_MNIDEOAGKOJ_OFFSET UNITYSDK_OFFSET(0xB3087D0)
#define KBKJEDAFBDO_MPLMILCJFNN_OFFSET UNITYSDK_OFFSET(0xB30A580)
#define KBKJEDAFBDO_NBIBEBLDDDN_OFFSET UNITYSDK_OFFSET(0xB3076B0)
#define KBKJEDAFBDO_NFECJCBHGMA_OFFSET UNITYSDK_OFFSET(0xB30A0B0)
#define KBKJEDAFBDO_NNFEFLEEIBE_OFFSET UNITYSDK_OFFSET(0xB308E60)
#define KBKJEDAFBDO_OBFHFILDCBN_OFFSET UNITYSDK_OFFSET(0xB307DB0)
#define KBKJEDAFBDO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB308480)
#define KBKJEDAFBDO_PBJHDMNBEJH_OFFSET UNITYSDK_OFFSET(0xB30B2B0)
#define KBKJEDAFBDO_PCDGOCDNBPN_OFFSET UNITYSDK_OFFSET(0xB307420)
#define KBKJEDAFBDO_PCLJBCCDOIB_OFFSET UNITYSDK_OFFSET(0xB306410)

inline static constexpr unsigned int KBKJEDAFBDO_TypeDefinitionIndex = 60521;

	class KBKJEDAFBDO : public ::System::Object
	{
	public:
		::RPG::Client::EraFlipperCommonConfig* PCCAFFNJDIA; // 0x10
		::KGDADKNPPOL* PJPLBAAGDBP; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::System::Int32>* JNOANAAABEM; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin*>* OECINMCJHNL; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::KFOMKKPPMBO*>* JCKMGLMEALK; // 0x30
		::RPG::Client::Promises::Promise* HLMGFOIAFFE; // 0x38
		::RPG::Client::PartialFlipDeviceComponent* HNBBCNGNNBM; // 0x40
		::Il2CppArray<::RPG::Client::PartialFlipDeviceComponent*>* FEMMCBFCMEL; // 0x48
		::System::Boolean HNNMIKKHFKE; // 0x50
		::System::Boolean GBIGPLLOLJO; // 0x51
		::System::Boolean LOOAANPOJDG; // 0x52
		::System::Boolean KIONCABKICE; // 0x53
		::KBKJEDAFBDO_DeviceInputType LIDMCACHCPE; // 0x54
		::System::Boolean BFCKNLCJHHA; // 0x58
		::System::Boolean KAEJFBIPMNF; // 0x59
		::System::Boolean DDGLLDJEJBD; // 0x5A
		::System::Byte _padding0[0x5];
		::System::Int64 BJPKNEBFNKG; // 0x60
		::System::Void _ctor(::RPG::Client::EraFlipperCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_CTOR_OFFSET))(this, a1);
		}

		::System::Void IOOMOCKMCHO(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_IOOMOCKMCHO_OFFSET))(this, a1);
		}

		::System::Void HBMFHNJJEIH(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_HBMFHNJJEIH_OFFSET))(this, a1);
		}

		::System::Void ELOIHAMPKLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_ELOIHAMPKLB_OFFSET))(this);
		}

		::System::Void MMNMPBNCCAI(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_MMNMPBNCCAI_OFFSET))(this, a1);
		}

		::System::Void PCDGOCDNBPN(::RPG::GameCore::EraStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_PCDGOCDNBPN_OFFSET))(this, a1);
		}

		::System::Void DMPBCDBLCGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_DMPBCDBLCGI_OFFSET))(this);
		}

		::System::Void BPFOPMOEKFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_BPFOPMOEKFD_OFFSET))(this);
		}

		::System::Void NBIBEBLDDDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_NBIBEBLDDDN_OFFSET))(this);
		}

		::System::Void HKFNLIGAAMO(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_HKFNLIGAAMO_OFFSET))(this, a1);
		}

		::System::Boolean LAPBMFHPBNO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_LAPBMFHPBNO_OFFSET))(this, a1);
		}

		::System::Boolean BDPIOIGBOIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_BDPIOIGBOIB_OFFSET))(this);
		}

		::System::Boolean JJMGHIPBGGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_JJMGHIPBGGL_OFFSET))(this);
		}

		::System::Boolean JPBIJBIJGNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_JPBIJBIJGNA_OFFSET))(this);
		}

		::System::Boolean JHMKINHPIHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_JHMKINHPIHE_OFFSET))(this);
		}

		::System::Boolean OBFHFILDCBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_OBFHFILDCBN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_DISPOSE_OFFSET))(this);
		}

		::System::Void GJHGFJJDOOA(::RPG::Client::PartialFlipDeviceComponent* a1, ::RPG::Client::FlipDevicePoint* a2, ::RPG::Client::FlipDevicePoint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_GJHGFJJDOOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean EJANDHBMAEC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_EJANDHBMAEC_OFFSET))(this, a1);
		}

		::System::Boolean NNFEFLEEIBE(::RPG::Client::PartialFlipDeviceComponent* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_NNFEFLEEIBE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HNOMMLFAAKG(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PartialFlipDeviceComponent* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_HNOMMLFAAKG_OFFSET))(this, a1, a2);
		}

		::System::Void IPJNMPEKGJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_IPJNMPEKGJJ_OFFSET))(this);
		}

		::System::Void ANIJGNOBEOO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_ANIJGNOBEOO_OFFSET))(this, a1);
		}

		::System::Void FELCAFOBAEF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_FELCAFOBAEF_OFFSET))(this, a1);
		}

		::System::Void ICIOBBMPPDK(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_ICIOBBMPPDK_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> BPMMOPIHGFM()
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_BPMMOPIHGFM_OFFSET))(this);
		}

		::System::Boolean MNIDEOAGKOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_MNIDEOAGKOJ_OFFSET))(this);
		}

		::RPG::Client::PartialFlipDeviceComponent* NFECJCBHGMA()
		{
			return ((::RPG::Client::PartialFlipDeviceComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_NFECJCBHGMA_OFFSET))(this);
		}

		::System::Void BGGNKLAEDLH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_BGGNKLAEDLH_OFFSET))(this, a1);
		}

		::System::Void BMINIJCDEMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_BMINIJCDEMK_OFFSET))(this);
		}

		::System::Void FEPPLOIGGMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_FEPPLOIGGMK_OFFSET))(this, a1);
		}

		::System::Void FHDFDGHJHEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_FHDFDGHJHEO_OFFSET))(this, a1);
		}

		::System::Void BMDDEPJGMLJ(::HJIAHMMPICB_NpcShowState a1, ::HJIAHMMPICB_NpcStateControlSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::HJIAHMMPICB_NpcShowState, ::HJIAHMMPICB_NpcStateControlSource))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_BMDDEPJGMLJ_OFFSET))(this, a1, a2);
		}

		::System::Void MPLMILCJFNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_MPLMILCJFNN_OFFSET))(this);
		}

		::System::Void MDMJLJEOJDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_MDMJLJEOJDB_OFFSET))(this, a1);
		}

		::System::Void MHGLFKCDDBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_MHGLFKCDDBG_OFFSET))(this);
		}

		::System::Void PCLJBCCDOIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_PCLJBCCDOIB_OFFSET))(this);
		}

		::System::Void IEBGEOFOBAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_IEBGEOFOBAB_OFFSET))(this);
		}

		::System::Void GCOKAHNKOMG(::HPKACEPPPCA* a1, ::KLEFGGIHGMI* a2, ::UnityEngine::GameObject* a3, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType a4)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_GCOKAHNKOMG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JLEKFOAPFLH(::HPKACEPPPCA* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::System::Object*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_JLEKFOAPFLH_OFFSET))(this, a1, a2);
		}

		::System::Void ABIGEDLAAFL(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_ABIGEDLAAFL_OFFSET))(this, a1);
		}

		::System::Void PBJHDMNBEJH(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_PBJHDMNBEJH_OFFSET))(this, a1);
		}

	};
