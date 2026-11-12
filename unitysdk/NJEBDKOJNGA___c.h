#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJEBDKOJNGA;
namespace System { class Object; }

#define NJEBDKOJNGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F025650)
#define NJEBDKOJNGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F025690)
#define NJEBDKOJNGA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F0256A0)

inline static constexpr unsigned int NJEBDKOJNGA___c_TypeDefinitionIndex = 28487;

	class NJEBDKOJNGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJEBDKOJNGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA___C_CTOR_OFFSET))(this);
		}

		::NJEBDKOJNGA* __cctor_b__28_0()
		{
			return ((::NJEBDKOJNGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEBDKOJNGA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
