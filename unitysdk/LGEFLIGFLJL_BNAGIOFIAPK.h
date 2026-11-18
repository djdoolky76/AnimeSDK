#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LGEFLIGFLJL_BNAGIOFIAPK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xD42BB40)
#define LGEFLIGFLJL_BNAGIOFIAPK__CTOR_OFFSET UNITYSDK_OFFSET(0xD42BB30)

inline static constexpr unsigned int LGEFLIGFLJL_BNAGIOFIAPK_TypeDefinitionIndex = 62381;

class LGEFLIGFLJL_BNAGIOFIAPK : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_BNAGIOFIAPK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_BNAGIOFIAPK_PNGOHNLELDJ_OFFSET))(this);
	}
};
