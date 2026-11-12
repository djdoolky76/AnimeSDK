#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMACEHDGGHB;
namespace System { class Object; }

#define HMACEHDGGHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C5B60)
#define HMACEHDGGHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C5BA0)
#define HMACEHDGGHB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8C5BB0)

inline static constexpr unsigned int HMACEHDGGHB___c_TypeDefinitionIndex = 26384;

	class HMACEHDGGHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMACEHDGGHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMACEHDGGHB___C_CTOR_OFFSET))(this);
		}

		::HMACEHDGGHB* __cctor_b__33_0()
		{
			return ((::HMACEHDGGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMACEHDGGHB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
