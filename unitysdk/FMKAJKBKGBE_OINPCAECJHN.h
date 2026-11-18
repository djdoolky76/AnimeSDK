#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FMKAJKBKGBE_OINPCAECJHN_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x141101C0)
#define FMKAJKBKGBE_OINPCAECJHN__CTOR_OFFSET UNITYSDK_OFFSET(0x141101B0)

inline static constexpr unsigned int FMKAJKBKGBE_OINPCAECJHN_TypeDefinitionIndex = 90972;

class FMKAJKBKGBE_OINPCAECJHN : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKAJKBKGBE_OINPCAECJHN__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKAJKBKGBE_OINPCAECJHN_PNGOHNLELDJ_OFFSET))(this);
	}
};
