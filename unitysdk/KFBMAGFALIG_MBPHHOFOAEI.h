#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KFBMAGFALIG_MBPHHOFOAEI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15B86C20)
#define KFBMAGFALIG_MBPHHOFOAEI__CTOR_OFFSET UNITYSDK_OFFSET(0x15B86C10)

inline static constexpr unsigned int KFBMAGFALIG_MBPHHOFOAEI_TypeDefinitionIndex = 84903;

class KFBMAGFALIG_MBPHHOFOAEI : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBMAGFALIG_MBPHHOFOAEI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBMAGFALIG_MBPHHOFOAEI_PNGOHNLELDJ_OFFSET))(this);
	}
};
