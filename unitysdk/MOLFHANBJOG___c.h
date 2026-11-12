#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOLFHANBJOG;
namespace System { class Object; }

#define MOLFHANBJOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDEA480)
#define MOLFHANBJOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEA4C0)
#define MOLFHANBJOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDEA4D0)

inline static constexpr unsigned int MOLFHANBJOG___c_TypeDefinitionIndex = 33196;

	class MOLFHANBJOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLFHANBJOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG___C_CTOR_OFFSET))(this);
		}

		::MOLFHANBJOG* __cctor_b__28_0()
		{
			return ((::MOLFHANBJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLFHANBJOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
