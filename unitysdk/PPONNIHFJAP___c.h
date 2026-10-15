#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPONNIHFJAP;
namespace System { class Object; }

#define PPONNIHFJAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE43F0)
#define PPONNIHFJAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE4430)
#define PPONNIHFJAP___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1DFE4440)

inline static constexpr unsigned int PPONNIHFJAP___c_TypeDefinitionIndex = 34987;

	class PPONNIHFJAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x438D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPONNIHFJAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONNIHFJAP___C_CTOR_OFFSET))(this);
		}

		::PPONNIHFJAP* __cctor_b__108_0()
		{
			return ((::PPONNIHFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONNIHFJAP___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
