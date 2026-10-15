#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGJKIDOBEAL;
namespace System { class Object; }

#define CGJKIDOBEAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AFAC0)
#define CGJKIDOBEAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AFAF0)
#define CGJKIDOBEAL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0AFB00)

	class CGJKIDOBEAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGJKIDOBEAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL___C_CTOR_OFFSET))(this);
		}

		::CGJKIDOBEAL* __cctor_b__18_0()
		{
			return ((::CGJKIDOBEAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJKIDOBEAL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
