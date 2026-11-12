#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOLJJHMLHBH;
namespace System { class Object; }

#define OOLJJHMLHBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1A2990)
#define OOLJJHMLHBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A29D0)
#define OOLJJHMLHBH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F1A29E0)

inline static constexpr unsigned int OOLJJHMLHBH___c_TypeDefinitionIndex = 34664;

	class OOLJJHMLHBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x284F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOLJJHMLHBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLJJHMLHBH___C_CTOR_OFFSET))(this);
		}

		::OOLJJHMLHBH* __cctor_b__53_0()
		{
			return ((::OOLJJHMLHBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLJJHMLHBH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
