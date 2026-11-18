#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DADFKFAGEGD_FNFEHDIBGEN_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x19A2D700)
#define DADFKFAGEGD_FNFEHDIBGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2D6F0)

inline static constexpr unsigned int DADFKFAGEGD_FNFEHDIBGEN_TypeDefinitionIndex = 64253;

class DADFKFAGEGD_FNFEHDIBGEN : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADFKFAGEGD_FNFEHDIBGEN__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADFKFAGEGD_FNFEHDIBGEN_PNGOHNLELDJ_OFFSET))(this);
	}
};
