#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_F7A4655EA41A18C3_A025774443606DFB_OFFSET UNITYSDK_OFFSET(0x38D7850)
#define B993816ABB9C394A_F7A4655EA41A18C3_F0598F7D36B0079D_OFFSET UNITYSDK_OFFSET(0x38D7850)
#define B993816ABB9C394A_F7A4655EA41A18C3_F576B77850E77D71_OFFSET UNITYSDK_OFFSET(0x38D7850)
#define B993816ABB9C394A_F7A4655EA41A18C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_F7A4655EA41A18C3_TypeDefinitionIndex = 11749;

class B993816ABB9C394A_F7A4655EA41A18C3 : public ::System::Object
{
public:
	::B993816ABB9C394A* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F7A4655EA41A18C3__CTOR_OFFSET))(this);
	}

	::System::Void A025774443606DFB(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F7A4655EA41A18C3_A025774443606DFB_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F576B77850E77D71(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F7A4655EA41A18C3_F576B77850E77D71_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F0598F7D36B0079D(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_F7A4655EA41A18C3_F0598F7D36B0079D_OFFSET))(this, A6CAE7339066B0FB);
	}
};
