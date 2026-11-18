#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FNEINFPHDPM_HDOODGPOKDG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x11C72540)
#define FNEINFPHDPM_HDOODGPOKDG__CTOR_OFFSET UNITYSDK_OFFSET(0x11C72530)

inline static constexpr unsigned int FNEINFPHDPM_HDOODGPOKDG_TypeDefinitionIndex = 60886;

class FNEINFPHDPM_HDOODGPOKDG : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEINFPHDPM_HDOODGPOKDG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEINFPHDPM_HDOODGPOKDG_PNGOHNLELDJ_OFFSET))(this);
	}
};
