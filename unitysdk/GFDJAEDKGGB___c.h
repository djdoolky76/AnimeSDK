#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDJAEDKGGB;
namespace System { class Object; }

#define GFDJAEDKGGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4661F0)
#define GFDJAEDKGGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E466230)
#define GFDJAEDKGGB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E466240)

inline static constexpr unsigned int GFDJAEDKGGB___c_TypeDefinitionIndex = 30062;

	class GFDJAEDKGGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDJAEDKGGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB___C_CTOR_OFFSET))(this);
		}

		::GFDJAEDKGGB* __cctor_b__23_0()
		{
			return ((::GFDJAEDKGGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJAEDKGGB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
