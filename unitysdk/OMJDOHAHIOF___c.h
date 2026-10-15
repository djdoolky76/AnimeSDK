#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMJDOHAHIOF;
namespace System { class Object; }

#define OMJDOHAHIOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB7560)
#define OMJDOHAHIOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB75A0)
#define OMJDOHAHIOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEB75B0)

	class OMJDOHAHIOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMJDOHAHIOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJDOHAHIOF___C_CTOR_OFFSET))(this);
		}

		::OMJDOHAHIOF* __cctor_b__23_0()
		{
			return ((::OMJDOHAHIOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJDOHAHIOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
