#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICDPPOGHND;
namespace System { class Object; }

#define BICDPPOGHND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE00540)
#define BICDPPOGHND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE00580)
#define BICDPPOGHND___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE00590)

inline static constexpr unsigned int BICDPPOGHND___c_TypeDefinitionIndex = 32361;

	class BICDPPOGHND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICDPPOGHND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND___C_CTOR_OFFSET))(this);
		}

		::BICDPPOGHND* __cctor_b__23_0()
		{
			return ((::BICDPPOGHND*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICDPPOGHND___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
