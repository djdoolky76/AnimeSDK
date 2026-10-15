#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDAOEKOEDHO;
namespace System { class Object; }

#define HDAOEKOEDHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E546F40)
#define HDAOEKOEDHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E546F80)
#define HDAOEKOEDHO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E546F90)

	class HDAOEKOEDHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDAOEKOEDHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAOEKOEDHO___C_CTOR_OFFSET))(this);
		}

		::HDAOEKOEDHO* __cctor_b__33_0()
		{
			return ((::HDAOEKOEDHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAOEKOEDHO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
