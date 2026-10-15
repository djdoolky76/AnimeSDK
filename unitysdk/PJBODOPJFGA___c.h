#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJBODOPJFGA;
namespace System { class Object; }

#define PJBODOPJFGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF47190)
#define PJBODOPJFGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF471C0)
#define PJBODOPJFGA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF471D0)

inline static constexpr unsigned int PJBODOPJFGA___c_TypeDefinitionIndex = 27454;

	class PJBODOPJFGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBODOPJFGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA___C_CTOR_OFFSET))(this);
		}

		::PJBODOPJFGA* __cctor_b__28_0()
		{
			return ((::PJBODOPJFGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBODOPJFGA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
