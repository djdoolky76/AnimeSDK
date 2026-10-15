#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIEODGPPEDC;
namespace System { class Object; }

#define DIEODGPPEDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC290)
#define DIEODGPPEDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC2C0)
#define DIEODGPPEDC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E1BC2D0)

inline static constexpr unsigned int DIEODGPPEDC___c_TypeDefinitionIndex = 28436;

	class DIEODGPPEDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIEODGPPEDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC___C_CTOR_OFFSET))(this);
		}

		::DIEODGPPEDC* __cctor_b__18_0()
		{
			return ((::DIEODGPPEDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEODGPPEDC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
