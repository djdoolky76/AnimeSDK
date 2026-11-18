#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IFPAJOCNBNI_NBLCFNFFGOA_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x141C1BE0)
#define IFPAJOCNBNI_NBLCFNFFGOA__CTOR_OFFSET UNITYSDK_OFFSET(0x141C1BD0)

inline static constexpr unsigned int IFPAJOCNBNI_NBLCFNFFGOA_TypeDefinitionIndex = 60038;

class IFPAJOCNBNI_NBLCFNFFGOA : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAJOCNBNI_NBLCFNFFGOA__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAJOCNBNI_NBLCFNFFGOA_PNGOHNLELDJ_OFFSET))(this);
	}
};
