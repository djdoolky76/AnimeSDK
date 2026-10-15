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

#define HIODCENCLGP_AANDMFLKFHO_OFFSET UNITYSDK_OFFSET(0x15CFA050)
#define HIODCENCLGP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CFBAE0)
#define HIODCENCLGP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15CFBE20)
#define HIODCENCLGP_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0x15CFB110)
#define HIODCENCLGP_CBEPPEGOIBB_OFFSET UNITYSDK_OFFSET(0x15CFAE60)
#define HIODCENCLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CFC120)
#define HIODCENCLGP_DJCJFCEPIPE_OFFSET UNITYSDK_OFFSET(0x15CFAAD0)
#define HIODCENCLGP_DNPEKIHCPIF_OFFSET UNITYSDK_OFFSET(0x15CFB1F0)
#define HIODCENCLGP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15CF9CF0)
#define HIODCENCLGP_FLFDFMBPONF_OFFSET UNITYSDK_OFFSET(0x15CFB8A0)
#define HIODCENCLGP_GDGPJLFPCOB_OFFSET UNITYSDK_OFFSET(0x15CFAC80)
#define HIODCENCLGP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15CF9AA0)
#define HIODCENCLGP_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15CF9AC0)
#define HIODCENCLGP_HNGLOIOKEDE_OFFSET UNITYSDK_OFFSET(0x15CFA1E0)
#define HIODCENCLGP_IFFEMKLEJMG_OFFSET UNITYSDK_OFFSET(0x15CFA6D0)
#define HIODCENCLGP_JCLGNKPDGKJ_OFFSET UNITYSDK_OFFSET(0x15CFB780)
#define HIODCENCLGP_JHKJKIIFDMM_OFFSET UNITYSDK_OFFSET(0x15CFA270)
#define HIODCENCLGP_JLNFBNMCFHN_OFFSET UNITYSDK_OFFSET(0x15CFB990)
#define HIODCENCLGP_JPIBKBOHGDP_OFFSET UNITYSDK_OFFSET(0x15CFB390)
#define HIODCENCLGP_KOBOFLFJFGO_OFFSET UNITYSDK_OFFSET(0x15CFB810)
#define HIODCENCLGP_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x15CFA0A0)
#define HIODCENCLGP_LNMJIBJNOAM_OFFSET UNITYSDK_OFFSET(0x15CF9E80)
#define HIODCENCLGP_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15CF9B00)
#define HIODCENCLGP_NNGEJNAOKOP_OFFSET UNITYSDK_OFFSET(0x15CFA110)
#define HIODCENCLGP_ONNALPLJHDA_OFFSET UNITYSDK_OFFSET(0x15CFAA10)
#define HIODCENCLGP_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x15CFB540)
#define HIODCENCLGP_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15CF9AB0)
#define HIODCENCLGP__ONBIND_OFFSET UNITYSDK_OFFSET(0x15CF97B0)
#define HIODCENCLGP__ONTICK_OFFSET UNITYSDK_OFFSET(0x15CFB490)

	class HIODCENCLGP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* MAOGFKBEFJH; // 0x60
		::UnityEngine::UI::Image* FHPOFLPCFJC; // 0x68
		::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x70
		::RPG::Client::LocalizedText* MCNOINHLLGO; // 0x78
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x80
		::UnityEngine::Transform* COBCKPCNFCN; // 0x88
		::UnityEngine::Transform* PNDDAOPPKHN; // 0x90
		::RPG::Client::LocalizedText* BIGGNHHLLOA; // 0x98
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xA0
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA8
		::UnityEngine::RectTransform* MIALKGHPBAK; // 0xB0
		::RPG::Client::EvolveBuildLevel* OCGMHDIKBKN; // 0xB8
		::System::Boolean HAFCOEMEHNH; // 0xC0
		::System::Boolean AKBPMCJFCFM; // 0xC1
		::System::Boolean BFOMHHMMCBP; // 0xC2
		::System::Boolean IANFNCDIEHH; // 0xC3
		::System::UInt32 PPIDINJNCFL; // 0xC4
		::System::Int32 _Index_k__BackingField; // 0xC8
		::System::Single NNLBCLCPIDK; // 0xCC
		::System::UInt32 NDIFIJNBMFI; // 0xD0
		::System::Single FAFIAGJFGEF; // 0xD4
		::System::Single IODBJGNMKND; // 0xD8
		::System::Single BFKCADADNCA; // 0xDC
		::System::Single CLEBBBABPEI; // 0xE0
		::System::Single HEKAGAJGKEB; // 0xE4
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
