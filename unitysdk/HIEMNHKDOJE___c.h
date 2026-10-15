#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEMNHKDOJE;
namespace System { class Object; }

#define HIEMNHKDOJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E593E60)
#define HIEMNHKDOJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E593EA0)
#define HIEMNHKDOJE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E593EB0)

	class HIEMNHKDOJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEMNHKDOJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE___C_CTOR_OFFSET))(this);
		}

		::HIEMNHKDOJE* __cctor_b__23_0()
		{
			return ((::HIEMNHKDOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
