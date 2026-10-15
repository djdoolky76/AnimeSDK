#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIFDLLPAAKF;
namespace System { class Object; }

#define LIFDLLPAAKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96CC40)
#define LIFDLLPAAKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96CC80)
#define LIFDLLPAAKF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E96CC90)

	class LIFDLLPAAKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFDLLPAAKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF___C_CTOR_OFFSET))(this);
		}

		::LIFDLLPAAKF* __cctor_b__18_0()
		{
			return ((::LIFDLLPAAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
