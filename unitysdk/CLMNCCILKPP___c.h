#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLMNCCILKPP;
namespace System { class Object; }

#define CLMNCCILKPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FC4C0)
#define CLMNCCILKPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FC500)
#define CLMNCCILKPP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0FC510)

inline static constexpr unsigned int CLMNCCILKPP___c_TypeDefinitionIndex = 30540;

	class CLMNCCILKPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLMNCCILKPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP___C_CTOR_OFFSET))(this);
		}

		::CLMNCCILKPP* __cctor_b__33_0()
		{
			return ((::CLMNCCILKPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
