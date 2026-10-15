#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGHPKFMNNHL;
namespace System { class Object; }

#define OGHPKFMNNHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE55240)
#define OGHPKFMNNHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE55280)
#define OGHPKFMNNHL___C___CCTOR_B__113_0_OFFSET UNITYSDK_OFFSET(0x1DE55290)

	class OGHPKFMNNHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGHPKFMNNHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHPKFMNNHL___C_CTOR_OFFSET))(this);
		}

		::OGHPKFMNNHL* __cctor_b__113_0()
		{
			return ((::OGHPKFMNNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHPKFMNNHL___C___CCTOR_B__113_0_OFFSET))(this);
		}

	};
