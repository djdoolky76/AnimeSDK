#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLEKMNPBNKG;
namespace System { class Object; }

#define PLEKMNPBNKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF71B10)
#define PLEKMNPBNKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF71B50)
#define PLEKMNPBNKG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF71B60)

inline static constexpr unsigned int PLEKMNPBNKG___c_TypeDefinitionIndex = 26355;

	class PLEKMNPBNKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLEKMNPBNKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG___C_CTOR_OFFSET))(this);
		}

		::PLEKMNPBNKG* __cctor_b__28_0()
		{
			return ((::PLEKMNPBNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEKMNPBNKG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
