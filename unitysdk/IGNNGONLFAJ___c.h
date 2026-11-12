#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGNNGONLFAJ;
namespace System { class Object; }

#define IGNNGONLFAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F974740)
#define IGNNGONLFAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F974780)
#define IGNNGONLFAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F974790)

inline static constexpr unsigned int IGNNGONLFAJ___c_TypeDefinitionIndex = 35787;

	class IGNNGONLFAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ACE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGNNGONLFAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ___C_CTOR_OFFSET))(this);
		}

		::IGNNGONLFAJ* __cctor_b__23_0()
		{
			return ((::IGNNGONLFAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
