#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BGJCOEKKMBG_CGAAAKJIHMA_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x186752F0)
#define BGJCOEKKMBG_CGAAAKJIHMA__CTOR_OFFSET UNITYSDK_OFFSET(0x186752E0)

inline static constexpr unsigned int BGJCOEKKMBG_CGAAAKJIHMA_TypeDefinitionIndex = 46543;

class BGJCOEKKMBG_CGAAAKJIHMA : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_CGAAAKJIHMA__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_CGAAAKJIHMA_PNGOHNLELDJ_OFFSET))(this);
	}
};
