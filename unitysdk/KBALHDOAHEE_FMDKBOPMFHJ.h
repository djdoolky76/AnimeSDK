#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KBALHDOAHEE_FMDKBOPMFHJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15B78CA0)
#define KBALHDOAHEE_FMDKBOPMFHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B78C90)

inline static constexpr unsigned int KBALHDOAHEE_FMDKBOPMFHJ_TypeDefinitionIndex = 44926;

class KBALHDOAHEE_FMDKBOPMFHJ : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBALHDOAHEE_FMDKBOPMFHJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBALHDOAHEE_FMDKBOPMFHJ_PNGOHNLELDJ_OFFSET))(this);
	}
};
