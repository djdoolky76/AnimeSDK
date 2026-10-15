#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBMICCAEHFE;
namespace System { class Object; }

#define BBMICCAEHFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8C00)
#define BBMICCAEHFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8C40)
#define BBMICCAEHFE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7C8C50)

inline static constexpr unsigned int BBMICCAEHFE___c_TypeDefinitionIndex = 34050;

	class BBMICCAEHFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x481D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBMICCAEHFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMICCAEHFE___C_CTOR_OFFSET))(this);
		}

		::BBMICCAEHFE* __cctor_b__33_0()
		{
			return ((::BBMICCAEHFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMICCAEHFE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
