#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJONBPINLJJ;
namespace System { class Object; }

#define JJONBPINLJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7660B0)
#define JJONBPINLJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7660F0)
#define JJONBPINLJJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E766100)

	class JJONBPINLJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJONBPINLJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ___C_CTOR_OFFSET))(this);
		}

		::JJONBPINLJJ* __cctor_b__18_0()
		{
			return ((::JJONBPINLJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONBPINLJJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
