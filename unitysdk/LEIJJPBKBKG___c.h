#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEIJJPBKBKG;
namespace System { class Object; }

#define LEIJJPBKBKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9329B0)
#define LEIJJPBKBKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9329F0)
#define LEIJJPBKBKG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E932A00)

inline static constexpr unsigned int LEIJJPBKBKG___c_TypeDefinitionIndex = 28609;

	class LEIJJPBKBKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEIJJPBKBKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG___C_CTOR_OFFSET))(this);
		}

		::LEIJJPBKBKG* __cctor_b__28_0()
		{
			return ((::LEIJJPBKBKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIJJPBKBKG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
