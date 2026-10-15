#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIJFHHMGBFE;
namespace System { class Object; }

#define LIJFHHMGBFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E970500)
#define LIJFHHMGBFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E970540)
#define LIJFHHMGBFE___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E970550)

inline static constexpr unsigned int LIJFHHMGBFE___c_TypeDefinitionIndex = 28719;

	class LIJFHHMGBFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x459A0);
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
