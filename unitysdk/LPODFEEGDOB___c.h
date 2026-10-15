#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPODFEEGDOB;
namespace System { class Object; }

#define LPODFEEGDOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A7550)
#define LPODFEEGDOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A7590)
#define LPODFEEGDOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9A75A0)

inline static constexpr unsigned int LPODFEEGDOB___c_TypeDefinitionIndex = 33332;

	class LPODFEEGDOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x452D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPODFEEGDOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB___C_CTOR_OFFSET))(this);
		}

		::LPODFEEGDOB* __cctor_b__28_0()
		{
			return ((::LPODFEEGDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODFEEGDOB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
