#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOEBAOEFMDC;
namespace System { class Object; }

#define LOEBAOEFMDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BBB30)
#define LOEBAOEFMDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BBB70)
#define LOEBAOEFMDC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9BBB80)

	class LOEBAOEFMDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x515A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOEBAOEFMDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC___C_CTOR_OFFSET))(this);
		}

		::LOEBAOEFMDC* __cctor_b__33_0()
		{
			return ((::LOEBAOEFMDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEBAOEFMDC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
