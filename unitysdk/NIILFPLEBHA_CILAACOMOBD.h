#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NIILFPLEBHA_CILAACOMOBD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16B809D0)
#define NIILFPLEBHA_CILAACOMOBD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B809C0)

inline static constexpr unsigned int NIILFPLEBHA_CILAACOMOBD_TypeDefinitionIndex = 79068;

class NIILFPLEBHA_CILAACOMOBD : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIILFPLEBHA_CILAACOMOBD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIILFPLEBHA_CILAACOMOBD_PNGOHNLELDJ_OFFSET))(this);
	}
};
