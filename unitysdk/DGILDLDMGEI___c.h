#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGILDLDMGEI;
namespace System { class Object; }

#define DGILDLDMGEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AE770)
#define DGILDLDMGEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AE7B0)
#define DGILDLDMGEI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E1AE7C0)

	class DGILDLDMGEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGILDLDMGEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI___C_CTOR_OFFSET))(this);
		}

		::DGILDLDMGEI* __cctor_b__18_0()
		{
			return ((::DGILDLDMGEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGILDLDMGEI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
