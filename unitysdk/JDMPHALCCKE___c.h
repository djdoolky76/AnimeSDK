#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMPHALCCKE;
namespace System { class Object; }

#define JDMPHALCCKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7100D0)
#define JDMPHALCCKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E710110)
#define JDMPHALCCKE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E710120)

	class JDMPHALCCKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMPHALCCKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE___C_CTOR_OFFSET))(this);
		}

		::JDMPHALCCKE* __cctor_b__33_0()
		{
			return ((::JDMPHALCCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
