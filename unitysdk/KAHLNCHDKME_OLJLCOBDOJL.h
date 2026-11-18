#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KAHLNCHDKME_OLJLCOBDOJL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x130A7490)
#define KAHLNCHDKME_OLJLCOBDOJL__CTOR_OFFSET UNITYSDK_OFFSET(0x130A7480)

inline static constexpr unsigned int KAHLNCHDKME_OLJLCOBDOJL_TypeDefinitionIndex = 59478;

class KAHLNCHDKME_OLJLCOBDOJL : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHLNCHDKME_OLJLCOBDOJL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHLNCHDKME_OLJLCOBDOJL_PNGOHNLELDJ_OFFSET))(this);
	}
};
