#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGMKGOIIFFL;
namespace System { class Object; }

#define FGMKGOIIFFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E383090)
#define FGMKGOIIFFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3830D0)
#define FGMKGOIIFFL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3830E0)

	class FGMKGOIIFFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGMKGOIIFFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL___C_CTOR_OFFSET))(this);
		}

		::FGMKGOIIFFL* __cctor_b__23_0()
		{
			return ((::FGMKGOIIFFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMKGOIIFFL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
