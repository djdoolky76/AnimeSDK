#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNLHKFILMLB.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleSimulatePhase.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/NKACLCFEGIB.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AMBAFEMGGLD;
class CFDKLPEAGBO;
class CKFDNGOHNPC;
class CNHPBLGCFCA;
class CNKEOOAMELC;
class DFGDEHAHLHC;
class FANKKLAJAFJ;
class GDNNIELHCBN;
class HIDPFIAALLB;
class IGJCMJCPBNK;
class IMPNGAFPDLJ;
class KDPIBGMNPNJ;
class LIJOBNIMALC;
class LKOGAEABGPB;
class MBDOBECHOJA;
class NIAHNPEEJHJ;
class NKJDNPBFALD;
class PBOFFJNBFMI;
namespace RPG::GameCore { class MarbleCoopBossBornPosition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFGDEHAHLHC_AAMFMKBLNEG_OFFSET UNITYSDK_OFFSET(0x1CA27B80)
#define DFGDEHAHLHC_AFPCKGDIAMO_OFFSET UNITYSDK_OFFSET(0x1CA26EE0)
#define DFGDEHAHLHC_AHJHGLFDBCH_OFFSET UNITYSDK_OFFSET(0x1CA28110)
#define DFGDEHAHLHC_BBNECHAGPBD_OFFSET UNITYSDK_OFFSET(0x1CA23BB0)
#define DFGDEHAHLHC_BHGHCBFKAOE_OFFSET UNITYSDK_OFFSET(0x1CA26CA0)
#define DFGDEHAHLHC_BMGOFHDLJGE_OFFSET UNITYSDK_OFFSET(0x1CA26640)
#define DFGDEHAHLHC_BMLHKAFEJEP_OFFSET UNITYSDK_OFFSET(0x1CA28220)
#define DFGDEHAHLHC_BPKKFBHFKHA_OFFSET UNITYSDK_OFFSET(0x1CA27B20)
#define DFGDEHAHLHC_CHNBBCOMGHC_OFFSET UNITYSDK_OFFSET(0x1CA25A90)
#define DFGDEHAHLHC_CJKKCCOODGC_OFFSET UNITYSDK_OFFSET(0x1CA23CB0)
#define DFGDEHAHLHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA283F0)
#define DFGDEHAHLHC_DDDJDADIPNJ_OFFSET UNITYSDK_OFFSET(0x1CA259E0)
#define DFGDEHAHLHC_DFPCBBEPPLF_OFFSET UNITYSDK_OFFSET(0x1CA27050)
#define DFGDEHAHLHC_EFGHMGBBABF_OFFSET UNITYSDK_OFFSET(0x1CA26F40)
#define DFGDEHAHLHC_EIEPDPNBNOF_OFFSET UNITYSDK_OFFSET(0x1CA1C6E0)
#define DFGDEHAHLHC_EIOJBDCOJBC_OFFSET UNITYSDK_OFFSET(0x1CA27750)
#define DFGDEHAHLHC_EJHDOLBEEHL_OFFSET UNITYSDK_OFFSET(0x1CA26D00)
#define DFGDEHAHLHC_EMNAGOCHHBJ_OFFSET UNITYSDK_OFFSET(0x1CA25460)
#define DFGDEHAHLHC_EMPFNMADGIJ_OFFSET UNITYSDK_OFFSET(0x1CA24870)
#define DFGDEHAHLHC_FBBEDGOLGAI_OFFSET UNITYSDK_OFFSET(0x1CA28390)
#define DFGDEHAHLHC_FCFBEFJMPMJ_OFFSET UNITYSDK_OFFSET(0x1CA265F0)
#define DFGDEHAHLHC_FDEFBMNOEIO_OFFSET UNITYSDK_OFFSET(0x1CA1BF10)
#define DFGDEHAHLHC_FHNMMELJLKE_OFFSET UNITYSDK_OFFSET(0x1CA27A20)
#define DFGDEHAHLHC_FMGOGBJEEOO_OFFSET UNITYSDK_OFFSET(0x1CA25680)
#define DFGDEHAHLHC_FMOBNNDDKAB_OFFSET UNITYSDK_OFFSET(0x1CA27E90)
#define DFGDEHAHLHC_GAIFGMINGII_OFFSET UNITYSDK_OFFSET(0x1CA27150)
#define DFGDEHAHLHC_GGMDBMLJFOM_OFFSET UNITYSDK_OFFSET(0x1CA1C680)
#define DFGDEHAHLHC_GNHKCIOIHGK_OFFSET UNITYSDK_OFFSET(0x1CA27860)
#define DFGDEHAHLHC_HAIMJOLEEBK_OFFSET UNITYSDK_OFFSET(0x1CA26DE0)
#define DFGDEHAHLHC_HBDEBHOJMPA_OFFSET UNITYSDK_OFFSET(0x1CA25E70)
#define DFGDEHAHLHC_HJKJBLDOPLD_OFFSET UNITYSDK_OFFSET(0x1CA280B0)
#define DFGDEHAHLHC_HLELGHNAJEM_OFFSET UNITYSDK_OFFSET(0x1CA25AF0)
#define DFGDEHAHLHC_IDCEHLDCMKP_OFFSET UNITYSDK_OFFSET(0x1CA25D10)
#define DFGDEHAHLHC_IEBOIPBMFDF_OFFSET UNITYSDK_OFFSET(0x1CA271B0)
#define DFGDEHAHLHC_IEHFIGIHIOP_OFFSET UNITYSDK_OFFSET(0x1CA26BA0)
#define DFGDEHAHLHC_IGMKDPJBPIF_OFFSET UNITYSDK_OFFSET(0x1CA27EF0)
#define DFGDEHAHLHC_IIJAKHPONHA_OFFSET UNITYSDK_OFFSET(0x1CA270A0)
#define DFGDEHAHLHC_IMNCDIOPBCM_OFFSET UNITYSDK_OFFSET(0x1CA27FA0)
#define DFGDEHAHLHC_IOBDLIBKNID_OFFSET UNITYSDK_OFFSET(0x1CA27D80)
#define DFGDEHAHLHC_IPLHGEOBHKP_OFFSET UNITYSDK_OFFSET(0x1CA269A0)
#define DFGDEHAHLHC_JACPFMKBKBF_OFFSET UNITYSDK_OFFSET(0x1CA27800)
#define DFGDEHAHLHC_JBJCFJDGMBB_OFFSET UNITYSDK_OFFSET(0x1CA25E10)
#define DFGDEHAHLHC_JKBBHFCAECI_OFFSET UNITYSDK_OFFSET(0x1CA28000)
#define DFGDEHAHLHC_JMOONLHFJMK_OFFSET UNITYSDK_OFFSET(0x1CA1C3C0)
#define DFGDEHAHLHC_JMPFMGDLPOM_OFFSET UNITYSDK_OFFSET(0x1CA22480)
#define DFGDEHAHLHC_JOEEOMNNCNH_OFFSET UNITYSDK_OFFSET(0x1CA26750)
#define DFGDEHAHLHC_KDHOIFFGCGI_OFFSET UNITYSDK_OFFSET(0x1CA26890)
#define DFGDEHAHLHC_LCHIFBNEOHJ_OFFSET UNITYSDK_OFFSET(0x1CA27DE0)
#define DFGDEHAHLHC_LHEIFJPIPFN_OFFSET UNITYSDK_OFFSET(0x1CA23DC0)
#define DFGDEHAHLHC_LIMHIOCNEPM_OFFSET UNITYSDK_OFFSET(0x1CA26840)
#define DFGDEHAHLHC_LKJBICONNIE_OFFSET UNITYSDK_OFFSET(0x1CA27700)
#define DFGDEHAHLHC_LMJOPPNBJIK_OFFSET UNITYSDK_OFFSET(0x1CA281C0)
#define DFGDEHAHLHC_MMLKALECOMF_OFFSET UNITYSDK_OFFSET(0x1CA27C80)
#define DFGDEHAHLHC_NEHIPFCGACA_OFFSET UNITYSDK_OFFSET(0x1CA26E30)
#define DFGDEHAHLHC_NJEJLNMAEBK_OFFSET UNITYSDK_OFFSET(0x1CA28330)
#define DFGDEHAHLHC_NLKHKHKFCLP_OFFSET UNITYSDK_OFFSET(0x1CA25D60)
#define DFGDEHAHLHC_OCKECNFKAIP_OFFSET UNITYSDK_OFFSET(0x1CA27CD0)
#define DFGDEHAHLHC_OCLNKDHJANP_OFFSET UNITYSDK_OFFSET(0x1CA27940)
#define DFGDEHAHLHC_OFBJJFJGKEK_OFFSET UNITYSDK_OFFSET(0x1CA28280)
#define DFGDEHAHLHC_OKMDLOLOJKF_OFFSET UNITYSDK_OFFSET(0x1CA21500)
#define DFGDEHAHLHC_PCMFJIIJMMD_OFFSET UNITYSDK_OFFSET(0x1CA27A70)
#define DFGDEHAHLHC_PJEIJDEAPBL_OFFSET UNITYSDK_OFFSET(0x1CA26BF0)
#define DFGDEHAHLHC_PJPPFJLHALB_OFFSET UNITYSDK_OFFSET(0x1CA266F0)
#define DFGDEHAHLHC_PLEGDNFHOCC_OFFSET UNITYSDK_OFFSET(0x1CA26940)

inline static constexpr unsigned int DFGDEHAHLHC_TypeDefinitionIndex = 42596;

	class DFGDEHAHLHC : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_CTOR_OFFSET))(this);
		}

		::CFDKLPEAGBO* DDDJDADIPNJ()
		{
			return ((::CFDKLPEAGBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_DDDJDADIPNJ_OFFSET))(this);
		}

		::System::Boolean CHNBBCOMGHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_CHNBBCOMGHC_OFFSET))(this);
		}

		::System::Void EMNAGOCHHBJ(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_EMNAGOCHHBJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void HLELGHNAJEM(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_HLELGHNAJEM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void IDCEHLDCMKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IDCEHLDCMKP_OFFSET))(this);
		}

		::KDPIBGMNPNJ* NLKHKHKFCLP()
		{
			return ((::KDPIBGMNPNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_NLKHKHKFCLP_OFFSET))(this);
		}

		::System::Boolean JBJCFJDGMBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_JBJCFJDGMBB_OFFSET))(this);
		}

		::System::Void OKMDLOLOJKF(::System::Boolean a1, ::DNLHKFILMLB a2, ::DNLHKFILMLB a3, ::MBDOBECHOJA* a4, ::LKOGAEABGPB* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::NKACLCFEGIB a12, ::NKACLCFEGIB a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::AMBAFEMGGLD* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::PBOFFJNBFMI*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::AMBAFEMGGLD* a33, ::HIDPFIAALLB* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Boolean a38, ::System::Int32 a39)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DNLHKFILMLB, ::DNLHKFILMLB, ::MBDOBECHOJA*, ::LKOGAEABGPB*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::NKACLCFEGIB, ::NKACLCFEGIB, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::AMBAFEMGGLD*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::PBOFFJNBFMI*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::AMBAFEMGGLD*, ::HIDPFIAALLB*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_OKMDLOLOJKF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39);
		}

		::System::Void HBDEBHOJMPA(::System::Boolean a1, ::DNLHKFILMLB a2, ::DNLHKFILMLB a3, ::MBDOBECHOJA* a4, ::LKOGAEABGPB* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::NKACLCFEGIB a12, ::NKACLCFEGIB a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::AMBAFEMGGLD* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::PBOFFJNBFMI*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::AMBAFEMGGLD* a33, ::HIDPFIAALLB* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Boolean a38, ::System::Int32 a39)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DNLHKFILMLB, ::DNLHKFILMLB, ::MBDOBECHOJA*, ::LKOGAEABGPB*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DFGDEHAHLHC*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::NKACLCFEGIB, ::NKACLCFEGIB, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::AMBAFEMGGLD*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::PBOFFJNBFMI*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::AMBAFEMGGLD*, ::HIDPFIAALLB*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_HBDEBHOJMPA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39);
		}

		::System::Void FCFBEFJMPMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_FCFBEFJMPMJ_OFFSET))(this);
		}

		::NIAHNPEEJHJ* BMGOFHDLJGE()
		{
			return ((::NIAHNPEEJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_BMGOFHDLJGE_OFFSET))(this);
		}

		::System::Boolean PJPPFJLHALB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_PJPPFJLHALB_OFFSET))(this);
		}

		::System::Void FMGOGBJEEOO(::System::Collections::Generic::List_1<::CKFDNGOHNPC*>* a1, ::System::Collections::Generic::List_1<::LIJOBNIMALC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CKFDNGOHNPC*>*, ::System::Collections::Generic::List_1<::LIJOBNIMALC*>*))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_FMGOGBJEEOO_OFFSET))(this, a1, a2);
		}

		::System::Void JOEEOMNNCNH(::System::Collections::Generic::List_1<::CKFDNGOHNPC*>* a1, ::System::Collections::Generic::List_1<::LIJOBNIMALC*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CKFDNGOHNPC*>*, ::System::Collections::Generic::List_1<::LIJOBNIMALC*>*))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_JOEEOMNNCNH_OFFSET))(this, a1, a2);
		}

		::System::Void LIMHIOCNEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_LIMHIOCNEPM_OFFSET))(this);
		}

		::CNHPBLGCFCA* KDHOIFFGCGI()
		{
			return ((::CNHPBLGCFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_KDHOIFFGCGI_OFFSET))(this);
		}

		::System::Boolean PLEGDNFHOCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_PLEGDNFHOCC_OFFSET))(this);
		}

		::System::Void FDEFBMNOEIO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_FDEFBMNOEIO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void IPLHGEOBHKP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IPLHGEOBHKP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void IEHFIGIHIOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IEHFIGIHIOP_OFFSET))(this);
		}

		::NKJDNPBFALD* PJEIJDEAPBL()
		{
			return ((::NKJDNPBFALD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_PJEIJDEAPBL_OFFSET))(this);
		}

		::System::Boolean BHGHCBFKAOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_BHGHCBFKAOE_OFFSET))(this);
		}

		::System::Void JMOONLHFJMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_JMOONLHFJMK_OFFSET))(this, a1);
		}

		::System::Void EJHDOLBEEHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_EJHDOLBEEHL_OFFSET))(this, a1);
		}

		::System::Void HAIMJOLEEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_HAIMJOLEEBK_OFFSET))(this);
		}

		::FANKKLAJAFJ* NEHIPFCGACA()
		{
			return ((::FANKKLAJAFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_NEHIPFCGACA_OFFSET))(this);
		}

		::System::Boolean AFPCKGDIAMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_AFPCKGDIAMO_OFFSET))(this);
		}

		::System::Void CJKKCCOODGC(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_CJKKCCOODGC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EFGHMGBBABF(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_EFGHMGBBABF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DFPCBBEPPLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_DFPCBBEPPLF_OFFSET))(this);
		}

		::GDNNIELHCBN* IIJAKHPONHA()
		{
			return ((::GDNNIELHCBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IIJAKHPONHA_OFFSET))(this);
		}

		::System::Boolean GAIFGMINGII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_GAIFGMINGII_OFFSET))(this);
		}

		::System::Void LHEIFJPIPFN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28, ::System::Boolean a29)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_LHEIFJPIPFN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
		}

		::System::Void IEBOIPBMFDF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28, ::System::Boolean a29)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IEBOIPBMFDF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
		}

		::System::Void LKJBICONNIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_LKJBICONNIE_OFFSET))(this);
		}

		::IGJCMJCPBNK* EIOJBDCOJBC()
		{
			return ((::IGJCMJCPBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_EIOJBDCOJBC_OFFSET))(this);
		}

		::System::Boolean JACPFMKBKBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_JACPFMKBKBF_OFFSET))(this);
		}

		::System::Void GNHKCIOIHGK(::IMPNGAFPDLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMPNGAFPDLJ*))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_GNHKCIOIHGK_OFFSET))(this, a1);
		}

		::System::Void OCLNKDHJANP(::IMPNGAFPDLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMPNGAFPDLJ*))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_OCLNKDHJANP_OFFSET))(this, a1);
		}

		::System::Void FHNMMELJLKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_FHNMMELJLKE_OFFSET))(this);
		}

		::CNKEOOAMELC* PCMFJIIJMMD()
		{
			return ((::CNKEOOAMELC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_PCMFJIIJMMD_OFFSET))(this);
		}

		::System::Boolean BPKKFBHFKHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_BPKKFBHFKHA_OFFSET))(this);
		}

		::System::Void BBNECHAGPBD(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_BBNECHAGPBD_OFFSET))(this, a1, a2);
		}

		::System::Void AAMFMKBLNEG(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_AAMFMKBLNEG_OFFSET))(this, a1, a2);
		}

		::System::Void MMLKALECOMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_MMLKALECOMF_OFFSET))(this);
		}

		::NIAHNPEEJHJ* OCKECNFKAIP()
		{
			return ((::NIAHNPEEJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_OCKECNFKAIP_OFFSET))(this);
		}

		::System::Boolean IOBDLIBKNID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IOBDLIBKNID_OFFSET))(this);
		}

		::IGJCMJCPBNK* LCHIFBNEOHJ()
		{
			return ((::IGJCMJCPBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_LCHIFBNEOHJ_OFFSET))(this);
		}

		::System::Boolean FMOBNNDDKAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_FMOBNNDDKAB_OFFSET))(this);
		}

		::NKJDNPBFALD* EIEPDPNBNOF()
		{
			return ((::NKJDNPBFALD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_EIEPDPNBNOF_OFFSET))(this);
		}

		::System::Boolean GGMDBMLJFOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_GGMDBMLJFOM_OFFSET))(this);
		}

		::CFDKLPEAGBO* IGMKDPJBPIF()
		{
			return ((::CFDKLPEAGBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IGMKDPJBPIF_OFFSET))(this);
		}

		::System::Boolean IMNCDIOPBCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_IMNCDIOPBCM_OFFSET))(this);
		}

		::KDPIBGMNPNJ* JKBBHFCAECI()
		{
			return ((::KDPIBGMNPNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_JKBBHFCAECI_OFFSET))(this);
		}

		::System::Boolean HJKJBLDOPLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_HJKJBLDOPLD_OFFSET))(this);
		}

		::FANKKLAJAFJ* AHJHGLFDBCH()
		{
			return ((::FANKKLAJAFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_AHJHGLFDBCH_OFFSET))(this);
		}

		::System::Boolean LMJOPPNBJIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_LMJOPPNBJIK_OFFSET))(this);
		}

		::GDNNIELHCBN* JMPFMGDLPOM()
		{
			return ((::GDNNIELHCBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_JMPFMGDLPOM_OFFSET))(this);
		}

		::System::Boolean BMLHKAFEJEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_BMLHKAFEJEP_OFFSET))(this);
		}

		::CNKEOOAMELC* OFBJJFJGKEK()
		{
			return ((::CNKEOOAMELC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_OFBJJFJGKEK_OFFSET))(this);
		}

		::System::Boolean NJEJLNMAEBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_NJEJLNMAEBK_OFFSET))(this);
		}

		::CNHPBLGCFCA* EMPFNMADGIJ()
		{
			return ((::CNHPBLGCFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_EMPFNMADGIJ_OFFSET))(this);
		}

		::System::Boolean FBBEDGOLGAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGDEHAHLHC_FBBEDGOLGAI_OFFSET))(this);
		}

	};
