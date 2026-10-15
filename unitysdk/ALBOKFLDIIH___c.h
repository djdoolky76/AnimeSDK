#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALBOKFLDIIH;
namespace System { class Object; }

#define ALBOKFLDIIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D4AC0)
#define ALBOKFLDIIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D4B00)
#define ALBOKFLDIIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3D4B10)

	class ALBOKFLDIIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBOKFLDIIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH___C_CTOR_OFFSET))(this);
		}

		::ALBOKFLDIIH* __cctor_b__28_0()
		{
			return ((::ALBOKFLDIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOKFLDIIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
