#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFBFABHFCOG;
namespace System { class Object; }

#define JFBFABHFCOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E722A20)
#define JFBFABHFCOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E722A60)
#define JFBFABHFCOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E722A70)

	class JFBFABHFCOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBFABHFCOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG___C_CTOR_OFFSET))(this);
		}

		::JFBFABHFCOG* __cctor_b__28_0()
		{
			return ((::JFBFABHFCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
