#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AA4EA9464BABFC7E_A57A47AA9C2D41AE_EAE503777D8B55A0_OFFSET UNITYSDK_OFFSET(0x1FECD80)
#define AA4EA9464BABFC7E_A57A47AA9C2D41AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA4EA9464BABFC7E_A57A47AA9C2D41AE_TypeDefinitionIndex = 8131;

class AA4EA9464BABFC7E_A57A47AA9C2D41AE : public ::System::Object
{
public:
	::System::String* F3A446B53FFBD5CE; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA4EA9464BABFC7E_A57A47AA9C2D41AE__CTOR_OFFSET))(this);
	}

	::System::Void EAE503777D8B55A0(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AA4EA9464BABFC7E_A57A47AA9C2D41AE_EAE503777D8B55A0_OFFSET))(this, A86A90C31A146E9C);
	}
};
