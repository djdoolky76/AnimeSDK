#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPMONNHABLI.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/RPG/Client/AudioManager_UIListenerSnapshot.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxStreamingAnchorMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DPJBOGJEJEF;
class IOBGKAHCDMF;
class JAIGIPGEHBL;
class JPFJJLEPGBC;
class KPDAPMBDMBJ;
class KPMAOLIGPAP;
class LCPEBPNFHBG;
class NPPNOGNDFMJ;
class NPPNOGNDFMJ_COGGHCMDPIP;
class NPPNOGNDFMJ_LMABNIFENGO;
class OAOJJOCIOOA;
namespace RPG::Client { class AudioManager; }
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameSandboxAudioConfig; }
namespace RPG::GameCore { class LittleGameSandboxEffectConfig; }
namespace RPG::GameCore { class LittleGameSandboxGameplayConfig; }
namespace RPG::GameCore { class LittleGameSandboxGroupIsolationConfig; }
namespace RPG::GameCore { class LittleGameSandboxPerformanceConfig; }
namespace RPG::GameCore { class LittleGameSandboxPlayerConfig; }
namespace RPG::GameCore { class LittleGameSandboxRenderingConfig; }
namespace RPG::GameCore { class LittleGameSandboxResourceConfig; }
namespace RPG::GameCore { class LittleGameSandboxWorldConfig; }
namespace RPG::GameCore { class LittleGameSandboxWorldEntityConfig; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NPPNOGNDFMJ_AFHPFNMBHOM_OFFSET UNITYSDK_OFFSET(0x19D14410)
#define NPPNOGNDFMJ_ALPJKNDKGEB_OFFSET UNITYSDK_OFFSET(0x19D13120)
#define NPPNOGNDFMJ_AOFENJEOCME_OFFSET UNITYSDK_OFFSET(0x19D15EA0)
#define NPPNOGNDFMJ_CBAKLFPNOHB_OFFSET UNITYSDK_OFFSET(0x19D193D0)
#define NPPNOGNDFMJ_CKPEHPALJJB_OFFSET UNITYSDK_OFFSET(0x19D123A0)
#define NPPNOGNDFMJ_CPGDNLELOJJ_OFFSET UNITYSDK_OFFSET(0x19D11DC0)
#define NPPNOGNDFMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19D13790)
#define NPPNOGNDFMJ_DHMKENPKKBC_OFFSET UNITYSDK_OFFSET(0x19D13270)
#define NPPNOGNDFMJ_DIEAFFHFPJI_OFFSET UNITYSDK_OFFSET(0x19D16550)
#define NPPNOGNDFMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D16990)
#define NPPNOGNDFMJ_EHPKFCGJPOJ_OFFSET UNITYSDK_OFFSET(0x19D15670)
#define NPPNOGNDFMJ_EICOOAANFKI_OFFSET UNITYSDK_OFFSET(0x19D0FAC0)
#define NPPNOGNDFMJ_EJJALEHCPDI_OFFSET UNITYSDK_OFFSET(0x19D0F7B0)
#define NPPNOGNDFMJ_ELEAIGGFKIL_OFFSET UNITYSDK_OFFSET(0x19D12540)
#define NPPNOGNDFMJ_FDLLBCALNKE_OFFSET UNITYSDK_OFFSET(0x19D133F0)
#define NPPNOGNDFMJ_FJCKNCJLPHM_OFFSET UNITYSDK_OFFSET(0x19D15BC0)
#define NPPNOGNDFMJ_GDNDHBBHEII_OFFSET UNITYSDK_OFFSET(0x19D12CA0)
#define NPPNOGNDFMJ_GGANICOPAIK_OFFSET UNITYSDK_OFFSET(0x19D12A70)
#define NPPNOGNDFMJ_GOMMAKEHBDK_OFFSET UNITYSDK_OFFSET(0x19D113F0)
#define NPPNOGNDFMJ_HJBGJMINPGB_OFFSET UNITYSDK_OFFSET(0x19D14740)
#define NPPNOGNDFMJ_HOEHINOKMFB_OFFSET UNITYSDK_OFFSET(0x19D0FE80)
#define NPPNOGNDFMJ_IGAFHIFMEOH_OFFSET UNITYSDK_OFFSET(0x19D0FD90)
#define NPPNOGNDFMJ_IJJAEPMBGPM_OFFSET UNITYSDK_OFFSET(0x19D18680)
#define NPPNOGNDFMJ_IJPAMIEPLEI_OFFSET UNITYSDK_OFFSET(0x19D0FC20)
#define NPPNOGNDFMJ_ILEGMNGBNJJ_OFFSET UNITYSDK_OFFSET(0x19D13FF0)
#define NPPNOGNDFMJ_INDINOLIMDO_OFFSET UNITYSDK_OFFSET(0x19D15770)
#define NPPNOGNDFMJ_IPHLMBHLLJC_OFFSET UNITYSDK_OFFSET(0x19D10D30)
#define NPPNOGNDFMJ_IPPFOGPGADO_OFFSET UNITYSDK_OFFSET(0x19D116A0)
#define NPPNOGNDFMJ_JBGIHLIOGJH_OFFSET UNITYSDK_OFFSET(0x19D12690)
#define NPPNOGNDFMJ_JEHADNIJEIG_OFFSET UNITYSDK_OFFSET(0x19D11290)
#define NPPNOGNDFMJ_JENFKAHIACO_OFFSET UNITYSDK_OFFSET(0x19D18A10)
#define NPPNOGNDFMJ_JHAIDNJAOIE_OFFSET UNITYSDK_OFFSET(0x19D12230)
#define NPPNOGNDFMJ_JICOHBLKGKM_OFFSET UNITYSDK_OFFSET(0x19D16080)
#define NPPNOGNDFMJ_JKHAJFOPIEC_OFFSET UNITYSDK_OFFSET(0x19D147A0)
#define NPPNOGNDFMJ_JNGFGIDBNDK_OFFSET UNITYSDK_OFFSET(0x19D0FDE0)
#define NPPNOGNDFMJ_JOBLDJBNEBI_OFFSET UNITYSDK_OFFSET(0x19D154F0)
#define NPPNOGNDFMJ_KGPHHOHPDBA_OFFSET UNITYSDK_OFFSET(0x19D16CE0)
#define NPPNOGNDFMJ_KPFKMBLPJFH_OFFSET UNITYSDK_OFFSET(0x19D19500)
#define NPPNOGNDFMJ_LPCCCMMIBFA_OFFSET UNITYSDK_OFFSET(0x19D12DF0)
#define NPPNOGNDFMJ_MDIDHGHKNAA_OFFSET UNITYSDK_OFFSET(0x19D10750)
#define NPPNOGNDFMJ_MOFPEJOPMPL_OFFSET UNITYSDK_OFFSET(0x19D11E90)
#define NPPNOGNDFMJ_MOGBHCCENKL_OFFSET UNITYSDK_OFFSET(0x19D166A0)
#define NPPNOGNDFMJ_NHPEMPJIJDN_OFFSET UNITYSDK_OFFSET(0x19D163F0)
#define NPPNOGNDFMJ_NOJKPGBJMHA_OFFSET UNITYSDK_OFFSET(0x19D127B0)
#define NPPNOGNDFMJ_OAPGEMMCMIO_OFFSET UNITYSDK_OFFSET(0x19D12F40)
#define NPPNOGNDFMJ_OPAAEOLDMND_OFFSET UNITYSDK_OFFSET(0x19D13630)
#define NPPNOGNDFMJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19D165E0)
#define NPPNOGNDFMJ_PLKGLHECOBH_OFFSET UNITYSDK_OFFSET(0x19D12920)
#define NPPNOGNDFMJ_POGALCFDIKK_OFFSET UNITYSDK_OFFSET(0x19D11FF0)
#define NPPNOGNDFMJ___ACQUIREIDLESHOWSUPPRESSION_B__79_0_OFFSET UNITYSDK_OFFSET(0x19D198E0)
#define NPPNOGNDFMJ___ACQUIREIDLESHOWSUPPRESSION_B__79_1_OFFSET UNITYSDK_OFFSET(0x19D198F0)
#define NPPNOGNDFMJ___APPLYGAMEPLAYPLATFORMOPERATIONS_B__92_0_OFFSET UNITYSDK_OFFSET(0x19D19900)
#define NPPNOGNDFMJ___APPLYGAMEPLAYPLATFORMOPERATIONS_B__92_1_OFFSET UNITYSDK_OFFSET(0x19D19910)

inline static constexpr unsigned int NPPNOGNDFMJ_TypeDefinitionIndex = 61862;

	class NPPNOGNDFMJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* MEOALPNDBPM; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* HIAJBCCNCDJ; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* FJONFEIOEDK; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* JGNNDIFKOIK; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* PLLLNCCLCEM; // 0x30
		::LPMONNHABLI LIGLNAOOGBJ; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::System::Int32>* CDHIGOHPPFG; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* LLAGPKEADFL; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* EKILDLPAAAP; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>* LFBDELFFJKB; // 0x90
		::KPDAPMBDMBJ* ACGOBMEGMDM; // 0x98
		::IOBGKAHCDMF* OEOPPBNDEAD; // 0xA0
		::System::String* BDENPOEIFML; // 0xA8
		::System::Collections::Generic::List_1<::System::Object*>* DELHEDDFLHK; // 0xB0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* JALCGBNALDJ; // 0xB8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* FCNOOBFCJMC; // 0xC0
		::LCPEBPNFHBG* OHOMPLADCGE; // 0xC8
		::System::Collections::Generic::List_1<::System::Object*>* NGJELMBCKHC; // 0xD0
		::OAOJJOCIOOA* BBKBKHFPIBM; // 0xD8
		::RPG::Client::AudioManager_UIListenerSnapshot HPBAKCFEDGJ; // 0xE0
		::System::Int32 BCIOANHNLBF; // 0x100
		::System::Int32 MCLAFEEDBKB; // 0x104
		::System::Int32 PAOLAOMIMEB; // 0x108
		::System::Int32 FMKNENHACJF; // 0x10C
		::System::Int32 AOAOFEINCED; // 0x110
		::System::Int32 NFJCAIENNDP; // 0x114
		::System::Int32 JBEPFPONAHN; // 0x118
		::System::Int32 DPFPKOEKEBN; // 0x11C
		::System::Boolean PECJOPJJGHJ; // 0x120
		::System::Boolean LDBEBEFADPB; // 0x121
		::System::Boolean IOIEPJHHCEO; // 0x122
		::System::Boolean LEOLBACHHML; // 0x123
		::System::Int32 NGPLBIIFNCC; // 0x124
		::System::Int32 CNKCBBLGCBD; // 0x128
		::System::Boolean MGHKMJPANIB; // 0x12C
		::System::Boolean GFAMGLFOMGI; // 0x12D
		::System::Byte _padding0[0x2];
		::System::Int32 IMPPEOCPCJG; // 0x130
		static ::NPPNOGNDFMJ** StaticGet_IPGKOOHKCEG()
		{
			return (::NPPNOGNDFMJ**)UnitySDK::FromName("", "NPPNOGNDFMJ")->GetStaticField(0x60D20);
		}

		// static const ::System::Object LGDHLNDDPDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_CTOR_OFFSET))(this);
		}

		::System::Void EJJALEHCPDI(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxWorldEntityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxWorldEntityConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_EJJALEHCPDI_OFFSET))(this, a1, a2);
		}

		::System::Void EICOOAANFKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_EICOOAANFKI_OFFSET))(this);
		}

		::System::Void IJPAMIEPLEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_IJPAMIEPLEI_OFFSET))(this);
		}

		::System::Void IGAFHIFMEOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_IGAFHIFMEOH_OFFSET))(this, a1);
		}

		::System::Boolean JNGFGIDBNDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JNGFGIDBNDK_OFFSET))(this);
		}

		::System::Void HOEHINOKMFB(::NPPNOGNDFMJ_COGGHCMDPIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPNOGNDFMJ_COGGHCMDPIP*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_HOEHINOKMFB_OFFSET))(this, a1);
		}

		::System::Void IPHLMBHLLJC(::KPMAOLIGPAP* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::LittleGameSandboxWorldEntityConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LittleGameSandboxWorldEntityConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_IPHLMBHLLJC_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void GOMMAKEHBDK(::NPPNOGNDFMJ_COGGHCMDPIP* a1)
		{
			return ((::System::Void(*)(::NPPNOGNDFMJ_COGGHCMDPIP*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_GOMMAKEHBDK_OFFSET))(a1);
		}

		::System::Void IPPFOGPGADO(::NPPNOGNDFMJ_LMABNIFENGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPNOGNDFMJ_LMABNIFENGO*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_IPPFOGPGADO_OFFSET))(this, a1);
		}

		static ::System::Void CPGDNLELOJJ(::NPPNOGNDFMJ_LMABNIFENGO* a1)
		{
			return ((::System::Void(*)(::NPPNOGNDFMJ_LMABNIFENGO*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_CPGDNLELOJJ_OFFSET))(a1);
		}

		static ::System::Boolean MDIDHGHKNAA(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapDef* a2, ::RPG::GameCore::HoyoTagContainer* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapDef*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_MDIDHGHKNAA_OFFSET))(a1, a2, a3);
		}

		::System::Void MOFPEJOPMPL(::KPMAOLIGPAP* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_MOFPEJOPMPL_OFFSET))(this, a1, a2);
		}

		::System::Void POGALCFDIKK(::KPMAOLIGPAP* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_POGALCFDIKK_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::LittleGameSandboxAudioConfig* JHAIDNJAOIE(::RPG::GameCore::LittleGameSandboxAudioConfig* a1, ::JAIGIPGEHBL* a2)
		{
			return ((::RPG::GameCore::LittleGameSandboxAudioConfig*(*)(::RPG::GameCore::LittleGameSandboxAudioConfig*, ::JAIGIPGEHBL*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JHAIDNJAOIE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* CKPEHPALJJB(::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* a1, ::JAIGIPGEHBL* a2)
		{
			return ((::RPG::GameCore::LittleGameSandboxGroupIsolationConfig*(*)(::RPG::GameCore::LittleGameSandboxGroupIsolationConfig*, ::JAIGIPGEHBL*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_CKPEHPALJJB_OFFSET))(a1, a2);
		}

		static ::System::Void ELEAIGGFKIL(::KPMAOLIGPAP* a1, ::System::Func_1<::System::IDisposable*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::KPMAOLIGPAP*, ::System::Func_1<::System::IDisposable*>*, ::System::String*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_ELEAIGGFKIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JBGIHLIOGJH(::KPMAOLIGPAP* a1, ::DPJBOGJEJEF* a2, ::System::Func_2<::DPJBOGJEJEF*, ::System::IDisposable*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::KPMAOLIGPAP*, ::DPJBOGJEJEF*, ::System::Func_2<::DPJBOGJEJEF*, ::System::IDisposable*>*, ::System::String*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JBGIHLIOGJH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JEHADNIJEIG(::KPMAOLIGPAP* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::System::Void(*)(::KPMAOLIGPAP*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JEHADNIJEIG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void NOJKPGBJMHA(::KPMAOLIGPAP* a1, ::System::Func_1<::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::KPMAOLIGPAP*, ::System::Func_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_NOJKPGBJMHA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void PLKGLHECOBH(::KPMAOLIGPAP* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_PLKGLHECOBH_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean GGANICOPAIK(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxStreamingAnchorMode a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxStreamingAnchorMode, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_GGANICOPAIK_OFFSET))(a1, a2, a3);
		}

		::System::Void GDNDHBBHEII(::KPMAOLIGPAP* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::System::String*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_GDNDHBBHEII_OFFSET))(this, a1, a2);
		}

		::System::Void LPCCCMMIBFA(::KPMAOLIGPAP* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::System::String*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_LPCCCMMIBFA_OFFSET))(this, a1, a2);
		}

		::System::Void OAPGEMMCMIO(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxAudioConfig* a2, ::RPG::Client::AudioManager* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxAudioConfig*, ::RPG::Client::AudioManager*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_OAPGEMMCMIO_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void ALPJKNDKGEB(::RPG::Client::AudioManager* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::AudioManager*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_ALPJKNDKGEB_OFFSET))(a1, a2);
		}

		::System::Void DHMKENPKKBC(::KPMAOLIGPAP* a1, ::RPG::Client::AudioListenerMode a2, ::UnityEngine::Transform* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_DHMKENPKKBC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FDLLBCALNKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_FDLLBCALNKE_OFFSET))(this);
		}

		::System::Void OPAAEOLDMND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_OPAAEOLDMND_OFFSET))(this);
		}

		::System::Void ILEGMNGBNJJ(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxScope a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxScope))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_ILEGMNGBNJJ_OFFSET))(this, a1, a2);
		}

		::System::IDisposable* DIEAFFHFPJI()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_DIEAFFHFPJI_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void AFHPFNMBHOM(::KPMAOLIGPAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_AFHPFNMBHOM_OFFSET))(this, a1);
		}

		::System::Void HJBGJMINPGB(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxResourceConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxResourceConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_HJBGJMINPGB_OFFSET))(this, a1, a2);
		}

		::System::Void NHPEMPJIJDN(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxEffectConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxEffectConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_NHPEMPJIJDN_OFFSET))(this, a1, a2);
		}

		::System::Void IJJAEPMBGPM(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxResourceConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxResourceConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_IJJAEPMBGPM_OFFSET))(this, a1, a2);
		}

		::System::Void JICOHBLKGKM(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxScope a2, ::RPG::GameCore::LittleGameSandboxResourceConfig* a3, ::JAIGIPGEHBL* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxScope, ::RPG::GameCore::LittleGameSandboxResourceConfig*, ::JAIGIPGEHBL*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JICOHBLKGKM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JKHAJFOPIEC(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxWorldConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxWorldConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JKHAJFOPIEC_OFFSET))(this, a1, a2);
		}

		::System::Void JOBLDJBNEBI(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxPlayerConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxPlayerConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JOBLDJBNEBI_OFFSET))(this, a1, a2);
		}

		::System::Void INDINOLIMDO(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxRenderingConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxRenderingConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_INDINOLIMDO_OFFSET))(this, a1, a2);
		}

		::System::Void FJCKNCJLPHM(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxAudioConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxAudioConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_FJCKNCJLPHM_OFFSET))(this, a1, a2);
		}

		::System::Void JENFKAHIACO(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxPerformanceConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxPerformanceConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_JENFKAHIACO_OFFSET))(this, a1, a2);
		}

		::System::Void MOGBHCCENKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_MOGBHCCENKL_OFFSET))(this);
		}

		::System::Void KGPHHOHPDBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_KGPHHOHPDBA_OFFSET))(this);
		}

		::System::Void EHPKFCGJPOJ(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxGameplayConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxGameplayConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_EHPKFCGJPOJ_OFFSET))(this, a1, a2);
		}

		::System::Void KPFKMBLPJFH(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxGameplayConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxGameplayConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_KPFKMBLPJFH_OFFSET))(this, a1, a2);
		}

		::System::Void AOFENJEOCME(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxPerformanceConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxPerformanceConfig*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_AOFENJEOCME_OFFSET))(this, a1, a2);
		}

		::System::Void CBAKLFPNOHB(::KPMAOLIGPAP* a1, ::RPG::Client::LockSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAOLIGPAP*, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_CBAKLFPNOHB_OFFSET))(this, a1, a2);
		}

		::System::Int32 __AcquireIdleShowSuppression_b__79_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___ACQUIREIDLESHOWSUPPRESSION_B__79_0_OFFSET))(this);
		}

		::System::Void __AcquireIdleShowSuppression_b__79_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___ACQUIREIDLESHOWSUPPRESSION_B__79_1_OFFSET))(this, a1);
		}

		::System::Int32 __ApplyGameplayPlatformOperations_b__92_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___APPLYGAMEPLAYPLATFORMOPERATIONS_B__92_0_OFFSET))(this);
		}

		::System::Void __ApplyGameplayPlatformOperations_b__92_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___APPLYGAMEPLAYPLATFORMOPERATIONS_B__92_1_OFFSET))(this, a1);
		}

	};
