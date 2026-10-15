#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJOBHGFOGHP;
namespace System { class Object; }

#define JJOBHGFOGHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E764150)
#define JJOBHGFOGHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E764190)
#define JJOBHGFOGHP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7641A0)

	class JJOBHGFOGHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJOBHGFOGHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOBHGFOGHP___C_CTOR_OFFSET))(this);
		}

		::JJOBHGFOGHP* __cctor_b__43_0()
		{
			return ((::JJOBHGFOGHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOBHGFOGHP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
