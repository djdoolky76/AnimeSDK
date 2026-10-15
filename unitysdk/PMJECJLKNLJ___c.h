#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMJECJLKNLJ;
namespace System { class Object; }

#define PMJECJLKNLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFACA40)
#define PMJECJLKNLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFACA80)
#define PMJECJLKNLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFACA90)

	class PMJECJLKNLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMJECJLKNLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ___C_CTOR_OFFSET))(this);
		}

		::PMJECJLKNLJ* __cctor_b__23_0()
		{
			return ((::PMJECJLKNLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJECJLKNLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
