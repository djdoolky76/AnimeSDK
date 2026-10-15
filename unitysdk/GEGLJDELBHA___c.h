#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEGLJDELBHA;
namespace System { class Object; }

#define GEGLJDELBHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4591E0)
#define GEGLJDELBHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E459210)
#define GEGLJDELBHA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E459220)

	class GEGLJDELBHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEGLJDELBHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGLJDELBHA___C_CTOR_OFFSET))(this);
		}

		::GEGLJDELBHA* __cctor_b__38_0()
		{
			return ((::GEGLJDELBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGLJDELBHA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
