#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class EvolveBuildLevel; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelInfiniteWaveProgressChange; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define HIODCENCLGP_AANDMFLKFHO_OFFSET UNITYSDK_OFFSET(0x15CED5F0)
#define HIODCENCLGP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CEF080)
#define HIODCENCLGP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15CEF3B0)
#define HIODCENCLGP_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0x15CEE6A0)
#define HIODCENCLGP_CBEPPEGOIBB_OFFSET UNITYSDK_OFFSET(0x15CEE3F0)
#define HIODCENCLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CEF6B0)
#define HIODCENCLGP_DJCJFCEPIPE_OFFSET UNITYSDK_OFFSET(0x15CEE070)
#define HIODCENCLGP_DNPEKIHCPIF_OFFSET UNITYSDK_OFFSET(0x15CEE780)
#define HIODCENCLGP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15CED290)
#define HIODCENCLGP_FLFDFMBPONF_OFFSET UNITYSDK_OFFSET(0x15CEEE40)
#define HIODCENCLGP_GDGPJLFPCOB_OFFSET UNITYSDK_OFFSET(0x15CEE210)
#define HIODCENCLGP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15CED040)
#define HIODCENCLGP_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15CED060)
#define HIODCENCLGP_HNGLOIOKEDE_OFFSET UNITYSDK_OFFSET(0x15CED770)
#define HIODCENCLGP_IFFEMKLEJMG_OFFSET UNITYSDK_OFFSET(0x15CEDC60)
#define HIODCENCLGP_JCLGNKPDGKJ_OFFSET UNITYSDK_OFFSET(0x15CEED20)
#define HIODCENCLGP_JHKJKIIFDMM_OFFSET UNITYSDK_OFFSET(0x15CED800)
#define HIODCENCLGP_JLNFBNMCFHN_OFFSET UNITYSDK_OFFSET(0x15CEEF30)
#define HIODCENCLGP_JPIBKBOHGDP_OFFSET UNITYSDK_OFFSET(0x15CEE920)
#define HIODCENCLGP_KOBOFLFJFGO_OFFSET UNITYSDK_OFFSET(0x15CEEDB0)
#define HIODCENCLGP_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x15CED640)
#define HIODCENCLGP_LNMJIBJNOAM_OFFSET UNITYSDK_OFFSET(0x15CED420)
#define HIODCENCLGP_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15CED0A0)
#define HIODCENCLGP_NNGEJNAOKOP_OFFSET UNITYSDK_OFFSET(0x15CED6B0)
#define HIODCENCLGP_ONNALPLJHDA_OFFSET UNITYSDK_OFFSET(0x15CEDFB0)
#define HIODCENCLGP_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x15CEEAE0)
#define HIODCENCLGP_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15CED050)
#define HIODCENCLGP__ONBIND_OFFSET UNITYSDK_OFFSET(0x15CECD50)
#define HIODCENCLGP__ONTICK_OFFSET UNITYSDK_OFFSET(0x15CEEA30)

inline static constexpr unsigned int HIODCENCLGP_TypeDefinitionIndex = 71374;

	class HIODCENCLGP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* MAOGFKBEFJH; // 0x60
		::RPG::Client::EvolveBuildLevel* OCGMHDIKBKN; // 0x68
		::UnityEngine::RectTransform* MIALKGHPBAK; // 0x70
		::UnityEngine::Animation* PMOJILOJEPE; // 0x78
		::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x80
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x88
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x90
		::UnityEngine::UI::Image* FHPOFLPCFJC; // 0x98
		::RPG::Client::LocalizedText* MCNOINHLLGO; // 0xA0
		::UnityEngine::Transform* COBCKPCNFCN; // 0xA8
		::RPG::Client::LocalizedText* BIGGNHHLLOA; // 0xB0
		::UnityEngine::Transform* PNDDAOPPKHN; // 0xB8
		::System::Int32 _Index_k__BackingField; // 0xC0
		::System::Single NNLBCLCPIDK; // 0xC4
		::System::Single HEKAGAJGKEB; // 0xC8
		::System::Single BFKCADADNCA; // 0xCC
		::System::Single IODBJGNMKND; // 0xD0
		::System::UInt32 NDIFIJNBMFI; // 0xD4
		::System::Single CLEBBBABPEI; // 0xD8
		::System::UInt32 PPIDINJNCFL; // 0xDC
		::System::Single FAFIAGJFGEF; // 0xE0
		::System::Boolean IANFNCDIEHH; // 0xE4
		::System::Boolean HAFCOEMEHNH; // 0xE5
		::System::Boolean BFOMHHMMCBP; // 0xE6
		::System::Boolean AKBPMCJFCFM; // 0xE7
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object GODJBGOCFOC; // 0x0
		// static const ::System::Object KOJDBNHGKJI; // 0x0
		// static const ::System::String* GKCHCEFIGCH; // 0x0
		// static const ::System::String* ILPHFEKBDGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIODCENCLGP_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NNGEJNAOKOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_NNGEJNAOKOP_OFFSET))(this);
		}

		::System::Void JHKJKIIFDMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_JHKJKIIFDMM_OFFSET))(this);
		}

		::System::Void AANDMFLKFHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_AANDMFLKFHO_OFFSET))(this);
		}

		::System::Void GDGPJLFPCOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_GDGPJLFPCOB_OFFSET))(this);
		}

		::System::Void DJCJFCEPIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_DJCJFCEPIPE_OFFSET))(this);
		}

		::System::Void CBEPPEGOIBB(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + HIODCENCLGP_CBEPPEGOIBB_OFFSET))(this, a1);
		}

		::System::Void BLBNMMMDEGO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIODCENCLGP_BLBNMMMDEGO_OFFSET))(this, a1);
		}

		::System::Void LEEEAMMHPFM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIODCENCLGP_LEEEAMMHPFM_OFFSET))(this, a1);
		}

		::System::Void DNPEKIHCPIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIODCENCLGP_DNPEKIHCPIF_OFFSET))(this, a1);
		}

		::System::Void JPIBKBOHGDP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIODCENCLGP_JPIBKBOHGDP_OFFSET))(this, a1);
		}

		::System::Void IFFEMKLEJMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_IFFEMKLEJMG_OFFSET))(this);
		}

		::System::Void ONNALPLJHDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_ONNALPLJHDA_OFFSET))(this);
		}

		::System::Void LNMJIBJNOAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_LNMJIBJNOAM_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIODCENCLGP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JCLGNKPDGKJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIODCENCLGP_JCLGNKPDGKJ_OFFSET))(this, a1);
		}

		::System::Void OPCDEPOJOAL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIODCENCLGP_OPCDEPOJOAL_OFFSET))(this, a1);
		}

		::System::Void HNGLOIOKEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_HNGLOIOKEDE_OFFSET))(this);
		}

		::System::Void KOBOFLFJFGO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIODCENCLGP_KOBOFLFJFGO_OFFSET))(this, a1);
		}

		::System::Void FLFDFMBPONF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIODCENCLGP_FLFDFMBPONF_OFFSET))(this, a1);
		}

		::System::Void JLNFBNMCFHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIODCENCLGP_JLNFBNMCFHN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
