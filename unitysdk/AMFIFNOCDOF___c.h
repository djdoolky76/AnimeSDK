#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFIFNOCDOF;
namespace System { class Object; }

#define AMFIFNOCDOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5213B0)
#define AMFIFNOCDOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5213F0)
#define AMFIFNOCDOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E521400)

	class AMFIFNOCDOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMFIFNOCDOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF___C_CTOR_OFFSET))(this);
		}

		::AMFIFNOCDOF* __cctor_b__23_0()
		{
			return ((::AMFIFNOCDOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
