#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BCEJKPONNMF_NMHNNOMBHGO_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x143CBF50)
#define BCEJKPONNMF_NMHNNOMBHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x143CBF40)

inline static constexpr unsigned int BCEJKPONNMF_NMHNNOMBHGO_TypeDefinitionIndex = 44175;

class BCEJKPONNMF_NMHNNOMBHGO : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEJKPONNMF_NMHNNOMBHGO__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEJKPONNMF_NMHNNOMBHGO_PNGOHNLELDJ_OFFSET))(this);
	}
};
