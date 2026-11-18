#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgSplitScreenGroup; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset; }

#define CHAIOHLICPB_ECMHFDKJPOI_OFFSET UNITYSDK_OFFSET(0x13259FD0)

inline static constexpr unsigned int CHAIOHLICPB_TypeDefinitionIndex = 53769;

class CHAIOHLICPB : public ::System::Object
{
public:
	static ::MoleMole::ComicImgSplitScreenGroup* ECMHFDKJPOI(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset* DFMKILICPFB)
	{
		return ((::MoleMole::ComicImgSplitScreenGroup*(*)(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset*))((::PBYTE)hIl2Cpp + CHAIOHLICPB_ECMHFDKJPOI_OFFSET))(DFMKILICPFB);
	}
};
