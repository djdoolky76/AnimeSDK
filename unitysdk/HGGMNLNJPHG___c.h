#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGGMNLNJPHG;
namespace System { class Object; }

#define HGGMNLNJPHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57A0C0)
#define HGGMNLNJPHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57A100)
#define HGGMNLNJPHG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E57A110)

	class HGGMNLNJPHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x373C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGGMNLNJPHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGMNLNJPHG___C_CTOR_OFFSET))(this);
		}

		::HGGMNLNJPHG* __cctor_b__23_0()
		{
			return ((::HGGMNLNJPHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGMNLNJPHG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
