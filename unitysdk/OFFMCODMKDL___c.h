#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFFMCODMKDL;
namespace System { class Object; }

#define OFFMCODMKDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE42F70)
#define OFFMCODMKDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE42FB0)
#define OFFMCODMKDL___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1DE42FC0)

	class OFFMCODMKDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFFMCODMKDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL___C_CTOR_OFFSET))(this);
		}

		::OFFMCODMKDL* __cctor_b__44_0()
		{
			return ((::OFFMCODMKDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
