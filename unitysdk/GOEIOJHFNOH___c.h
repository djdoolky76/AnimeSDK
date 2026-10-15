#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOEIOJHFNOH;
namespace System { class Object; }

#define GOEIOJHFNOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0F40)
#define GOEIOJHFNOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0F80)
#define GOEIOJHFNOH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4C0F90)

inline static constexpr unsigned int GOEIOJHFNOH___c_TypeDefinitionIndex = 30385;

	class GOEIOJHFNOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOEIOJHFNOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH___C_CTOR_OFFSET))(this);
		}

		::GOEIOJHFNOH* __cctor_b__23_0()
		{
			return ((::GOEIOJHFNOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIOJHFNOH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
