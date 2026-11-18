#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GGNFHGBFDNE_EFCIIKPKEBH_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x18141350)
#define GGNFHGBFDNE_EFCIIKPKEBH__CTOR_OFFSET UNITYSDK_OFFSET(0x18141340)

inline static constexpr unsigned int GGNFHGBFDNE_EFCIIKPKEBH_TypeDefinitionIndex = 48436;

class GGNFHGBFDNE_EFCIIKPKEBH : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_EFCIIKPKEBH__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_EFCIIKPKEBH_PNGOHNLELDJ_OFFSET))(this);
	}
};
