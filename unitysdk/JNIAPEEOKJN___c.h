#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNIAPEEOKJN;
namespace System { class Object; }

#define JNIAPEEOKJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E798240)
#define JNIAPEEOKJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E798280)
#define JNIAPEEOKJN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E798290)

	class JNIAPEEOKJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNIAPEEOKJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIAPEEOKJN___C_CTOR_OFFSET))(this);
		}

		::JNIAPEEOKJN* __cctor_b__18_0()
		{
			return ((::JNIAPEEOKJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIAPEEOKJN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
