#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJNDCNIJBEI;
namespace System { class Object; }

#define CJNDCNIJBEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E50F0)
#define CJNDCNIJBEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E5130)
#define CJNDCNIJBEI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0E5140)

	class CJNDCNIJBEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJNDCNIJBEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI___C_CTOR_OFFSET))(this);
		}

		::CJNDCNIJBEI* __cctor_b__28_0()
		{
			return ((::CJNDCNIJBEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDCNIJBEI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
