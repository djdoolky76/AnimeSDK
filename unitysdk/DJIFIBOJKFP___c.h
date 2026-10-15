#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJIFIBOJKFP;
namespace System { class Object; }

#define DJIFIBOJKFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1CACD0)
#define DJIFIBOJKFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CAD10)
#define DJIFIBOJKFP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1CAD20)

	class DJIFIBOJKFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJIFIBOJKFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIFIBOJKFP___C_CTOR_OFFSET))(this);
		}

		::DJIFIBOJKFP* __cctor_b__48_0()
		{
			return ((::DJIFIBOJKFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIFIBOJKFP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
