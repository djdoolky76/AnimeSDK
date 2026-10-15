#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFGLECFFFLG;
namespace System { class Object; }

#define GFGLECFFFLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46B740)
#define GFGLECFFFLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46B780)
#define GFGLECFFFLG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E46B790)

	class GFGLECFFFLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFGLECFFFLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGLECFFFLG___C_CTOR_OFFSET))(this);
		}

		::GFGLECFFFLG* __cctor_b__43_0()
		{
			return ((::GFGLECFFFLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGLECFFFLG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
