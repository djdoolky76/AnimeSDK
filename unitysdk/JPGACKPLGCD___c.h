#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPGACKPLGCD;
namespace System { class Object; }

#define JPGACKPLGCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2F30)
#define JPGACKPLGCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2F60)
#define JPGACKPLGCD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7D2F70)

	class JPGACKPLGCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPGACKPLGCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD___C_CTOR_OFFSET))(this);
		}

		::JPGACKPLGCD* __cctor_b__33_0()
		{
			return ((::JPGACKPLGCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGACKPLGCD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
