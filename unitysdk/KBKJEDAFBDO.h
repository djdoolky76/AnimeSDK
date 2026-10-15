#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJIAHMMPICB_NpcShowState.h"
#include "unitysdk/HJIAHMMPICB_NpcStateControlSource.h"
#include "unitysdk/KBKJEDAFBDO_DeviceInputType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
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

#define KBKJEDAFBDO_ABIGEDLAAFL_OFFSET UNITYSDK_OFFSET(0xB30EE60)
#define KBKJEDAFBDO_ANIJGNOBEOO_OFFSET UNITYSDK_OFFSET(0xB310040)
#define KBKJEDAFBDO_BDPIOIGBOIB_OFFSET UNITYSDK_OFFSET(0xB30E7D0)
#define KBKJEDAFBDO_BGGNKLAEDLH_OFFSET UNITYSDK_OFFSET(0xB30F410)
#define KBKJEDAFBDO_BMDDEPJGMLJ_OFFSET UNITYSDK_OFFSET(0xB3102F0)
#define KBKJEDAFBDO_BMINIJCDEMK_OFFSET UNITYSDK_OFFSET(0xB310660)
#define KBKJEDAFBDO_BPFOPMOEKFD_OFFSET UNITYSDK_OFFSET(0xB30DFE0)
#define KBKJEDAFBDO_BPMMOPIHGFM_OFFSET UNITYSDK_OFFSET(0xB310A00)
#define KBKJEDAFBDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB30B970)
#define KBKJEDAFBDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB30E920)
#define KBKJEDAFBDO_DMPBCDBLCGI_OFFSET UNITYSDK_OFFSET(0xB30E190)
#define KBKJEDAFBDO_EJANDHBMAEC_OFFSET UNITYSDK_OFFSET(0xB30F680)
#define KBKJEDAFBDO_ELOIHAMPKLB_OFFSET UNITYSDK_OFFSET(0xB30C680)
#define KBKJEDAFBDO_FELCAFOBAEF_OFFSET UNITYSDK_OFFSET(0xB310580)
#define KBKJEDAFBDO_FEPPLOIGGMK_OFFSET UNITYSDK_OFFSET(0xB310C10)
#define KBKJEDAFBDO_FHDFDGHJHEO_OFFSET UNITYSDK_OFFSET(0xB30F5A0)
#define KBKJEDAFBDO_GCOKAHNKOMG_OFFSET UNITYSDK_OFFSET(0xB3118C0)
#define KBKJEDAFBDO_GJHGFJJDOOA_OFFSET UNITYSDK_OFFSET(0xB30ECE0)
#define KBKJEDAFBDO_HBMFHNJJEIH_OFFSET UNITYSDK_OFFSET(0xB30C470)
#define KBKJEDAFBDO_HKFNLIGAAMO_OFFSET UNITYSDK_OFFSET(0xB30E270)
#define KBKJEDAFBDO_HNOMMLFAAKG_OFFSET UNITYSDK_OFFSET(0xB30FB30)
#define KBKJEDAFBDO_ICIOBBMPPDK_OFFSET UNITYSDK_OFFSET(0xB310980)
#define KBKJEDAFBDO_IEBGEOFOBAB_OFFSET UNITYSDK_OFFSET(0xB311610)
#define KBKJEDAFBDO_IOOMOCKMCHO_OFFSET UNITYSDK_OFFSET(0xB30BBE0)
#define KBKJEDAFBDO_IPJNMPEKGJJ_OFFSET UNITYSDK_OFFSET(0xB30FEC0)
#define KBKJEDAFBDO_JHMKINHPIHE_OFFSET UNITYSDK_OFFSET(0xB30E8A0)
#define KBKJEDAFBDO_JJMGHIPBGGL_OFFSET UNITYSDK_OFFSET(0xB30E810)
#define KBKJEDAFBDO_JLEKFOAPFLH_OFFSET UNITYSDK_OFFSET(0xB311B40)
#define KBKJEDAFBDO_JPBIJBIJGNA_OFFSET UNITYSDK_OFFSET(0xB30E850)
#define KBKJEDAFBDO_LAPBMFHPBNO_OFFSET UNITYSDK_OFFSET(0xB30E660)
#define KBKJEDAFBDO_MDMJLJEOJDB_OFFSET UNITYSDK_OFFSET(0xB311530)
#define KBKJEDAFBDO_MHGLFKCDDBG_OFFSET UNITYSDK_OFFSET(0xB30BF70)
#define KBKJEDAFBDO_MMNMPBNCCAI_OFFSET UNITYSDK_OFFSET(0xB30D4E0)
#define KBKJEDAFBDO_MNIDEOAGKOJ_OFFSET UNITYSDK_OFFSET(0xB30F300)
#define KBKJEDAFBDO_MPLMILCJFNN_OFFSET UNITYSDK_OFFSET(0xB3110C0)
#define KBKJEDAFBDO_NBIBEBLDDDN_OFFSET UNITYSDK_OFFSET(0xB30E1E0)
#define KBKJEDAFBDO_NFECJCBHGMA_OFFSET UNITYSDK_OFFSET(0xB310C00)
#define KBKJEDAFBDO_NNFEFLEEIBE_OFFSET UNITYSDK_OFFSET(0xB30F990)
#define KBKJEDAFBDO_OBFHFILDCBN_OFFSET UNITYSDK_OFFSET(0xB30E8E0)
#define KBKJEDAFBDO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB30EFB0)
#define KBKJEDAFBDO_PBJHDMNBEJH_OFFSET UNITYSDK_OFFSET(0xB311DE0)
#define KBKJEDAFBDO_PCDGOCDNBPN_OFFSET UNITYSDK_OFFSET(0xB30DF50)
#define KBKJEDAFBDO_PCLJBCCDOIB_OFFSET UNITYSDK_OFFSET(0xB30CE70)

inline static constexpr unsigned int KBKJEDAFBDO_TypeDefinitionIndex = 60521;

	class KBKJEDAFBDO : public ::System::Object
	{
	public:
		::KGDADKNPPOL* PJPLBAAGDBP; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::KFOMKKPPMBO*>* JCKMGLMEALK; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::System::Int32>* JNOANAAABEM; // 0x20
		::Il2CppArray<::RPG::Client::PartialFlipDeviceComponent*>* FEMMCBFCMEL; // 0x28
		::RPG::Client::EraFlipperCommonConfig* PCCAFFNJDIA; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin*>* OECINMCJHNL; // 0x38
		::RPG::Client::Promises::Promise* HLMGFOIAFFE; // 0x40
		::RPG::Client::PartialFlipDeviceComponent* HNBBCNGNNBM; // 0x48
		::System::Int64 BJPKNEBFNKG; // 0x50
		::System::Boolean HNNMIKKHFKE; // 0x58
		::System::Boolean LOOAANPOJDG; // 0x59
		::System::Boolean KIONCABKICE; // 0x5A
		::System::Boolean KAEJFBIPMNF; // 0x5B
		::System::Boolean DDGLLDJEJBD; // 0x5C
		::System::Boolean GBIGPLLOLJO; // 0x5D
		::System::Boolean BFCKNLCJHHA; // 0x5E
		::System::Byte _padding0[0x1];
		::KBKJEDAFBDO_DeviceInputType LIDMCACHCPE; // 0x60
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

		::System::ValueTuple BPMMOPIHGFM()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO_BPMMOPIHGFM_OFFSET))(this);
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
