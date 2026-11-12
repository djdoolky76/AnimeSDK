#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJGAHLDOIIG;
namespace System { class Object; }

#define PJGAHLDOIIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F22BBC0)
#define PJGAHLDOIIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F22BC00)
#define PJGAHLDOIIG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F22BC10)

inline static constexpr unsigned int PJGAHLDOIIG___c_TypeDefinitionIndex = 31031;

	class PJGAHLDOIIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJGAHLDOIIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG___C_CTOR_OFFSET))(this);
		}

		::PJGAHLDOIIG* __cctor_b__28_0()
		{
			return ((::PJGAHLDOIIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
