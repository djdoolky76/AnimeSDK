#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOLFHANBJOG;
namespace System { class Object; }

#define MOLFHANBJOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA82000)
#define MOLFHANBJOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA82040)
#define MOLFHANBJOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA82050)

inline static constexpr unsigned int MOLFHANBJOG___c_TypeDefinitionIndex = 32283;

	class MOLFHANBJOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AF00);
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
