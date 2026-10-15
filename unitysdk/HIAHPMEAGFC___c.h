#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAHPMEAGFC;
namespace System { class Object; }

#define HIAHPMEAGFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58EA80)
#define HIAHPMEAGFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58EAB0)
#define HIAHPMEAGFC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E58EAC0)

	class HIAHPMEAGFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAHPMEAGFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC___C_CTOR_OFFSET))(this);
		}

		::HIAHPMEAGFC* __cctor_b__23_0()
		{
			return ((::HIAHPMEAGFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAHPMEAGFC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
