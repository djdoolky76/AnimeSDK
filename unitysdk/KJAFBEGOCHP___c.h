#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAFBEGOCHP;
namespace System { class Object; }

#define KJAFBEGOCHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8660E0)
#define KJAFBEGOCHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E866110)
#define KJAFBEGOCHP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E866120)

	class KJAFBEGOCHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAFBEGOCHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP___C_CTOR_OFFSET))(this);
		}

		::KJAFBEGOCHP* __cctor_b__48_0()
		{
			return ((::KJAFBEGOCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
