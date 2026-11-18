#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHJGMDOABJE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class LightRenderConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKOMAPFGFLO_FDJMAPCHGJB_OFFSET UNITYSDK_OFFSET(0x16D8DA90)
#define AKOMAPFGFLO__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8DA00)

inline static constexpr unsigned int AKOMAPFGFLO_TypeDefinitionIndex = 55637;

class AKOMAPFGFLO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::AHJGMDOABJE, ::MoleMole::HollowChessboard::LightRenderConfig*>* FBAPDCAGJFB; // 0x10
	::MoleMole::HollowChessboard::LightRenderConfig* DGNELLBGHJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOMAPFGFLO__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::LightRenderConfig* FDJMAPCHGJB(::AHJGMDOABJE LIDKLBLMEAK)
	{
		return ((::MoleMole::HollowChessboard::LightRenderConfig*(*)(::PVOID, ::AHJGMDOABJE))((::PBYTE)hIl2Cpp + AKOMAPFGFLO_FDJMAPCHGJB_OFFSET))(this, LIDKLBLMEAK);
	}
};
