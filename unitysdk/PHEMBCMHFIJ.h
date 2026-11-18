#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace MoleMole { class ActivityRhythmClickBeatmapConfig_BeatMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PHEMBCMHFIJ_CKEPMOBKLMP_OFFSET UNITYSDK_OFFSET(0x178CC5E0)
#define PHEMBCMHFIJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x178CCAB0)
#define PHEMBCMHFIJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x178CCFA0)
#define PHEMBCMHFIJ_GOIABKLCAAG_OFFSET UNITYSDK_OFFSET(0x178CC820)
#define PHEMBCMHFIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x178CC5D0)

inline static constexpr unsigned int PHEMBCMHFIJ_TypeDefinitionIndex = 84590;

class PHEMBCMHFIJ : public ::System::Object
{
public:
	static ::MoleMole::ActivityRhythmClickBeatmapConfig** StaticGet_DFMKILICPFB()
	{
		return (::MoleMole::ActivityRhythmClickBeatmapConfig**)Il2CppClass::FromTypeDefinitionIndex(PHEMBCMHFIJ_TypeDefinitionIndex)->GetStaticField(0x36330);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ__CTOR_OFFSET))(this);
	}

	static ::System::Single CKEPMOBKLMP(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_CKEPMOBKLMP_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap* GOIABKLCAAG(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap*(*)(::System::String*))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_GOIABKLCAAG_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
