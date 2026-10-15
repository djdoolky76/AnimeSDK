#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJHNFICDIM;
namespace System { class Object; }

#define CJJHNFICDIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E17D0)
#define CJJHNFICDIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E1800)
#define CJJHNFICDIM___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E0E1810)

	class CJJHNFICDIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJJHNFICDIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJHNFICDIM___C_CTOR_OFFSET))(this);
		}

		::CJJHNFICDIM* __cctor_b__53_0()
		{
			return ((::CJJHNFICDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJHNFICDIM___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
