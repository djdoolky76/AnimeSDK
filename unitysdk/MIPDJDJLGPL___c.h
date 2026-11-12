#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIPDJDJLGPL;
namespace System { class Object; }

#define MIPDJDJLGPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD91510)
#define MIPDJDJLGPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD91550)
#define MIPDJDJLGPL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FD91560)

inline static constexpr unsigned int MIPDJDJLGPL___c_TypeDefinitionIndex = 26035;

	class MIPDJDJLGPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIPDJDJLGPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPDJDJLGPL___C_CTOR_OFFSET))(this);
		}

		::MIPDJDJLGPL* __cctor_b__38_0()
		{
			return ((::MIPDJDJLGPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPDJDJLGPL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
