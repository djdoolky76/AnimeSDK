#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDOJADMFGKF;
namespace System { class Object; }

#define IDOJADMFGKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6050A0)
#define IDOJADMFGKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6050E0)
#define IDOJADMFGKF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6050F0)

inline static constexpr unsigned int IDOJADMFGKF___c_TypeDefinitionIndex = 29528;

	class IDOJADMFGKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDOJADMFGKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF___C_CTOR_OFFSET))(this);
		}

		::IDOJADMFGKF* __cctor_b__23_0()
		{
			return ((::IDOJADMFGKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
