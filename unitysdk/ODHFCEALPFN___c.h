#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODHFCEALPFN;
namespace System { class Object; }

#define ODHFCEALPFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEFF40)
#define ODHFCEALPFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEFF80)
#define ODHFCEALPFN___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DDEFF90)

inline static constexpr unsigned int ODHFCEALPFN___c_TypeDefinitionIndex = 31563;

	class ODHFCEALPFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x123E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHFCEALPFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHFCEALPFN___C_CTOR_OFFSET))(this);
		}

		::ODHFCEALPFN* __cctor_b__53_0()
		{
			return ((::ODHFCEALPFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHFCEALPFN___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
