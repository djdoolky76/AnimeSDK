#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJDHNPPCCD;
namespace System { class Object; }

#define CEJDHNPPCCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204CC9B0)
#define CEJDHNPPCCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204CC9F0)
#define CEJDHNPPCCD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204CCA00)

inline static constexpr unsigned int CEJDHNPPCCD___c_TypeDefinitionIndex = 27081;

	class CEJDHNPPCCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJDHNPPCCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJDHNPPCCD___C_CTOR_OFFSET))(this);
		}

		::CEJDHNPPCCD* __cctor_b__23_0()
		{
			return ((::CEJDHNPPCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJDHNPPCCD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
