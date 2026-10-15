#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCMFAIBMOHB;
namespace System { class Object; }

#define KCMFAIBMOHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7FAD60)
#define KCMFAIBMOHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FADA0)
#define KCMFAIBMOHB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7FADB0)

	class KCMFAIBMOHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x103D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCMFAIBMOHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB___C_CTOR_OFFSET))(this);
		}

		::KCMFAIBMOHB* __cctor_b__23_0()
		{
			return ((::KCMFAIBMOHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMFAIBMOHB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
