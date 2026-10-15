#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIEPFAIPADI;
namespace System { class Object; }

#define GIEPFAIPADI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4958F0)
#define GIEPFAIPADI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E495930)
#define GIEPFAIPADI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E495940)

	class GIEPFAIPADI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIEPFAIPADI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI___C_CTOR_OFFSET))(this);
		}

		::GIEPFAIPADI* __cctor_b__23_0()
		{
			return ((::GIEPFAIPADI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEPFAIPADI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
