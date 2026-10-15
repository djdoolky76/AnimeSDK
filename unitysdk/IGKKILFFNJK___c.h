#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGKKILFFNJK;
namespace System { class Object; }

#define IGKKILFFNJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64FD00)
#define IGKKILFFNJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64FD40)
#define IGKKILFFNJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E64FD50)

	class IGKKILFFNJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGKKILFFNJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK___C_CTOR_OFFSET))(this);
		}

		::IGKKILFFNJK* __cctor_b__28_0()
		{
			return ((::IGKKILFFNJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKKILFFNJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
