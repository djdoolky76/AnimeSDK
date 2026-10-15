#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EABDMCJDJFA;
namespace System { class Object; }

#define EABDMCJDJFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2219E0)
#define EABDMCJDJFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E221A10)
#define EABDMCJDJFA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E221A20)

	class EABDMCJDJFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EABDMCJDJFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA___C_CTOR_OFFSET))(this);
		}

		::EABDMCJDJFA* __cctor_b__28_0()
		{
			return ((::EABDMCJDJFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
