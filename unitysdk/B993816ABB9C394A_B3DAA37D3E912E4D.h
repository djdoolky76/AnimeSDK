#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_B3DAA37D3E912E4D_A528193FAD6479F1_OFFSET UNITYSDK_OFFSET(0x38D7760)
#define B993816ABB9C394A_B3DAA37D3E912E4D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_B3DAA37D3E912E4D_TypeDefinitionIndex = 11747;

class B993816ABB9C394A_B3DAA37D3E912E4D : public ::System::Object
{
public:
	::B993816ABB9C394A* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_B3DAA37D3E912E4D__CTOR_OFFSET))(this);
	}

	::System::Void A528193FAD6479F1(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_B3DAA37D3E912E4D_A528193FAD6479F1_OFFSET))(this, A6CAE7339066B0FB);
	}
};
