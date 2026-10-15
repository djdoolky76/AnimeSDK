#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCMJFJHILIB;
namespace System { class Object; }

#define BCMJFJHILIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DE440)
#define BCMJFJHILIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DE480)
#define BCMJFJHILIB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8DE490)

inline static constexpr unsigned int BCMJFJHILIB___c_TypeDefinitionIndex = 26561;

	class BCMJFJHILIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCMJFJHILIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB___C_CTOR_OFFSET))(this);
		}

		::BCMJFJHILIB* __cctor_b__18_0()
		{
			return ((::BCMJFJHILIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
