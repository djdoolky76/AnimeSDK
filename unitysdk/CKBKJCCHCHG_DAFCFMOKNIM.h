#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CKBKJCCHCHG_DAFCFMOKNIM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1496B620)
#define CKBKJCCHCHG_DAFCFMOKNIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1496B610)

inline static constexpr unsigned int CKBKJCCHCHG_DAFCFMOKNIM_TypeDefinitionIndex = 51153;

class CKBKJCCHCHG_DAFCFMOKNIM : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBKJCCHCHG_DAFCFMOKNIM__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBKJCCHCHG_DAFCFMOKNIM_PNGOHNLELDJ_OFFSET))(this);
	}
};
