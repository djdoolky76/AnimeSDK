#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CDLHOGBBAKN_NIDDLJHHPDL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x10E31870)
#define CDLHOGBBAKN_NIDDLJHHPDL__CTOR_OFFSET UNITYSDK_OFFSET(0x10E31860)

inline static constexpr unsigned int CDLHOGBBAKN_NIDDLJHHPDL_TypeDefinitionIndex = 46178;

class CDLHOGBBAKN_NIDDLJHHPDL : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_NIDDLJHHPDL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_NIDDLJHHPDL_PNGOHNLELDJ_OFFSET))(this);
	}
};
