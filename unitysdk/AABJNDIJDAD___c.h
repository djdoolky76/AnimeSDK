#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABJNDIJDAD;
namespace System { class Object; }

#define AABJNDIJDAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFB8470)
#define AABJNDIJDAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB84B0)
#define AABJNDIJDAD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EFB84C0)

inline static constexpr unsigned int AABJNDIJDAD___c_TypeDefinitionIndex = 32099;

	class AABJNDIJDAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x311B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABJNDIJDAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD___C_CTOR_OFFSET))(this);
		}

		::AABJNDIJDAD* __cctor_b__23_0()
		{
			return ((::AABJNDIJDAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
