#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLLLAAEJOBP;
namespace System { class Object; }

#define NLLLAAEJOBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB67D40)
#define NLLLAAEJOBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB67D70)
#define NLLLAAEJOBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB67D80)

	class NLLLAAEJOBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLLLAAEJOBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP___C_CTOR_OFFSET))(this);
		}

		::NLLLAAEJOBP* __cctor_b__28_0()
		{
			return ((::NLLLAAEJOBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
