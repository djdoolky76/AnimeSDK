#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLCBONEAMNL;
namespace System { class Object; }

#define PLCBONEAMNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9E8B0)
#define PLCBONEAMNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9E8E0)
#define PLCBONEAMNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF9E8F0)

	class PLCBONEAMNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCBONEAMNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL___C_CTOR_OFFSET))(this);
		}

		::PLCBONEAMNL* __cctor_b__28_0()
		{
			return ((::PLCBONEAMNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCBONEAMNL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
