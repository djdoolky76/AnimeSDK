#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CMPOHNBEPFK;
class DOJFNCNIHKF;
class HNLACBJDCGI;
class NPNGKEADAGC;
namespace MoleMole::MiniGame::TartarusHounds::View { class ImageEffectConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define EJKIIKJOAME_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x142676D0)
#define EJKIIKJOAME_BLOAKBACKFM_OFFSET UNITYSDK_OFFSET(0x14267540)
#define EJKIIKJOAME_DDIMEIEDMAP_OFFSET UNITYSDK_OFFSET(0x14266F30)
#define EJKIIKJOAME_EDAJIPFNENH_OFFSET UNITYSDK_OFFSET(0x14267450)
#define EJKIIKJOAME_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x14267670)
#define EJKIIKJOAME_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x14267040)
#define EJKIIKJOAME_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x142673C0)
#define EJKIIKJOAME__CTOR_OFFSET UNITYSDK_OFFSET(0x14266EB0)

inline static constexpr unsigned int EJKIIKJOAME_TypeDefinitionIndex = 65844;

class EJKIIKJOAME : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* CEKHILGMDLG; // 0x10
	::System::Collections::Generic::List_1<::DOJFNCNIHKF*>* HHNCPFALFIJ; // 0x18
	::System::Action* DDHPKCEOCPM; // 0x20
	::System::Int32 GGOCPAOOELP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKIIKJOAME__CTOR_OFFSET))(this);
	}

	::System::Void DDIMEIEDMAP(::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig* DFMKILICPFB, ::NPNGKEADAGC* LLMMPGEGNLB, ::HNLACBJDCGI* DKGJBGBPDCN, ::UnityEngine::RectTransform* GMGEBEPKAFL, ::UnityEngine::Vector2 JMLDADLOOFN, ::UnityEngine::Vector2 IACKHFCLPJI, ::UnityEngine::UI::Image* CCLJNJBAAIA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*, ::NPNGKEADAGC*, ::HNLACBJDCGI*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + EJKIIKJOAME_DDIMEIEDMAP_OFFSET))(this, DFMKILICPFB, LLMMPGEGNLB, DKGJBGBPDCN, GMGEBEPKAFL, JMLDADLOOFN, IACKHFCLPJI, CCLJNJBAAIA);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKIIKJOAME_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void EDAJIPFNENH(::CMPOHNBEPFK* MMDKDGPNHCK)
	{
		return ((::System::Void(*)(::PVOID, ::CMPOHNBEPFK*))((::PBYTE)hIl2Cpp + EJKIIKJOAME_EDAJIPFNENH_OFFSET))(this, MMDKDGPNHCK);
	}

	::System::Void BLOAKBACKFM(::NPNGKEADAGC* LLMMPGEGNLB)
	{
		return ((::System::Void(*)(::PVOID, ::NPNGKEADAGC*))((::PBYTE)hIl2Cpp + EJKIIKJOAME_BLOAKBACKFM_OFFSET))(this, LLMMPGEGNLB);
	}

	::CMPOHNBEPFK* LJPJBPCIEAF(::NPNGKEADAGC* LLMMPGEGNLB, ::UnityEngine::Vector2 JMLDADLOOFN, ::UnityEngine::Vector2 IACKHFCLPJI, ::UnityEngine::RectTransform* HKNNJHGAFBO, ::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig* OAIDHFOBKKO, ::UnityEngine::UI::Image* CCLJNJBAAIA)
	{
		return ((::CMPOHNBEPFK*(*)(::PVOID, ::NPNGKEADAGC*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + EJKIIKJOAME_LJPJBPCIEAF_OFFSET))(this, LLMMPGEGNLB, JMLDADLOOFN, IACKHFCLPJI, HKNNJHGAFBO, OAIDHFOBKKO, CCLJNJBAAIA);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKIIKJOAME_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* NGDDDBPOECB, ::System::Action* CEDGCLGADHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + EJKIIKJOAME_BBOMJDBNHIC_OFFSET))(this, NGDDDBPOECB, CEDGCLGADHN);
	}
};
