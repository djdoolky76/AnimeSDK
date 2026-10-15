#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKOGDPGHEKL;
namespace System { class Object; }

#define LKOGDPGHEKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E994870)
#define LKOGDPGHEKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9948B0)
#define LKOGDPGHEKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9948C0)

inline static constexpr unsigned int LKOGDPGHEKL___c_TypeDefinitionIndex = 31298;

	class LKOGDPGHEKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKOGDPGHEKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL___C_CTOR_OFFSET))(this);
		}

		::LKOGDPGHEKL* __cctor_b__23_0()
		{
			return ((::LKOGDPGHEKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOGDPGHEKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
