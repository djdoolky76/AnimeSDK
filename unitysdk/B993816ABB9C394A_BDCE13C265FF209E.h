#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_BDCE13C265FF209E_F2DD32A9E181319C_OFFSET UNITYSDK_OFFSET(0x38D7C90)
#define B993816ABB9C394A_BDCE13C265FF209E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_BDCE13C265FF209E_TypeDefinitionIndex = 11752;

class B993816ABB9C394A_BDCE13C265FF209E : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10
	::B993816ABB9C394A* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDCE13C265FF209E__CTOR_OFFSET))(this);
	}

	::System::Void F2DD32A9E181319C(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDCE13C265FF209E_F2DD32A9E181319C_OFFSET))(this, A6CAE7339066B0FB);
	}
};
