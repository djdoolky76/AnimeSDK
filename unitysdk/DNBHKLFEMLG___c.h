#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNBHKLFEMLG;
namespace System { class Object; }

#define DNBHKLFEMLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F3940)
#define DNBHKLFEMLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F3980)
#define DNBHKLFEMLG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E1F3990)

	class DNBHKLFEMLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNBHKLFEMLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBHKLFEMLG___C_CTOR_OFFSET))(this);
		}

		::DNBHKLFEMLG* __cctor_b__18_0()
		{
			return ((::DNBHKLFEMLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBHKLFEMLG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
