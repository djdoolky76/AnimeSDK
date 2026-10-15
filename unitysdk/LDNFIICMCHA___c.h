#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDNFIICMCHA;
namespace System { class Object; }

#define LDNFIICMCHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FF860)
#define LDNFIICMCHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FF8A0)
#define LDNFIICMCHA___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E8FF8B0)

	class LDNFIICMCHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNFIICMCHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA___C_CTOR_OFFSET))(this);
		}

		::LDNFIICMCHA* __cctor_b__53_0()
		{
			return ((::LDNFIICMCHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFIICMCHA___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
