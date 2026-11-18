#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MPLFOADNKML_AOJELKJPHOP_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1274E600)
#define MPLFOADNKML_AOJELKJPHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1274E5F0)

inline static constexpr unsigned int MPLFOADNKML_AOJELKJPHOP_TypeDefinitionIndex = 61168;

class MPLFOADNKML_AOJELKJPHOP : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFOADNKML_AOJELKJPHOP__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFOADNKML_AOJELKJPHOP_PNGOHNLELDJ_OFFSET))(this);
	}
};
