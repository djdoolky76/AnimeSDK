#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCFMJCBJGMN;
namespace System { class Object; }

#define KCFMJCBJGMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F6210)
#define KCFMJCBJGMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F6250)
#define KCFMJCBJGMN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7F6260)

	class KCFMJCBJGMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCFMJCBJGMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN___C_CTOR_OFFSET))(this);
		}

		::KCFMJCBJGMN* __cctor_b__23_0()
		{
			return ((::KCFMJCBJGMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
