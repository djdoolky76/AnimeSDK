#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHMGCCNGECJ;
namespace System { class Object; }

#define HHMGCCNGECJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58B780)
#define HHMGCCNGECJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58B7B0)
#define HHMGCCNGECJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E58B7C0)

	class HHMGCCNGECJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHMGCCNGECJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ___C_CTOR_OFFSET))(this);
		}

		::HHMGCCNGECJ* __cctor_b__38_0()
		{
			return ((::HHMGCCNGECJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
