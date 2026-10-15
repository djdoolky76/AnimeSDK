#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGKDADFBMPL;
namespace System { class Object; }

#define BGKDADFBMPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7B200)
#define BGKDADFBMPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7B230)
#define BGKDADFBMPL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA7B240)

inline static constexpr unsigned int BGKDADFBMPL___c_TypeDefinitionIndex = 34332;

	class BGKDADFBMPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGKDADFBMPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL___C_CTOR_OFFSET))(this);
		}

		::BGKDADFBMPL* __cctor_b__23_0()
		{
			return ((::BGKDADFBMPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDADFBMPL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
