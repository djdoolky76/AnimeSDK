#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMFDNFHHBD;
namespace System { class Object; }

#define JOMFDNFHHBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20014340)
#define JOMFDNFHHBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20014370)
#define JOMFDNFHHBD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20014380)

inline static constexpr unsigned int JOMFDNFHHBD___c_TypeDefinitionIndex = 31590;

	class JOMFDNFHHBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x683D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMFDNFHHBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD___C_CTOR_OFFSET))(this);
		}

		::JOMFDNFHHBD* __cctor_b__33_0()
		{
			return ((::JOMFDNFHHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
