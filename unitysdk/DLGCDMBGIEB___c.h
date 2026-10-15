#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLGCDMBGIEB;
namespace System { class Object; }

#define DLGCDMBGIEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E72E0)
#define DLGCDMBGIEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7320)
#define DLGCDMBGIEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1E7330)

	class DLGCDMBGIEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLGCDMBGIEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB___C_CTOR_OFFSET))(this);
		}

		::DLGCDMBGIEB* __cctor_b__23_0()
		{
			return ((::DLGCDMBGIEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
