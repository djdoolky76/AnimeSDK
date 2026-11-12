#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDJAEDKGGB;
namespace System { class Object; }

#define GFDJAEDKGGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F754070)
#define GFDJAEDKGGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7540B0)
#define GFDJAEDKGGB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7540C0)

inline static constexpr unsigned int GFDJAEDKGGB___c_TypeDefinitionIndex = 30960;

	class GFDJAEDKGGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xABC0);
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
