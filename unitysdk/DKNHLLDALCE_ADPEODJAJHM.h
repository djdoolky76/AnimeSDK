#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DKNHLLDALCE_ADPEODJAJHM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x13E53F60)
#define DKNHLLDALCE_ADPEODJAJHM__CTOR_OFFSET UNITYSDK_OFFSET(0x13E53F50)

inline static constexpr unsigned int DKNHLLDALCE_ADPEODJAJHM_TypeDefinitionIndex = 64679;

class DKNHLLDALCE_ADPEODJAJHM : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHLLDALCE_ADPEODJAJHM__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHLLDALCE_ADPEODJAJHM_PNGOHNLELDJ_OFFSET))(this);
	}
};
