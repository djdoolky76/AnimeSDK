#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLHIMGJGBO;
namespace System { class Object; }

#define JOLHIMGJGBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A9510)
#define JOLHIMGJGBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A9550)
#define JOLHIMGJGBO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E7A9560)

	class JOLHIMGJGBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOLHIMGJGBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO___C_CTOR_OFFSET))(this);
		}

		::JOLHIMGJGBO* __cctor_b__48_0()
		{
			return ((::JOLHIMGJGBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
