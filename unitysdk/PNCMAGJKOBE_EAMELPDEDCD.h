#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PNCMAGJKOBE_EAMELPDEDCD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x178ED720)
#define PNCMAGJKOBE_EAMELPDEDCD__CTOR_OFFSET UNITYSDK_OFFSET(0x178ED710)

inline static constexpr unsigned int PNCMAGJKOBE_EAMELPDEDCD_TypeDefinitionIndex = 42321;

class PNCMAGJKOBE_EAMELPDEDCD : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_EAMELPDEDCD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_EAMELPDEDCD_PNGOHNLELDJ_OFFSET))(this);
	}
};
