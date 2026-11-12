#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EINKHFKDCCD;
namespace System { class Object; }

#define EINKHFKDCCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F592090)
#define EINKHFKDCCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5920D0)
#define EINKHFKDCCD___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F5920E0)

inline static constexpr unsigned int EINKHFKDCCD___c_TypeDefinitionIndex = 35295;

	class EINKHFKDCCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EINKHFKDCCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINKHFKDCCD___C_CTOR_OFFSET))(this);
		}

		::EINKHFKDCCD* __cctor_b__58_0()
		{
			return ((::EINKHFKDCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINKHFKDCCD___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
