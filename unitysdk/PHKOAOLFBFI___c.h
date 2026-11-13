#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHKOAOLFBFI;
namespace System { class Object; }

#define PHKOAOLFBFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2025FF60)
#define PHKOAOLFBFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2025FFA0)
#define PHKOAOLFBFI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x2025FFB0)

inline static constexpr unsigned int PHKOAOLFBFI___c_TypeDefinitionIndex = 32143;

	class PHKOAOLFBFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHKOAOLFBFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI___C_CTOR_OFFSET))(this);
		}

		::PHKOAOLFBFI* __cctor_b__18_0()
		{
			return ((::PHKOAOLFBFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOAOLFBFI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
