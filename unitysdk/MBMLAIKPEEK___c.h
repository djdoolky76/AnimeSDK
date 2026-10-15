#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBMLAIKPEEK;
namespace System { class Object; }

#define MBMLAIKPEEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EBA90)
#define MBMLAIKPEEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EBAD0)
#define MBMLAIKPEEK___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E9EBAE0)

	class MBMLAIKPEEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBMLAIKPEEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMLAIKPEEK___C_CTOR_OFFSET))(this);
		}

		::MBMLAIKPEEK* __cctor_b__68_0()
		{
			return ((::MBMLAIKPEEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMLAIKPEEK___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
