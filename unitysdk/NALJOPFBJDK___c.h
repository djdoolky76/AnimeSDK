#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NALJOPFBJDK;
namespace System { class Object; }

#define NALJOPFBJDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC61E0)
#define NALJOPFBJDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6220)
#define NALJOPFBJDK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAC6230)

	class NALJOPFBJDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALJOPFBJDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK___C_CTOR_OFFSET))(this);
		}

		::NALJOPFBJDK* __cctor_b__28_0()
		{
			return ((::NALJOPFBJDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALJOPFBJDK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
