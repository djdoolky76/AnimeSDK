#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOHLENBEIEB;
namespace System { class Object; }

#define LOHLENBEIEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200D6050)
#define LOHLENBEIEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200D6090)
#define LOHLENBEIEB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x200D60A0)

inline static constexpr unsigned int LOHLENBEIEB___c_TypeDefinitionIndex = 33608;

	class LOHLENBEIEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOHLENBEIEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB___C_CTOR_OFFSET))(this);
		}

		::LOHLENBEIEB* __cctor_b__33_0()
		{
			return ((::LOHLENBEIEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
