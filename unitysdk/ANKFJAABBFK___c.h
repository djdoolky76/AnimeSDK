#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANKFJAABBFK;
namespace System { class Object; }

#define ANKFJAABBFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6632C0)
#define ANKFJAABBFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E663300)
#define ANKFJAABBFK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E663310)

inline static constexpr unsigned int ANKFJAABBFK___c_TypeDefinitionIndex = 26598;

	class ANKFJAABBFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANKFJAABBFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK___C_CTOR_OFFSET))(this);
		}

		::ANKFJAABBFK* __cctor_b__28_0()
		{
			return ((::ANKFJAABBFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKFJAABBFK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
