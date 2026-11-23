#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_A214C61FC6D5EE3D_EDDADE32D11C68F0_OFFSET UNITYSDK_OFFSET(0x38D7820)
#define B993816ABB9C394A_A214C61FC6D5EE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_A214C61FC6D5EE3D_TypeDefinitionIndex = 11748;

class B993816ABB9C394A_A214C61FC6D5EE3D : public ::System::Object
{
public:
	::B993816ABB9C394A* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_A214C61FC6D5EE3D__CTOR_OFFSET))(this);
	}

	::System::Void EDDADE32D11C68F0(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_A214C61FC6D5EE3D_EDDADE32D11C68F0_OFFSET))(this, A6CAE7339066B0FB);
	}
};
