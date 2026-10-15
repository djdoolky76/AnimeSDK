#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKLKCKNBHCI;
namespace System { class Object; }

#define JKLKCKNBHCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E742130)
#define JKLKCKNBHCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E742170)
#define JKLKCKNBHCI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E742180)

inline static constexpr unsigned int JKLKCKNBHCI___c_TypeDefinitionIndex = 27185;

	class JKLKCKNBHCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKLKCKNBHCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI___C_CTOR_OFFSET))(this);
		}

		::JKLKCKNBHCI* __cctor_b__18_0()
		{
			return ((::JKLKCKNBHCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
