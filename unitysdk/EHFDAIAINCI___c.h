#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHFDAIAINCI;
namespace System { class Object; }

#define EHFDAIAINCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F583080)
#define EHFDAIAINCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5830C0)
#define EHFDAIAINCI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F5830D0)

inline static constexpr unsigned int EHFDAIAINCI___c_TypeDefinitionIndex = 34413;

	class EHFDAIAINCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHFDAIAINCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI___C_CTOR_OFFSET))(this);
		}

		::EHFDAIAINCI* __cctor_b__33_0()
		{
			return ((::EHFDAIAINCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFDAIAINCI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
