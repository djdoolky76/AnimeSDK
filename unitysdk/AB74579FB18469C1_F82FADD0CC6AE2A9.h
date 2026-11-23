#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB74579FB18469C1;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define AB74579FB18469C1_F82FADD0CC6AE2A9_E10850DCACB459D8_OFFSET UNITYSDK_OFFSET(0x39F98A0)
#define AB74579FB18469C1_F82FADD0CC6AE2A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB74579FB18469C1_F82FADD0CC6AE2A9_TypeDefinitionIndex = 11885;

class AB74579FB18469C1_F82FADD0CC6AE2A9 : public ::System::Object
{
public:
	::AB74579FB18469C1* A544919C800E2923; // 0x10
	::System::Action_2<::System::Int32, ::System::String*>* E04D2BE64FCE9814; // 0x18
	::System::String* BC44D01FDCF9D2D6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB74579FB18469C1_F82FADD0CC6AE2A9__CTOR_OFFSET))(this);
	}

	::System::Void E10850DCACB459D8(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + AB74579FB18469C1_F82FADD0CC6AE2A9_E10850DCACB459D8_OFFSET))(this, A6CAE7339066B0FB);
	}
};
