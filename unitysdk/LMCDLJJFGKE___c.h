#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMCDLJJFGKE;
namespace System { class Object; }

#define LMCDLJJFGKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2920)
#define LMCDLJJFGKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2960)
#define LMCDLJJFGKE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9A2970)

	class LMCDLJJFGKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMCDLJJFGKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE___C_CTOR_OFFSET))(this);
		}

		::LMCDLJJFGKE* __cctor_b__33_0()
		{
			return ((::LMCDLJJFGKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
