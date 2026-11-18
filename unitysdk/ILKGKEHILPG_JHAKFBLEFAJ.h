#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ILKGKEHILPG_JHAKFBLEFAJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14A2BFE0)
#define ILKGKEHILPG_JHAKFBLEFAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2BFD0)

inline static constexpr unsigned int ILKGKEHILPG_JHAKFBLEFAJ_TypeDefinitionIndex = 65538;

class ILKGKEHILPG_JHAKFBLEFAJ : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKGKEHILPG_JHAKFBLEFAJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKGKEHILPG_JHAKFBLEFAJ_PNGOHNLELDJ_OFFSET))(this);
	}
};
