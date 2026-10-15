#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFEKFHLDLPK;
namespace System { class Object; }

#define JFEKFHLDLPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E728560)
#define JFEKFHLDLPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E728590)
#define JFEKFHLDLPK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7285A0)

	class JFEKFHLDLPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFEKFHLDLPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK___C_CTOR_OFFSET))(this);
		}

		::JFEKFHLDLPK* __cctor_b__28_0()
		{
			return ((::JFEKFHLDLPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
