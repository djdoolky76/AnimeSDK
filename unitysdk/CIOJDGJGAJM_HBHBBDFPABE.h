#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CIOJDGJGAJM_HBHBBDFPABE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15337A70)
#define CIOJDGJGAJM_HBHBBDFPABE__CTOR_OFFSET UNITYSDK_OFFSET(0x15337A60)

inline static constexpr unsigned int CIOJDGJGAJM_HBHBBDFPABE_TypeDefinitionIndex = 80592;

class CIOJDGJGAJM_HBHBBDFPABE : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_HBHBBDFPABE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_HBHBBDFPABE_PNGOHNLELDJ_OFFSET))(this);
	}
};
