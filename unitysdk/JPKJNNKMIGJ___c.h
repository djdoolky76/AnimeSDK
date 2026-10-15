#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPKJNNKMIGJ;
namespace System { class Object; }

#define JPKJNNKMIGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D8960)
#define JPKJNNKMIGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D89A0)
#define JPKJNNKMIGJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7D89B0)

	class JPKJNNKMIGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPKJNNKMIGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKJNNKMIGJ___C_CTOR_OFFSET))(this);
		}

		::JPKJNNKMIGJ* __cctor_b__43_0()
		{
			return ((::JPKJNNKMIGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKJNNKMIGJ___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
