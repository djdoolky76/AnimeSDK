#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2InitialFillMode.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BFJAILBMPCJ;
class CFGLBPHCFGG;
class LAJCPEFEOPN;
class PEELDCHBLJK;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define MLFAGNKOOBJ_AEGJCIGEHED_OFFSET UNITYSDK_OFFSET(0xB9AAAF0)
#define MLFAGNKOOBJ_AHEFHHOHEKB_OFFSET UNITYSDK_OFFSET(0xB9AC510)
#define MLFAGNKOOBJ_AJDCANKOGBK_OFFSET UNITYSDK_OFFSET(0xB9AAC00)
#define MLFAGNKOOBJ_BCFACFLKMGP_OFFSET UNITYSDK_OFFSET(0xB9AC500)
#define MLFAGNKOOBJ_BDMELICKDBB_OFFSET UNITYSDK_OFFSET(0xB9AB670)
#define MLFAGNKOOBJ_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB9A9DA0)
#define MLFAGNKOOBJ_BPCLKLFNMPE_OFFSET UNITYSDK_OFFSET(0xB9AB4F0)
#define MLFAGNKOOBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9ACCA0)
#define MLFAGNKOOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB9ACAE0)
#define MLFAGNKOOBJ_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB9AA220)
#define MLFAGNKOOBJ_DFNFOLHLDAA_OFFSET UNITYSDK_OFFSET(0xB9AC560)
#define MLFAGNKOOBJ_DJLBEMCJLNF_OFFSET UNITYSDK_OFFSET(0xB9A8050)
#define MLFAGNKOOBJ_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xB9AB3F0)
#define MLFAGNKOOBJ_DOFMEOAHABE_OFFSET UNITYSDK_OFFSET(0xB9AAC50)
#define MLFAGNKOOBJ_DPHBNJNLBJI_OFFSET UNITYSDK_OFFSET(0xB9AC390)
#define MLFAGNKOOBJ_EIOJPMAFOGO_OFFSET UNITYSDK_OFFSET(0xB9AAA60)
#define MLFAGNKOOBJ_EJPICBFCJEI_OFFSET UNITYSDK_OFFSET(0xB9AA1C0)
#define MLFAGNKOOBJ_ENHLMMCPLKC_OFFSET UNITYSDK_OFFSET(0xB9AC020)
#define MLFAGNKOOBJ_FBEDHJOJDAJ_OFFSET UNITYSDK_OFFSET(0xB9AB920)
#define MLFAGNKOOBJ_FJFCFEMLBBO_OFFSET UNITYSDK_OFFSET(0xB9AA490)
#define MLFAGNKOOBJ_GBAMGAHLBND_OFFSET UNITYSDK_OFFSET(0xB9AC440)
#define MLFAGNKOOBJ_GCOOKGFOMOD_OFFSET UNITYSDK_OFFSET(0xB9AAD90)
#define MLFAGNKOOBJ_GET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0xB9AC4E0)
#define MLFAGNKOOBJ_HOMNEHGIAOD_OFFSET UNITYSDK_OFFSET(0xB9A80C0)
#define MLFAGNKOOBJ_IHENIOHHJOM_OFFSET UNITYSDK_OFFSET(0xB9AAA10)
#define MLFAGNKOOBJ_JDICEHCBCOA_OFFSET UNITYSDK_OFFSET(0xB9A7F10)
#define MLFAGNKOOBJ_JFGABEJOFBJ_OFFSET UNITYSDK_OFFSET(0xB9AC9D0)
#define MLFAGNKOOBJ_JNOGHFJAPNE_OFFSET UNITYSDK_OFFSET(0xB9AB1B0)
#define MLFAGNKOOBJ_KEBPDABDKDJ_OFFSET UNITYSDK_OFFSET(0xB9AC730)
#define MLFAGNKOOBJ_KFFCJFFDFDN_OFFSET UNITYSDK_OFFSET(0xB9A8B40)
#define MLFAGNKOOBJ_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xB9AB2F0)
#define MLFAGNKOOBJ_KJFJCIFMACB_OFFSET UNITYSDK_OFFSET(0xB9A8190)
#define MLFAGNKOOBJ_KMOPNENHLEG_OFFSET UNITYSDK_OFFSET(0xB9AC3F0)
#define MLFAGNKOOBJ_KOAJCHHCNCG_OFFSET UNITYSDK_OFFSET(0xB9A8BE0)
#define MLFAGNKOOBJ_LHMCNGLPNGM_OFFSET UNITYSDK_OFFSET(0xB9A7EE0)
#define MLFAGNKOOBJ_NHLFAAMAGKN_OFFSET UNITYSDK_OFFSET(0xB9A91E0)
#define MLFAGNKOOBJ_NIBEAIACAPG_OFFSET UNITYSDK_OFFSET(0xB9AB800)
#define MLFAGNKOOBJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB9A82E0)
#define MLFAGNKOOBJ_NPBKGINKOIH_OFFSET UNITYSDK_OFFSET(0xB9AC650)
#define MLFAGNKOOBJ_OIBMHHMAHLH_OFFSET UNITYSDK_OFFSET(0xB9A7FE0)
#define MLFAGNKOOBJ_OLAJEKFNBAG_OFFSET UNITYSDK_OFFSET(0xB9ABC80)
#define MLFAGNKOOBJ_PFCKLEMPAAD_OFFSET UNITYSDK_OFFSET(0xB9AC550)
#define MLFAGNKOOBJ_PJAILPEMLBH_OFFSET UNITYSDK_OFFSET(0xB9AB020)
#define MLFAGNKOOBJ_SET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0xB9AC4F0)

inline static constexpr unsigned int MLFAGNKOOBJ_TypeDefinitionIndex = 69282;

	class MLFAGNKOOBJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KDGEKEBGDGJ; // 0x10
		::UnityEngine::AI::AsyncNavMeshSimulator* BCBJLIJEGEN; // 0x18
		::System::Collections::Generic::List_1<::PEELDCHBLJK*>* CCECMIKFAME; // 0x20
		::Il2CppArray<::LAJCPEFEOPN*>* DCBDFKHPABE; // 0x28
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BFJAILBMPCJ*>* FDHOAEDHKCH; // 0x38
		::RPG::Client::RPGProfilerMarker* JOHBCBKBFCE; // 0x40
		::System::Collections::Generic::Dictionary_2<::LAJCPEFEOPN*, ::System::Int32>* MKHONEDAAMK; // 0x48
		::CFGLBPHCFGG* NDDFHOBFHMD; // 0x50
		::System::UInt32 IGBMLLKEGOP; // 0x58
		::System::Int32 GPFCEOIGPPC; // 0x5C
		::RPG::Client::EPedestrianV2InitialFillMode KIDBBABAJED; // 0x60
		::System::Int32 IGMIMKLPCGM; // 0x64
		::System::Int32 FNEELFKEKIN; // 0x68
		::System::Boolean HGCLMNIHPKK; // 0x6C
		::System::Boolean _AllowAutoRespawn_k__BackingField; // 0x6D
		::System::Boolean JDBLJGHEKJA; // 0x6E
		::System::Boolean IDBHEIBEGBA; // 0x6F
		::UnityEngine::Vector3 OBJEBJFLKBB; // 0x70
		::System::Int32 LFELFJODGPB; // 0x7C
		::UnityEngine::Vector3 LNOJFNHPMDC; // 0x80
		static ::System::Single* StaticGet_POANFDAENLF()
		{
			return (::System::Single*)UnitySDK::FromName("", "MLFAGNKOOBJ")->GetStaticField(0x23A0);
		}

		static ::System::Single* StaticGet_OOJMMJFMEHJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "MLFAGNKOOBJ")->GetStaticField(0x23A4);
		}

		static ::System::Int32* StaticGet_JLJALPHMPJL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MLFAGNKOOBJ")->GetStaticField(0x23A8);
		}

		// static const ::System::Object BPCJLIAMMPJ; // 0x0
		// static const ::System::Object IFKAHHLIPLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_CCTOR_OFFSET))();
		}

		::System::Boolean LHMCNGLPNGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_LHMCNGLPNGM_OFFSET))(this);
		}

		::System::Boolean JDICEHCBCOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_JDICEHCBCOA_OFFSET))(this);
		}

		::System::Int32 DJLBEMCJLNF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_DJLBEMCJLNF_OFFSET))(this);
		}

		::System::Int32 OIBMHHMAHLH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_OIBMHHMAHLH_OFFSET))(this);
		}

		::System::Void HOMNEHGIAOD(::LAJCPEFEOPN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_HOMNEHGIAOD_OFFSET))(this, a1, a2);
		}

		::System::Void KJFJCIFMACB(::LAJCPEFEOPN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_KJFJCIFMACB_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void KFFCJFFDFDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_KFFCJFFDFDN_OFFSET))(this);
		}

		::System::Void EJPICBFCJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_EJPICBFCJEI_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void AEGJCIGEHED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_AEGJCIGEHED_OFFSET))(this, a1);
		}

		::System::Void DOFMEOAHABE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_DOFMEOAHABE_OFFSET))(this, a1);
		}

		::System::Boolean AJDCANKOGBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_AJDCANKOGBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void NHLFAAMAGKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_NHLFAAMAGKN_OFFSET))(this, a1);
		}

		::System::Int32 BPCLKLFNMPE(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_BPCLKLFNMPE_OFFSET))(this, a1);
		}

		::System::Void EIOJPMAFOGO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_EIOJPMAFOGO_OFFSET))(this, a1);
		}

		::System::Void IHENIOHHJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_IHENIOHHJOM_OFFSET))(this);
		}

		::System::Void BDMELICKDBB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_BDMELICKDBB_OFFSET))(this, a1);
		}

		::System::Void NIBEAIACAPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_NIBEAIACAPG_OFFSET))(this, a1);
		}

		::System::Void FBEDHJOJDAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_FBEDHJOJDAJ_OFFSET))(this, a1);
		}

		::System::Void OLAJEKFNBAG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_OLAJEKFNBAG_OFFSET))(this, a1);
		}

		::System::Void DPHBNJNLBJI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_DPHBNJNLBJI_OFFSET))(this, a1, a2);
		}

		::System::Void ENHLMMCPLKC(::System::Collections::Generic::IList_1<::PEELDCHBLJK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::PEELDCHBLJK*>*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_ENHLMMCPLKC_OFFSET))(this, a1);
		}

		::System::Void GCOOKGFOMOD(::System::Collections::Generic::IList_1<::PEELDCHBLJK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::PEELDCHBLJK*>*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_GCOOKGFOMOD_OFFSET))(this, a1);
		}

		::System::Void JNOGHFJAPNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_JNOGHFJAPNE_OFFSET))(this);
		}

		::System::Void PJAILPEMLBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_PJAILPEMLBH_OFFSET))(this);
		}

		::System::Void FJFCFEMLBBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_FJFCFEMLBBO_OFFSET))(this);
		}

		::System::UInt32 KMOPNENHLEG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_KMOPNENHLEG_OFFSET))(this);
		}

		::System::Void KOAJCHHCNCG(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_KOAJCHHCNCG_OFFSET))(this, a1, a2);
		}

		::System::Boolean GBAMGAHLBND(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_GBAMGAHLBND_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowAutoRespawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_GET_ALLOWAUTORESPAWN_OFFSET))(this);
		}

		::System::Void set_AllowAutoRespawn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_SET_ALLOWAUTORESPAWN_OFFSET))(this, a1);
		}

		::UnityEngine::AI::AsyncNavMeshSimulator* BCFACFLKMGP()
		{
			return ((::UnityEngine::AI::AsyncNavMeshSimulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_BCFACFLKMGP_OFFSET))(this);
		}

		::CFGLBPHCFGG* AHEFHHOHEKB()
		{
			return ((::CFGLBPHCFGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_AHEFHHOHEKB_OFFSET))(this);
		}

		::System::Boolean PFCKLEMPAAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_PFCKLEMPAAD_OFFSET))(this);
		}

		::RPG::CustomRP::Quality DFNFOLHLDAA()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_DFNFOLHLDAA_OFFSET))(this);
		}

		::System::Boolean NPBKGINKOIH(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_NPBKGINKOIH_OFFSET))(this, a1);
		}

		::System::Void KEBPDABDKDJ(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_KEBPDABDKDJ_OFFSET))(this, a1);
		}

		::System::Void JFGABEJOFBJ(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + MLFAGNKOOBJ_JFGABEJOFBJ_OFFSET))(this, a1);
		}

	};
