#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJMCEEBCOG;
namespace System { class Object; }

#define CEJMCEEBCOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0965E0)
#define CEJMCEEBCOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E096610)
#define CEJMCEEBCOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E096620)

	class CEJMCEEBCOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x123D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJMCEEBCOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG___C_CTOR_OFFSET))(this);
		}

		::CEJMCEEBCOG* __cctor_b__28_0()
		{
			return ((::CEJMCEEBCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMCEEBCOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
