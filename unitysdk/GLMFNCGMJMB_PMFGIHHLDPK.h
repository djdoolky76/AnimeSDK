#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GLMFNCGMJMB_PMFGIHHLDPK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x17AC6B50)
#define GLMFNCGMJMB_PMFGIHHLDPK__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC6B40)

inline static constexpr unsigned int GLMFNCGMJMB_PMFGIHHLDPK_TypeDefinitionIndex = 74088;

class GLMFNCGMJMB_PMFGIHHLDPK : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMFNCGMJMB_PMFGIHHLDPK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMFNCGMJMB_PMFGIHHLDPK_PNGOHNLELDJ_OFFSET))(this);
	}
};
