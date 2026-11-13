#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDLGMIIOACH;
namespace System { class Object; }

#define FDLGMIIOACH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2053A2E0)
#define FDLGMIIOACH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2053A320)
#define FDLGMIIOACH___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x2053A330)

inline static constexpr unsigned int FDLGMIIOACH___c_TypeDefinitionIndex = 29197;

	class FDLGMIIOACH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x498C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDLGMIIOACH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH___C_CTOR_OFFSET))(this);
		}

		::FDLGMIIOACH* __cctor_b__32_0()
		{
			return ((::FDLGMIIOACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
