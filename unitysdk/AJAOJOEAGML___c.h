#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJAOJOEAGML;
namespace System { class Object; }

#define AJAOJOEAGML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E256F90)
#define AJAOJOEAGML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E256FD0)
#define AJAOJOEAGML___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E256FE0)

inline static constexpr unsigned int AJAOJOEAGML___c_TypeDefinitionIndex = 32721;

	class AJAOJOEAGML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJAOJOEAGML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAOJOEAGML___C_CTOR_OFFSET))(this);
		}

		::AJAOJOEAGML* __cctor_b__28_0()
		{
			return ((::AJAOJOEAGML*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAOJOEAGML___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
