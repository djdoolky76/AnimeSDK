#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCHDLMIOOIP;
namespace System { class Object; }

#define HCHDLMIOOIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53EF40)
#define HCHDLMIOOIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53EF80)
#define HCHDLMIOOIP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E53EF90)

	class HCHDLMIOOIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x302D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCHDLMIOOIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP___C_CTOR_OFFSET))(this);
		}

		::HCHDLMIOOIP* __cctor_b__53_0()
		{
			return ((::HCHDLMIOOIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
