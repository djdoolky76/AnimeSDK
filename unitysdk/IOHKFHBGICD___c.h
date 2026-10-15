#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOHKFHBGICD;
namespace System { class Object; }

#define IOHKFHBGICD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A8DF0)
#define IOHKFHBGICD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A8E30)
#define IOHKFHBGICD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6A8E40)

inline static constexpr unsigned int IOHKFHBGICD___c_TypeDefinitionIndex = 32921;

	class IOHKFHBGICD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOHKFHBGICD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHKFHBGICD___C_CTOR_OFFSET))(this);
		}

		::IOHKFHBGICD* __cctor_b__23_0()
		{
			return ((::IOHKFHBGICD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHKFHBGICD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
