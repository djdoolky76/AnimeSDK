#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class GNHMFIJAGIP;
namespace System { class Object; }

#define GNHMFIJAGIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0EF0)
#define GNHMFIJAGIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0F20)
#define GNHMFIJAGIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4E0F30)
#define GNHMFIJAGIP___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1E4E0F80)
#define GNHMFIJAGIP___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1E4E0F90)

inline static constexpr unsigned int GNHMFIJAGIP___c_TypeDefinitionIndex = 31291;

	class GNHMFIJAGIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNHMFIJAGIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP___C_CTOR_OFFSET))(this);
		}

		::GNHMFIJAGIP* __cctor_b__23_0()
		{
			return ((::GNHMFIJAGIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHMFIJAGIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__23_1(::FJPMJPEKLJL a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + GNHMFIJAGIP___C___CCTOR_B__23_1_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL __cctor_b__23_2(::System::Int32 a1)
		{
			return ((::FJPMJPEKLJL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNHMFIJAGIP___C___CCTOR_B__23_2_OFFSET))(this, a1);
		}

	};
