#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DDABKHLEBNH_IOONAAAJEEL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15361E20)
#define DDABKHLEBNH_IOONAAAJEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15361E10)

inline static constexpr unsigned int DDABKHLEBNH_IOONAAAJEEL_TypeDefinitionIndex = 42033;

class DDABKHLEBNH_IOONAAAJEEL : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABKHLEBNH_IOONAAAJEEL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABKHLEBNH_IOONAAAJEEL_PNGOHNLELDJ_OFFSET))(this);
	}
};
