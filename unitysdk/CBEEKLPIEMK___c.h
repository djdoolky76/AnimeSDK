#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEEKLPIEMK;
namespace System { class Object; }

#define CBEEKLPIEMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20359B20)
#define CBEEKLPIEMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20359B60)
#define CBEEKLPIEMK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20359B70)

inline static constexpr unsigned int CBEEKLPIEMK___c_TypeDefinitionIndex = 30179;

	class CBEEKLPIEMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBEEKLPIEMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK___C_CTOR_OFFSET))(this);
		}

		::CBEEKLPIEMK* __cctor_b__28_0()
		{
			return ((::CBEEKLPIEMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
