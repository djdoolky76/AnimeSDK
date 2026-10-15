#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHLAFMBONNK;
namespace System { class Object; }

#define KHLAFMBONNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E849050)
#define KHLAFMBONNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E849090)
#define KHLAFMBONNK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8490A0)

	class KHLAFMBONNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHLAFMBONNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK___C_CTOR_OFFSET))(this);
		}

		::KHLAFMBONNK* __cctor_b__18_0()
		{
			return ((::KHLAFMBONNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
