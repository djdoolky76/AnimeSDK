#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObjectPlayType.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace MoleMole { class ConfigVideoAudioMapping; }
namespace MoleMole { class ConfigVideoAudioMapping_VideoAudioEntry; }
namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DMADBEDNGBI_AHGFEGGAEAL_OFFSET UNITYSDK_OFFSET(0x7FC2E90)
#define DMADBEDNGBI_BNBPIGDPDCM_OFFSET UNITYSDK_OFFSET(0x7FC2E80)
#define DMADBEDNGBI_DGGGLECGAHI_OFFSET UNITYSDK_OFFSET(0x7FC2AE0)
#define DMADBEDNGBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7FC2820)
#define DMADBEDNGBI_GEFLCJDGJKE_OFFSET UNITYSDK_OFFSET(0x7FC2FC0)
#define DMADBEDNGBI_INICFKJPIKA_1_OFFSET UNITYSDK_OFFSET(0x7FC2BC0)
#define DMADBEDNGBI_INICFKJPIKA_2_OFFSET UNITYSDK_OFFSET(0x7FC2E30)
#define DMADBEDNGBI_INICFKJPIKA_3_OFFSET UNITYSDK_OFFSET(0x7FC2C60)
#define DMADBEDNGBI_INICFKJPIKA_OFFSET UNITYSDK_OFFSET(0x7FC2B70)
#define DMADBEDNGBI_LCHDDCNGAKE_OFFSET UNITYSDK_OFFSET(0x7FC2CC0)
#define DMADBEDNGBI_LKOHKGMFBAD_OFFSET UNITYSDK_OFFSET(0x7FC2AD0)
#define DMADBEDNGBI_MEBINOODLHO_OFFSET UNITYSDK_OFFSET(0x7FC2E70)
#define DMADBEDNGBI_NEOJMFBBBMG_OFFSET UNITYSDK_OFFSET(0x7FC2FB0)
#define DMADBEDNGBI_OKGIJNJEDFF_OFFSET UNITYSDK_OFFSET(0x7FC3010)
#define DMADBEDNGBI_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x7FC3100)
#define DMADBEDNGBI_ONCREATE_OFFSET UNITYSDK_OFFSET(0x7FC2940)
#define DMADBEDNGBI_UPDATE_OFFSET UNITYSDK_OFFSET(0x7FC2A50)
#define DMADBEDNGBI__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC2AB0)

inline static constexpr unsigned int DMADBEDNGBI_TypeDefinitionIndex = 57172;

class DMADBEDNGBI
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* _CGBGGMBBAHF_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* _CHFDPFCGFOG_k__BackingField; // 0x18
	::MoleMole::ConfigVideoAudioMapping* HKKKNGPHOEE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* BHGGLPLOCGG; // 0x28
	::System::Int32 LKLJMDNGJJF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMADBEDNGBI__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMADBEDNGBI_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMADBEDNGBI_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMADBEDNGBI_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LKOHKGMFBAD(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*))((::PBYTE)hIl2Cpp + DMADBEDNGBI_LKOHKGMFBAD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DGGGLECGAHI(::MoleMole::ScreenPlayer* LPKIJGJOEHC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScreenPlayer*))((::PBYTE)hIl2Cpp + DMADBEDNGBI_DGGGLECGAHI_OFFSET))(this, LPKIJGJOEHC);
	}

	static ::System::Boolean INICFKJPIKA(::ObjectPlayType MAOCFFFKJCF)
	{
		return ((::System::Boolean(*)(::ObjectPlayType))((::PBYTE)hIl2Cpp + DMADBEDNGBI_INICFKJPIKA_OFFSET))(MAOCFFFKJCF);
	}

	static ::System::Boolean INICFKJPIKA_1(::MoleMole::SceneObjectStateWidget* MNOMCCLBJAO)
	{
		return ((::System::Boolean(*)(::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + DMADBEDNGBI_INICFKJPIKA_1_OFFSET))(MNOMCCLBJAO);
	}

	::System::Void LCHDDCNGAKE(::MoleMole::ConfigVideoAudioMapping* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigVideoAudioMapping*))((::PBYTE)hIl2Cpp + DMADBEDNGBI_LCHDDCNGAKE_OFFSET))(this, DFMKILICPFB);
	}

	static ::System::Boolean INICFKJPIKA_2(::MoleMole::StaticSceneObjectWidget* BJPOOANCKBC)
	{
		return ((::System::Boolean(*)(::MoleMole::StaticSceneObjectWidget*))((::PBYTE)hIl2Cpp + DMADBEDNGBI_INICFKJPIKA_2_OFFSET))(BJPOOANCKBC);
	}

	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* MEBINOODLHO()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMADBEDNGBI_MEBINOODLHO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* BNBPIGDPDCM()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMADBEDNGBI_BNBPIGDPDCM_OFFSET))(this);
	}

	static ::System::Boolean INICFKJPIKA_3(::SceneObjectType OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::SceneObjectType))((::PBYTE)hIl2Cpp + DMADBEDNGBI_INICFKJPIKA_3_OFFSET))(OBNIAHNMHPF);
	}

	::System::Boolean AHGFEGGAEAL(::System::String* GEJELOFECOG, ::MoleMole::ConfigVideoAudioMapping_VideoAudioEntry*& AAIJGGIEOGK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::ConfigVideoAudioMapping_VideoAudioEntry*&))((::PBYTE)hIl2Cpp + DMADBEDNGBI_AHGFEGGAEAL_OFFSET))(this, GEJELOFECOG, AAIJGGIEOGK);
	}

	::System::Void NEOJMFBBBMG(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*))((::PBYTE)hIl2Cpp + DMADBEDNGBI_NEOJMFBBBMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GEFLCJDGJKE(::UnityEngine::SceneManagement::Scene JLDDCFOKKNM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + DMADBEDNGBI_GEFLCJDGJKE_OFFSET))(this, JLDDCFOKKNM);
	}

	::System::Void OKGIJNJEDFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMADBEDNGBI_OKGIJNJEDFF_OFFSET))(this);
	}

	::MoleMole::ScreenPlayer* OMPFLKCBFHF(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::MoleMole::ScreenPlayer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DMADBEDNGBI_OMPFLKCBFHF_OFFSET))(this, JEIDPPCEHLD);
	}
};
