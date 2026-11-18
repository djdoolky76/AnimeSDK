#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Comic { class IComicAnim; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Timeline { class BubbleEvent; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_SpriteItem; }
namespace UnityEngine::Timeline { class PictureDecorateEvent; }

#define BFCHCOLBCNO_CMDDLIJIBEE_OFFSET UNITYSDK_OFFSET(0x14C3E380)
#define BFCHCOLBCNO_EOFBJDJFDAM_OFFSET UNITYSDK_OFFSET(0x14C3E5E0)
#define BFCHCOLBCNO_GBEFNGECBBL_OFFSET UNITYSDK_OFFSET(0x14C3DDD0)
#define BFCHCOLBCNO_HIDFLFEJABP_OFFSET UNITYSDK_OFFSET(0x14C3E240)
#define BFCHCOLBCNO_IAOEOJFIDEC_OFFSET UNITYSDK_OFFSET(0x14C3E010)
#define BFCHCOLBCNO_IHCEOPELCBC_OFFSET UNITYSDK_OFFSET(0x14C3E710)
#define BFCHCOLBCNO_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x14C3E490)
#define BFCHCOLBCNO_IOHEIOFDNFF_OFFSET UNITYSDK_OFFSET(0x14C3E930)
#define BFCHCOLBCNO_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x14C3DEC0)
#define BFCHCOLBCNO_LDPKKONLKKK_OFFSET UNITYSDK_OFFSET(0x14C3E820)

inline static constexpr unsigned int BFCHCOLBCNO_TypeDefinitionIndex = 72685;

class BFCHCOLBCNO : public ::System::Object
{
public:
	static ::UnityEngine::Vector2 GBEFNGECBBL(::UnityEngine::Timeline::PictureDecorateEvent* OMPHGGCEIBD)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_GBEFNGECBBL_OFFSET))(OMPHGGCEIBD);
	}

	static ::UnityEngine::Vector3 LBCBPEJEHNB(::UnityEngine::Timeline::BubbleEvent* OMPHGGCEIBD)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_LBCBPEJEHNB_OFFSET))(OMPHGGCEIBD);
	}

	static ::UnityEngine::Sprite* IAOEOJFIDEC(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem* OMPHGGCEIBD)
	{
		return ((::UnityEngine::Sprite*(*)(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_IAOEOJFIDEC_OFFSET))(OMPHGGCEIBD);
	}

	static ::UnityEngine::Vector2 HIDFLFEJABP(::UnityEngine::Timeline::BubbleEvent* OMPHGGCEIBD)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_HIDFLFEJABP_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Single CMDDLIJIBEE(::UnityEngine::Timeline::BubbleEvent* OMPHGGCEIBD)
	{
		return ((::System::Single(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_CMDDLIJIBEE_OFFSET))(OMPHGGCEIBD);
	}

	static ::UnityEngine::Vector3 INMGLPLEEIK(::UnityEngine::Timeline::BubbleEvent* OMPHGGCEIBD)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_INMGLPLEEIK_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Single EOFBJDJFDAM(::UnityEngine::Timeline::BubbleEvent* OMPHGGCEIBD)
	{
		return ((::System::Single(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_EOFBJDJFDAM_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Boolean IHCEOPELCBC(::UnityEngine::Timeline::BubbleEvent* OMPHGGCEIBD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_IHCEOPELCBC_OFFSET))(OMPHGGCEIBD);
	}

	static ::UnityEngine::Sprite* LDPKKONLKKK(::UnityEngine::Timeline::PictureDecorateEvent* OMPHGGCEIBD)
	{
		return ((::UnityEngine::Sprite*(*)(::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_LDPKKONLKKK_OFFSET))(OMPHGGCEIBD);
	}

	static ::MoleMole::Comic::IComicAnim* IOHEIOFDNFF(::UnityEngine::Timeline::PictureDecorateEvent* OMPHGGCEIBD)
	{
		return ((::MoleMole::Comic::IComicAnim*(*)(::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + BFCHCOLBCNO_IOHEIOFDNFF_OFFSET))(OMPHGGCEIBD);
	}
};
