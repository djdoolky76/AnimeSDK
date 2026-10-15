#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIFJKCEJFIP;
namespace System { class Object; }

#define NIFJKCEJFIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF300)
#define NIFJKCEJFIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF340)
#define NIFJKCEJFIP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAFF350)

inline static constexpr unsigned int NIFJKCEJFIP___c_TypeDefinitionIndex = 32785;

	class NIFJKCEJFIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x653B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFJKCEJFIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP___C_CTOR_OFFSET))(this);
		}

		::NIFJKCEJFIP* __cctor_b__28_0()
		{
			return ((::NIFJKCEJFIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFJKCEJFIP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
