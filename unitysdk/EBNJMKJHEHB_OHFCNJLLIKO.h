#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EBNJMKJHEHB_OHFCNJLLIKO_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1588CA70)
#define EBNJMKJHEHB_OHFCNJLLIKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1588CA60)

inline static constexpr unsigned int EBNJMKJHEHB_OHFCNJLLIKO_TypeDefinitionIndex = 81980;

class EBNJMKJHEHB_OHFCNJLLIKO : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_OHFCNJLLIKO__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_OHFCNJLLIKO_PNGOHNLELDJ_OFFSET))(this);
	}
};
