#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NILCAHCBKAI;
namespace System { class Object; }

#define NILCAHCBKAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACC3B0)
#define NILCAHCBKAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACC3F0)
#define NILCAHCBKAI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EACC400)

inline static constexpr unsigned int NILCAHCBKAI___c_TypeDefinitionIndex = 30971;

	class NILCAHCBKAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILCAHCBKAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI___C_CTOR_OFFSET))(this);
		}

		::NILCAHCBKAI* __cctor_b__38_0()
		{
			return ((::NILCAHCBKAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCAHCBKAI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
