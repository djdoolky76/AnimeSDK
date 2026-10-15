#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPAIKOHMLDK;
namespace System { class Object; }

#define EPAIKOHMLDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E301DE0)
#define EPAIKOHMLDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E301E20)
#define EPAIKOHMLDK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E301E30)

	class EPAIKOHMLDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPAIKOHMLDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK___C_CTOR_OFFSET))(this);
		}

		::EPAIKOHMLDK* __cctor_b__23_0()
		{
			return ((::EPAIKOHMLDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
