#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFMOAGPPHGP;
namespace System { class Object; }

#define FFMOAGPPHGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E379030)
#define FFMOAGPPHGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E379070)
#define FFMOAGPPHGP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E379080)

	class FFMOAGPPHGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFMOAGPPHGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMOAGPPHGP___C_CTOR_OFFSET))(this);
		}

		::FFMOAGPPHGP* __cctor_b__43_0()
		{
			return ((::FFMOAGPPHGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMOAGPPHGP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
