#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHLEKKNDBBE.h"
#include "unitysdk/System/Object.h"
class GJDACOJFAGG;
namespace System { class Object; }

#define GJDACOJFAGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A7270)
#define GJDACOJFAGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A72A0)
#define GJDACOJFAGG___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1E4A72B0)
#define GJDACOJFAGG___C___CCTOR_B__88_1_OFFSET UNITYSDK_OFFSET(0x1E4A72E0)
#define GJDACOJFAGG___C___CCTOR_B__88_2_OFFSET UNITYSDK_OFFSET(0x1E4A72F0)

	class GJDACOJFAGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJDACOJFAGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDACOJFAGG___C_CTOR_OFFSET))(this);
		}

		::GJDACOJFAGG* __cctor_b__88_0()
		{
			return ((::GJDACOJFAGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDACOJFAGG___C___CCTOR_B__88_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__88_1(::FHLEKKNDBBE a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FHLEKKNDBBE))((::PBYTE)hIl2Cpp + GJDACOJFAGG___C___CCTOR_B__88_1_OFFSET))(this, a1);
		}

		::FHLEKKNDBBE __cctor_b__88_2(::System::Int32 a1)
		{
			return ((::FHLEKKNDBBE(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJDACOJFAGG___C___CCTOR_B__88_2_OFFSET))(this, a1);
		}

	};
