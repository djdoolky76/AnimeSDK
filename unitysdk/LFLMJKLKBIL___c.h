#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFLMJKLKBIL;
namespace System { class Object; }

#define LFLMJKLKBIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E945460)
#define LFLMJKLKBIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9454A0)
#define LFLMJKLKBIL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9454B0)

inline static constexpr unsigned int LFLMJKLKBIL___c_TypeDefinitionIndex = 33033;

	class LFLMJKLKBIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFLMJKLKBIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLMJKLKBIL___C_CTOR_OFFSET))(this);
		}

		::LFLMJKLKBIL* __cctor_b__23_0()
		{
			return ((::LFLMJKLKBIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLMJKLKBIL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
