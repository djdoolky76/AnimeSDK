#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBACEFIACOI;
namespace System { class Object; }

#define HBACEFIACOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50C570)
#define HBACEFIACOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50C5B0)
#define HBACEFIACOI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E50C5C0)

	class HBACEFIACOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DCA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBACEFIACOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI___C_CTOR_OFFSET))(this);
		}

		::HBACEFIACOI* __cctor_b__23_0()
		{
			return ((::HBACEFIACOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
