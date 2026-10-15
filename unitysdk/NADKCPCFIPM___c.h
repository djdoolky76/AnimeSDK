#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NADKCPCFIPM;
namespace System { class Object; }

#define NADKCPCFIPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABF1E0)
#define NADKCPCFIPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABF220)
#define NADKCPCFIPM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EABF230)

	class NADKCPCFIPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NADKCPCFIPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM___C_CTOR_OFFSET))(this);
		}

		::NADKCPCFIPM* __cctor_b__23_0()
		{
			return ((::NADKCPCFIPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
