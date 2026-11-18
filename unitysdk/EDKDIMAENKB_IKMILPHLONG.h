#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EDKDIMAENKB_IKMILPHLONG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16991EE0)
#define EDKDIMAENKB_IKMILPHLONG__CTOR_OFFSET UNITYSDK_OFFSET(0x16991ED0)

inline static constexpr unsigned int EDKDIMAENKB_IKMILPHLONG_TypeDefinitionIndex = 51034;

class EDKDIMAENKB_IKMILPHLONG : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKDIMAENKB_IKMILPHLONG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKDIMAENKB_IKMILPHLONG_PNGOHNLELDJ_OFFSET))(this);
	}
};
