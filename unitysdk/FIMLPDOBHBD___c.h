#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMLPDOBHBD;
namespace System { class Object; }

#define FIMLPDOBHBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39CD80)
#define FIMLPDOBHBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39CDC0)
#define FIMLPDOBHBD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E39CDD0)

	class FIMLPDOBHBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x603B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMLPDOBHBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD___C_CTOR_OFFSET))(this);
		}

		::FIMLPDOBHBD* __cctor_b__33_0()
		{
			return ((::FIMLPDOBHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPDOBHBD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
