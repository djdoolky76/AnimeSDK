#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJHBNBIJFE_JGAENLBNJMM;
namespace RPG::Client { class ManaVideoPlayer; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class RawImage; }

#define IGJMHKGCCNE_CTOR_OFFSET UNITYSDK_OFFSET(0x173BFD70)
#define IGJMHKGCCNE_EJMNPFAHNBH_OFFSET UNITYSDK_OFFSET(0x173C0070)
#define IGJMHKGCCNE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x173BFDB0)
#define IGJMHKGCCNE_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x173BFDC0)
#define IGJMHKGCCNE_KOCDBLKHPHA_OFFSET UNITYSDK_OFFSET(0x173C0120)
#define IGJMHKGCCNE_MNAFBEIMKMK_OFFSET UNITYSDK_OFFSET(0x173BFF90)
#define IGJMHKGCCNE_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x173BFF20)
#define IGJMHKGCCNE_PHBLGBNKNOF_OFFSET UNITYSDK_OFFSET(0x173C01C0)

inline static constexpr unsigned int IGJMHKGCCNE_TypeDefinitionIndex = 74964;

	class IGJMHKGCCNE : public ::System::Object
	{
	public:
		::RPG::Client::ManaVideoPlayer* _Player_k__BackingField; // 0x10
		::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x18
		::UnityEngine::UI::RawImage* CCGHDFGDPGL; // 0x20
		::UnityEngine::UI::AspectRatioFitter* JKLBPMJPLMF; // 0x28
		::System::Void _ctor(::LJJHBNBIJFE_JGAENLBNJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJJHBNBIJFE_JGAENLBNJMM*))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ManaVideoPlayer* get_Player()
		{
			return ((::RPG::Client::ManaVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_GET_PLAYER_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void MNAFBEIMKMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_MNAFBEIMKMK_OFFSET))(this);
		}

		::System::Void EJMNPFAHNBH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_EJMNPFAHNBH_OFFSET))(this, a1);
		}

		::System::Void KOCDBLKHPHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_KOCDBLKHPHA_OFFSET))(this);
		}

		::System::Void PHBLGBNKNOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGJMHKGCCNE_PHBLGBNKNOF_OFFSET))(this, a1);
		}

	};
