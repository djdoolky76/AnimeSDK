#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BLDLCEKFKJL_MPKGFNLKGAI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xFF8B310)
#define BLDLCEKFKJL_MPKGFNLKGAI__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8B300)

inline static constexpr unsigned int BLDLCEKFKJL_MPKGFNLKGAI_TypeDefinitionIndex = 69005;

class BLDLCEKFKJL_MPKGFNLKGAI : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDLCEKFKJL_MPKGFNLKGAI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDLCEKFKJL_MPKGFNLKGAI_PNGOHNLELDJ_OFFSET))(this);
	}
};
