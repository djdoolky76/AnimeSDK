#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDDBFAIFCGK;
namespace System { class Object; }

#define HDDBFAIFCGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E548430)
#define HDDBFAIFCGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E548460)
#define HDDBFAIFCGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E548470)

	class HDDBFAIFCGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDBFAIFCGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK___C_CTOR_OFFSET))(this);
		}

		::HDDBFAIFCGK* __cctor_b__28_0()
		{
			return ((::HDDBFAIFCGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
