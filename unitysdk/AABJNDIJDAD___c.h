#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABJNDIJDAD;
namespace System { class Object; }

#define AABJNDIJDAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20305C40)
#define AABJNDIJDAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20305C80)
#define AABJNDIJDAD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20305C90)

inline static constexpr unsigned int AABJNDIJDAD___c_TypeDefinitionIndex = 32099;

	class AABJNDIJDAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x311C0);
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
