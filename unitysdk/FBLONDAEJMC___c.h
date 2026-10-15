#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBLONDAEJMC;
namespace System { class Object; }

#define FBLONDAEJMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E339890)
#define FBLONDAEJMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3398D0)
#define FBLONDAEJMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3398E0)

	class FBLONDAEJMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLONDAEJMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC___C_CTOR_OFFSET))(this);
		}

		::FBLONDAEJMC* __cctor_b__23_0()
		{
			return ((::FBLONDAEJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLONDAEJMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
