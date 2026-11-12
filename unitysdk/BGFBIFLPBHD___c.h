#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFBIFLPBHD;
namespace System { class Object; }

#define BGFBIFLPBHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFF4C20)
#define BGFBIFLPBHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF4C60)
#define BGFBIFLPBHD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EFF4C70)

inline static constexpr unsigned int BGFBIFLPBHD___c_TypeDefinitionIndex = 25983;

	class BGFBIFLPBHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFBIFLPBHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD___C_CTOR_OFFSET))(this);
		}

		::BGFBIFLPBHD* __cctor_b__23_0()
		{
			return ((::BGFBIFLPBHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
