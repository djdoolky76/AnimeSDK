#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPOGMNFCMNN;
namespace System { class Object; }

#define DPOGMNFCMNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4FFF60)
#define DPOGMNFCMNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FFFA0)
#define DPOGMNFCMNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4FFFB0)

inline static constexpr unsigned int DPOGMNFCMNN___c_TypeDefinitionIndex = 27199;

	class DPOGMNFCMNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOGMNFCMNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN___C_CTOR_OFFSET))(this);
		}

		::DPOGMNFCMNN* __cctor_b__28_0()
		{
			return ((::DPOGMNFCMNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGMNFCMNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
