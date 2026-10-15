#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNMCIEPEBPK;
namespace System { class Object; }

#define GNMCIEPEBPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E5F20)
#define GNMCIEPEBPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E5F60)
#define GNMCIEPEBPK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4E5F70)

	class GNMCIEPEBPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNMCIEPEBPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK___C_CTOR_OFFSET))(this);
		}

		::GNMCIEPEBPK* __cctor_b__33_0()
		{
			return ((::GNMCIEPEBPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
