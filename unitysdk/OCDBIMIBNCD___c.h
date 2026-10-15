#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCDBIMIBNCD;
namespace System { class Object; }

#define OCDBIMIBNCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0DF70)
#define OCDBIMIBNCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0DFB0)
#define OCDBIMIBNCD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE0DFC0)

inline static constexpr unsigned int OCDBIMIBNCD___c_TypeDefinitionIndex = 31015;

	class OCDBIMIBNCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x123E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCDBIMIBNCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD___C_CTOR_OFFSET))(this);
		}

		::OCDBIMIBNCD* __cctor_b__28_0()
		{
			return ((::OCDBIMIBNCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDBIMIBNCD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
