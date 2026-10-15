#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDELOJLPFB;
namespace System { class Object; }

#define KIDELOJLPFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E856E40)
#define KIDELOJLPFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E856E80)
#define KIDELOJLPFB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E856E90)

	class KIDELOJLPFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDELOJLPFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB___C_CTOR_OFFSET))(this);
		}

		::KIDELOJLPFB* __cctor_b__23_0()
		{
			return ((::KIDELOJLPFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
