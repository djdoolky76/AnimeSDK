#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANKFJAABBFK;
namespace System { class Object; }

#define ANKFJAABBFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F920D60)
#define ANKFJAABBFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F920DA0)
#define ANKFJAABBFK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F920DB0)

inline static constexpr unsigned int ANKFJAABBFK___c_TypeDefinitionIndex = 27129;

	class ANKFJAABBFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43980);
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
