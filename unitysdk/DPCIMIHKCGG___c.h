#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPCIMIHKCGG;
namespace System { class Object; }

#define DPCIMIHKCGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F764E20)
#define DPCIMIHKCGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F764E60)
#define DPCIMIHKCGG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F764E70)

inline static constexpr unsigned int DPCIMIHKCGG___c_TypeDefinitionIndex = 29212;

	class DPCIMIHKCGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPCIMIHKCGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG___C_CTOR_OFFSET))(this);
		}

		::DPCIMIHKCGG* __cctor_b__28_0()
		{
			return ((::DPCIMIHKCGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
