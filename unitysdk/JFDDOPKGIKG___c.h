#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFDDOPKGIKG;
namespace System { class Object; }

#define JFDDOPKGIKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E727A50)
#define JFDDOPKGIKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E727A90)
#define JFDDOPKGIKG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E727AA0)

	class JFDDOPKGIKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDDOPKGIKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG___C_CTOR_OFFSET))(this);
		}

		::JFDDOPKGIKG* __cctor_b__28_0()
		{
			return ((::JFDDOPKGIKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
