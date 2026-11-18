#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CGLCIADPCDC_LGOLNEKGNHK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1454FD40)
#define CGLCIADPCDC_LGOLNEKGNHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1454FD30)

inline static constexpr unsigned int CGLCIADPCDC_LGOLNEKGNHK_TypeDefinitionIndex = 50830;

class CGLCIADPCDC_LGOLNEKGNHK : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLCIADPCDC_LGOLNEKGNHK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLCIADPCDC_LGOLNEKGNHK_PNGOHNLELDJ_OFFSET))(this);
	}
};
