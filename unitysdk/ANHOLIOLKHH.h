#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace System { class Action; }
namespace System { class String; }

#define ANHOLIOLKHH_EPCHAOPOCPP_OFFSET UNITYSDK_OFFSET(0x134E74D0)
#define ANHOLIOLKHH_GEHLIPOHGDK_OFFSET UNITYSDK_OFFSET(0x134E78F0)
#define ANHOLIOLKHH_GJJEKICHEAO_OFFSET UNITYSDK_OFFSET(0x134E7900)
#define ANHOLIOLKHH_HIFONDLGFIF_OFFSET UNITYSDK_OFFSET(0x134E7800)
#define ANHOLIOLKHH_PHNOGFPOKAK_OFFSET UNITYSDK_OFFSET(0x134E7740)
#define ANHOLIOLKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x134E7490)

inline static constexpr unsigned int ANHOLIOLKHH_TypeDefinitionIndex = 80881;

class ANHOLIOLKHH : public ::System::Object
{
public:
	::Spine::Unity::SkeletonAnimation* AOKJEGNBALI; // 0x10
	::Spine::TrackEntry* EKCEKMOLCMK; // 0x18
	::Spine::AnimationState* GPAKCLKEODM; // 0x20

	::System::Void _ctor(::Spine::Unity::SkeletonAnimation* AOKJEGNBALI)
	{
		return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimation*))((::PBYTE)hIl2Cpp + ANHOLIOLKHH__CTOR_OFFSET))(this, AOKJEGNBALI);
	}

	::System::Boolean EPCHAOPOCPP(::System::String* LIPIPGHBHFH, ::System::Boolean HAFDIMGJBHC, ::System::Action* BKNOAKELEBI, ::System::Single BAELCLKFEGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + ANHOLIOLKHH_EPCHAOPOCPP_OFFSET))(this, LIPIPGHBHFH, HAFDIMGJBHC, BKNOAKELEBI, BAELCLKFEGP);
	}

	::System::Single PHNOGFPOKAK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHOLIOLKHH_PHNOGFPOKAK_OFFSET))(this);
	}

	::System::Single HIFONDLGFIF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHOLIOLKHH_HIFONDLGFIF_OFFSET))(this);
	}

	::Spine::Unity::SkeletonAnimation* GEHLIPOHGDK()
	{
		return ((::Spine::Unity::SkeletonAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHOLIOLKHH_GEHLIPOHGDK_OFFSET))(this);
	}

	::System::Single GJJEKICHEAO(::System::String* LIPIPGHBHFH)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANHOLIOLKHH_GJJEKICHEAO_OFFSET))(this, LIPIPGHBHFH);
	}
};
