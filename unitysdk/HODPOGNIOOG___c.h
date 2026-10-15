#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HODPOGNIOOG;
namespace System { class Object; }

#define HODPOGNIOOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7820)
#define HODPOGNIOOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7860)
#define HODPOGNIOOG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5E7870)

	class HODPOGNIOOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HODPOGNIOOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG___C_CTOR_OFFSET))(this);
		}

		::HODPOGNIOOG* __cctor_b__18_0()
		{
			return ((::HODPOGNIOOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODPOGNIOOG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
