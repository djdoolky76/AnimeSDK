#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDPFJPANHJC;
namespace System { class Object; }

#define GDPFJPANHJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E450A10)
#define GDPFJPANHJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E450A40)
#define GDPFJPANHJC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E450A50)

inline static constexpr unsigned int GDPFJPANHJC___c_TypeDefinitionIndex = 25953;

	class GDPFJPANHJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDPFJPANHJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPFJPANHJC___C_CTOR_OFFSET))(this);
		}

		::GDPFJPANHJC* __cctor_b__38_0()
		{
			return ((::GDPFJPANHJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPFJPANHJC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
