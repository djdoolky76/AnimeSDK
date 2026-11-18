#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MNGCOCGLOHD_KIBGDFMBEIB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x12743C90)
#define MNGCOCGLOHD_KIBGDFMBEIB__CTOR_OFFSET UNITYSDK_OFFSET(0x12743C80)

inline static constexpr unsigned int MNGCOCGLOHD_KIBGDFMBEIB_TypeDefinitionIndex = 70148;

class MNGCOCGLOHD_KIBGDFMBEIB : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_KIBGDFMBEIB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_KIBGDFMBEIB_PNGOHNLELDJ_OFFSET))(this);
	}
};
