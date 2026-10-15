#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMEFDMEGEON;
namespace System { class Object; }

#define IMEFDMEGEON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B6200)
#define IMEFDMEGEON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B6240)
#define IMEFDMEGEON___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6B6250)

	class IMEFDMEGEON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMEFDMEGEON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON___C_CTOR_OFFSET))(this);
		}

		::IMEFDMEGEON* __cctor_b__18_0()
		{
			return ((::IMEFDMEGEON*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
