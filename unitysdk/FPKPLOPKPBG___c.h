#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPKPLOPKPBG;
namespace System { class Object; }

#define FPKPLOPKPBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40C360)
#define FPKPLOPKPBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40C3A0)
#define FPKPLOPKPBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E40C3B0)

	class FPKPLOPKPBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x697A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPKPLOPKPBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG___C_CTOR_OFFSET))(this);
		}

		::FPKPLOPKPBG* __cctor_b__23_0()
		{
			return ((::FPKPLOPKPBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKPLOPKPBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
