#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDAIHHGGPIJ;
namespace System { class Object; }

#define IDAIHHGGPIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E627C40)
#define IDAIHHGGPIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E627C80)
#define IDAIHHGGPIJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E627C90)

	class IDAIHHGGPIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDAIHHGGPIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ___C_CTOR_OFFSET))(this);
		}

		::IDAIHHGGPIJ* __cctor_b__23_0()
		{
			return ((::IDAIHHGGPIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
