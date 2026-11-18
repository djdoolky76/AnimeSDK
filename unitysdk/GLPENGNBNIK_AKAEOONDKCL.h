#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GLPENGNBNIK_AKAEOONDKCL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15F28D40)
#define GLPENGNBNIK_AKAEOONDKCL__CTOR_OFFSET UNITYSDK_OFFSET(0x15F28D30)

inline static constexpr unsigned int GLPENGNBNIK_AKAEOONDKCL_TypeDefinitionIndex = 86956;

class GLPENGNBNIK_AKAEOONDKCL : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPENGNBNIK_AKAEOONDKCL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPENGNBNIK_AKAEOONDKCL_PNGOHNLELDJ_OFFSET))(this);
	}
};
