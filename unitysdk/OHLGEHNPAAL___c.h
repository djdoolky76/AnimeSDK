#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHLGEHNPAAL;
namespace System { class Object; }

#define OHLGEHNPAAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE38250)
#define OHLGEHNPAAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE38280)
#define OHLGEHNPAAL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE38290)

inline static constexpr unsigned int OHLGEHNPAAL___c_TypeDefinitionIndex = 25866;

	class OHLGEHNPAAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHLGEHNPAAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLGEHNPAAL___C_CTOR_OFFSET))(this);
		}

		::OHLGEHNPAAL* __cctor_b__33_0()
		{
			return ((::OHLGEHNPAAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLGEHNPAAL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
