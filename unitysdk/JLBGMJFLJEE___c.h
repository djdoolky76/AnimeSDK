#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBGMJFLJEE;
namespace System { class Object; }

#define JLBGMJFLJEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E774D70)
#define JLBGMJFLJEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E774DB0)
#define JLBGMJFLJEE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E774DC0)

	class JLBGMJFLJEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C_CTOR_OFFSET))(this);
		}

		::JLBGMJFLJEE* __cctor_b__38_0()
		{
			return ((::JLBGMJFLJEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
