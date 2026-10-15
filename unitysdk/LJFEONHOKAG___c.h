#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFEONHOKAG;
namespace System { class Object; }

#define LJFEONHOKAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94E140)
#define LJFEONHOKAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94E180)
#define LJFEONHOKAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E94E190)

inline static constexpr unsigned int LJFEONHOKAG___c_TypeDefinitionIndex = 35108;

	class LJFEONHOKAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x386D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFEONHOKAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG___C_CTOR_OFFSET))(this);
		}

		::LJFEONHOKAG* __cctor_b__23_0()
		{
			return ((::LJFEONHOKAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
