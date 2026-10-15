#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBICGMEFPL;
namespace System { class Object; }

#define GHBICGMEFPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4833C0)
#define GHBICGMEFPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4833F0)
#define GHBICGMEFPL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E483400)

	class GHBICGMEFPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x168E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBICGMEFPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBICGMEFPL___C_CTOR_OFFSET))(this);
		}

		::GHBICGMEFPL* __cctor_b__48_0()
		{
			return ((::GHBICGMEFPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBICGMEFPL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
