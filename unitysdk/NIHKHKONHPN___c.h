#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIHKHKONHPN;
namespace System { class Object; }

#define NIHKHKONHPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB028F0)
#define NIHKHKONHPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB02920)
#define NIHKHKONHPN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB02930)

inline static constexpr unsigned int NIHKHKONHPN___c_TypeDefinitionIndex = 33133;

	class NIHKHKONHPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIHKHKONHPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN___C_CTOR_OFFSET))(this);
		}

		::NIHKHKONHPN* __cctor_b__38_0()
		{
			return ((::NIHKHKONHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHKHKONHPN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
