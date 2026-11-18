#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDAKJFBJJII_MKJIPEPHLDL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xD41F9A0)
#define LDAKJFBJJII_MKJIPEPHLDL__CTOR_OFFSET UNITYSDK_OFFSET(0xD41F990)

inline static constexpr unsigned int LDAKJFBJJII_MKJIPEPHLDL_TypeDefinitionIndex = 81501;

class LDAKJFBJJII_MKJIPEPHLDL : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAKJFBJJII_MKJIPEPHLDL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAKJFBJJII_MKJIPEPHLDL_PNGOHNLELDJ_OFFSET))(this);
	}
};
