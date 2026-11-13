#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIJFHHMGBFE;
namespace System { class Object; }

#define LIJFHHMGBFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201CC480)
#define LIJFHHMGBFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201CC4C0)
#define LIJFHHMGBFE___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x201CC4D0)

inline static constexpr unsigned int LIJFHHMGBFE___c_TypeDefinitionIndex = 29309;

	class LIJFHHMGBFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ABC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIJFHHMGBFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJFHHMGBFE___C_CTOR_OFFSET))(this);
		}

		::LIJFHHMGBFE* __cctor_b__93_0()
		{
			return ((::LIJFHHMGBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJFHHMGBFE___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
