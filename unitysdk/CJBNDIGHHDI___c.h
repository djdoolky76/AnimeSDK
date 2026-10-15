#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJBNDIGHHDI;
namespace System { class Object; }

#define CJBNDIGHHDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0ADCF0)
#define CJBNDIGHHDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0ADD30)
#define CJBNDIGHHDI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0ADD40)

inline static constexpr unsigned int CJBNDIGHHDI___c_TypeDefinitionIndex = 33781;

	class CJBNDIGHHDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJBNDIGHHDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI___C_CTOR_OFFSET))(this);
		}

		::CJBNDIGHHDI* __cctor_b__28_0()
		{
			return ((::CJBNDIGHHDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBNDIGHHDI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
