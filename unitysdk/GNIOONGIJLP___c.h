#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNIOONGIJLP;
namespace System { class Object; }

#define GNIOONGIJLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E25C0)
#define GNIOONGIJLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E2600)
#define GNIOONGIJLP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4E2610)

	class GNIOONGIJLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x237D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNIOONGIJLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP___C_CTOR_OFFSET))(this);
		}

		::GNIOONGIJLP* __cctor_b__38_0()
		{
			return ((::GNIOONGIJLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIOONGIJLP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
