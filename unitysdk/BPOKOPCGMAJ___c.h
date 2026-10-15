#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPOKOPCGMAJ;
namespace System { class Object; }

#define BPOKOPCGMAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04FE70)
#define BPOKOPCGMAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04FEB0)
#define BPOKOPCGMAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E04FEC0)

	class BPOKOPCGMAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPOKOPCGMAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ___C_CTOR_OFFSET))(this);
		}

		::BPOKOPCGMAJ* __cctor_b__23_0()
		{
			return ((::BPOKOPCGMAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
