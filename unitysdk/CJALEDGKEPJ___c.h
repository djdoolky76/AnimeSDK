#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJALEDGKEPJ;
namespace System { class Object; }

#define CJALEDGKEPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA660)
#define CJALEDGKEPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA6A0)
#define CJALEDGKEPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0DA6B0)

	class CJALEDGKEPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJALEDGKEPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ___C_CTOR_OFFSET))(this);
		}

		::CJALEDGKEPJ* __cctor_b__28_0()
		{
			return ((::CJALEDGKEPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
