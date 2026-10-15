#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEDCCCCMOCL;
namespace System { class Object; }

#define CEDCCCCMOCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E090000)
#define CEDCCCCMOCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E090040)
#define CEDCCCCMOCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E090050)

	class CEDCCCCMOCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x104A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEDCCCCMOCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCCCCMOCL___C_CTOR_OFFSET))(this);
		}

		::CEDCCCCMOCL* __cctor_b__23_0()
		{
			return ((::CEDCCCCMOCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCCCCMOCL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
