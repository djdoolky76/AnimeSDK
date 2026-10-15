#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNMBANDCBA;
namespace System { class Object; }

#define OMNMBANDCBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE90440)
#define OMNMBANDCBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE90480)
#define OMNMBANDCBA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE90490)

inline static constexpr unsigned int OMNMBANDCBA___c_TypeDefinitionIndex = 33312;

	class OMNMBANDCBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x237D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNMBANDCBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA___C_CTOR_OFFSET))(this);
		}

		::OMNMBANDCBA* __cctor_b__38_0()
		{
			return ((::OMNMBANDCBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
