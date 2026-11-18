#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNLPHAKMBCB_FCJMABLHJPB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x159E9300)
#define CNLPHAKMBCB_FCJMABLHJPB__CTOR_OFFSET UNITYSDK_OFFSET(0x159E92F0)

inline static constexpr unsigned int CNLPHAKMBCB_FCJMABLHJPB_TypeDefinitionIndex = 47561;

class CNLPHAKMBCB_FCJMABLHJPB : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLPHAKMBCB_FCJMABLHJPB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLPHAKMBCB_FCJMABLHJPB_PNGOHNLELDJ_OFFSET))(this);
	}
};
