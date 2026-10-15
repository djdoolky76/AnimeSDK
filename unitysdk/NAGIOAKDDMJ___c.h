#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAGIOAKDDMJ;
namespace System { class Object; }

#define NAGIOAKDDMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA956E0)
#define NAGIOAKDDMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA95720)
#define NAGIOAKDDMJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EA95730)

inline static constexpr unsigned int NAGIOAKDDMJ___c_TypeDefinitionIndex = 25119;

	class NAGIOAKDDMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGIOAKDDMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ___C_CTOR_OFFSET))(this);
		}

		::NAGIOAKDDMJ* __cctor_b__48_0()
		{
			return ((::NAGIOAKDDMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
