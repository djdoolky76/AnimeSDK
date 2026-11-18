#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NOFJJNDJHPJ_KDBBDJCPDME_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x114B2CB0)
#define NOFJJNDJHPJ_KDBBDJCPDME__CTOR_OFFSET UNITYSDK_OFFSET(0x114B2CA0)

inline static constexpr unsigned int NOFJJNDJHPJ_KDBBDJCPDME_TypeDefinitionIndex = 56477;

class NOFJJNDJHPJ_KDBBDJCPDME : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_KDBBDJCPDME__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_KDBBDJCPDME_PNGOHNLELDJ_OFFSET))(this);
	}
};
