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

#define HIODCENCLGP_AANDMFLKFHO_OFFSET UNITYSDK_OFFSET(0x181EA1D0)
#define HIODCENCLGP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x181EBBD0)
#define HIODCENCLGP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x181EBF10)
#define HIODCENCLGP_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0x181EB200)
#define HIODCENCLGP_CBEPPEGOIBB_OFFSET UNITYSDK_OFFSET(0x181EAFE0)
#define HIODCENCLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x181EC210)
#define HIODCENCLGP_DJCJFCEPIPE_OFFSET UNITYSDK_OFFSET(0x181EAC50)
#define HIODCENCLGP_DNPEKIHCPIF_OFFSET UNITYSDK_OFFSET(0x181EB2E0)
#define HIODCENCLGP_FLFDFMBPONF_OFFSET UNITYSDK_OFFSET(0x181EB990)
#define HIODCENCLGP_GDGPJLFPCOB_OFFSET UNITYSDK_OFFSET(0x181EAE00)
#define HIODCENCLGP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x181E9C10)
#define HIODCENCLGP_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x181E9C30)
#define HIODCENCLGP_HNGLOIOKEDE_OFFSET UNITYSDK_OFFSET(0x181EA350)
#define HIODCENCLGP_IFFEMKLEJMG_OFFSET UNITYSDK_OFFSET(0x181EA840)
#define HIODCENCLGP_JCLGNKPDGKJ_OFFSET UNITYSDK_OFFSET(0x181EB870)
#define HIODCENCLGP_JHKJKIIFDMM_OFFSET UNITYSDK_OFFSET(0x181EA3E0)
#define HIODCENCLGP_JLNFBNMCFHN_OFFSET UNITYSDK_OFFSET(0x181EBA80)
#define HIODCENCLGP_JPIBKBOHGDP_OFFSET UNITYSDK_OFFSET(0x181EB480)
#define HIODCENCLGP_KOBOFLFJFGO_OFFSET UNITYSDK_OFFSET(0x181EB900)
#define HIODCENCLGP_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x181EA220)
#define HIODCENCLGP_LNMJIBJNOAM_OFFSET UNITYSDK_OFFSET(0x181EA000)
#define HIODCENCLGP_NNGEJNAOKOP_OFFSET UNITYSDK_OFFSET(0x181EA290)
#define HIODCENCLGP_ONNALPLJHDA_OFFSET UNITYSDK_OFFSET(0x181EAB90)
#define HIODCENCLGP_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x181EB630)
#define HIODCENCLGP_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x181E9C20)
#define HIODCENCLGP__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x181E9C70)
#define HIODCENCLGP__ONBIND_OFFSET UNITYSDK_OFFSET(0x181E96F0)
#define HIODCENCLGP__ONTICK_OFFSET UNITYSDK_OFFSET(0x181EB580)
#define HIODCENCLGP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x181E9E70)

inline static constexpr unsigned int HIODCENCLGP_TypeDefinitionIndex = 73351;

	class HIODCENCLGP : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* BIGGNHHLLOA; // 0x60
		::UnityEngine::Animation* PMOJILOJEPE; // 0x68
		::UnityEngine::Transform* MAOGFKBEFJH; // 0x70
		::UnityEngine::UI::Image* FHPOFLPCFJC; // 0x78
		::RPG::Client::EvolveBuildLevel* OCGMHDIKBKN; // 0x80
		::UnityEngine::RectTransform* MIALKGHPBAK; // 0x88
		::UnityEngine::Transform* PNDDAOPPKHN; // 0x90
		::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x98
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xA0
		::RPG::Client::LocalizedText* MCNOINHLLGO; // 0xA8
		::UnityEngine::Transform* COBCKPCNFCN; // 0xB0
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0xB8
		::System::Single NNLBCLCPIDK; // 0xC0
		::System::UInt32 NDIFIJNBMFI; // 0xC4
		::System::Single BFKCADADNCA; // 0xC8
		::System::Boolean BFOMHHMMCBP; // 0xCC
		::System::Boolean IANFNCDIEHH; // 0xCD
		::System::Boolean HAFCOEMEHNH; // 0xCE
		::System::Boolean AKBPMCJFCFM; // 0xCF
		::System::Int32 _Index_k__BackingField; // 0xD0
		::System::Single FAFIAGJFGEF; // 0xD4
		::System::Single CLEBBBABPEI; // 0xD8
		::System::Single HEKAGAJGKEB; // 0xDC
		::System::Single IODBJGNMKND; // 0xE0
		::System::UInt32 PPIDINJNCFL; // 0xE4
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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIODCENCLGP__SETUPVIEW_OFFSET))(this);
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
