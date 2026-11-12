#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKLDOELMEIN;
namespace System { class Object; }

#define GKLDOELMEIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7ABE50)
#define GKLDOELMEIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7ABE90)
#define GKLDOELMEIN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7ABEA0)

inline static constexpr unsigned int GKLDOELMEIN___c_TypeDefinitionIndex = 30268;

	class GKLDOELMEIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x158D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKLDOELMEIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN___C_CTOR_OFFSET))(this);
		}

		::GKLDOELMEIN* __cctor_b__23_0()
		{
			return ((::GKLDOELMEIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLDOELMEIN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
