#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NDCLCJEPNIK_NHHCEOPMIAI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x13ED35F0)
#define NDCLCJEPNIK_NHHCEOPMIAI__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED35E0)

inline static constexpr unsigned int NDCLCJEPNIK_NHHCEOPMIAI_TypeDefinitionIndex = 63225;

class NDCLCJEPNIK_NHHCEOPMIAI : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCLCJEPNIK_NHHCEOPMIAI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCLCJEPNIK_NHHCEOPMIAI_PNGOHNLELDJ_OFFSET))(this);
	}
};
