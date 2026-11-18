#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHNEFLDKHBG_IPOKEEJAGII.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class VideoPlayerMono; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Graphic; }

#define DHNEFLDKHBG_DJLMJABOGHI_OFFSET UNITYSDK_OFFSET(0x149A6740)
#define DHNEFLDKHBG_DPINJOFACPC_OFFSET UNITYSDK_OFFSET(0x149A6970)
#define DHNEFLDKHBG_GLFAGGBCKOA_OFFSET UNITYSDK_OFFSET(0x149A6A80)
#define DHNEFLDKHBG_JMMEEDHDPNE_OFFSET UNITYSDK_OFFSET(0x149A6AE0)
#define DHNEFLDKHBG_OAHJKPGLCBD_OFFSET UNITYSDK_OFFSET(0x149A68B0)
#define DHNEFLDKHBG_POEHAHHMHLA_1_OFFSET UNITYSDK_OFFSET(0x149A67A0)
#define DHNEFLDKHBG_POEHAHHMHLA_OFFSET UNITYSDK_OFFSET(0x149A64C0)
#define DHNEFLDKHBG__CCTOR_OFFSET UNITYSDK_OFFSET(0x149A64B0)

inline static constexpr unsigned int DHNEFLDKHBG_TypeDefinitionIndex = 41666;

class DHNEFLDKHBG : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__AHFIAFMMIID_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DHNEFLDKHBG_TypeDefinitionIndex)->GetStaticField(0xA650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHNEFLDKHBG__CCTOR_OFFSET))();
	}

	static ::MoleMole::IVideoPlayer* POEHAHHMHLA(::MoleMole::VideoPlayerMono* DNJAHDKNCNE, ::DHNEFLDKHBG_IPOKEEJAGII OBNIAHNMHPF)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::MoleMole::VideoPlayerMono*, ::DHNEFLDKHBG_IPOKEEJAGII))((::PBYTE)hIl2Cpp + DHNEFLDKHBG_POEHAHHMHLA_OFFSET))(DNJAHDKNCNE, OBNIAHNMHPF);
	}

	static ::System::Void DJLMJABOGHI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DHNEFLDKHBG_DJLMJABOGHI_OFFSET))(EGEGIMGMJHN);
	}

	static ::MoleMole::IVideoPlayer* POEHAHHMHLA_1(::MoleMole::VideoPlayerMono* DNJAHDKNCNE)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::MoleMole::VideoPlayerMono*))((::PBYTE)hIl2Cpp + DHNEFLDKHBG_POEHAHHMHLA_1_OFFSET))(DNJAHDKNCNE);
	}

	static ::MoleMole::IVideoPlayer* OAHJKPGLCBD(::UnityEngine::GameObject* FACJHLALAEE)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DHNEFLDKHBG_OAHJKPGLCBD_OFFSET))(FACJHLALAEE);
	}

	static ::System::Void DPINJOFACPC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHNEFLDKHBG_DPINJOFACPC_OFFSET))();
	}

	static ::System::Boolean GLFAGGBCKOA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DHNEFLDKHBG_GLFAGGBCKOA_OFFSET))();
	}

	static ::MoleMole::IVideoPlayer* JMMEEDHDPNE(::UnityEngine::GameObject* FACJHLALAEE, ::UnityEngine::UI::Graphic* JKEFFMOKCHG)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + DHNEFLDKHBG_JMMEEDHDPNE_OFFSET))(FACJHLALAEE, JKEFFMOKCHG);
	}
};
