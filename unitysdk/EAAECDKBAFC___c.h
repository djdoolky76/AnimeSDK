#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAAECDKBAFC;
namespace System { class Object; }

#define EAAECDKBAFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203E2110)
#define EAAECDKBAFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203E2150)
#define EAAECDKBAFC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203E2160)

inline static constexpr unsigned int EAAECDKBAFC___c_TypeDefinitionIndex = 29696;

	class EAAECDKBAFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAAECDKBAFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC___C_CTOR_OFFSET))(this);
		}

		::EAAECDKBAFC* __cctor_b__28_0()
		{
			return ((::EAAECDKBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAECDKBAFC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
