#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIEBAAFIPDA;
namespace System { class Object; }

#define NIEBAAFIPDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABEED0)
#define NIEBAAFIPDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABEF00)
#define NIEBAAFIPDA___C___CCTOR_B__118_0_OFFSET UNITYSDK_OFFSET(0x1EABEF10)

inline static constexpr unsigned int NIEBAAFIPDA___c_TypeDefinitionIndex = 35439;

	class NIEBAAFIPDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x624F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEBAAFIPDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEBAAFIPDA___C_CTOR_OFFSET))(this);
		}

		::NIEBAAFIPDA* __cctor_b__118_0()
		{
			return ((::NIEBAAFIPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEBAAFIPDA___C___CCTOR_B__118_0_OFFSET))(this);
		}

	};
