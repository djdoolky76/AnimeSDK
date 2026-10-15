#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMJGKNJKHCH;
namespace System { class Object; }

#define OMJGKNJKHCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB7F70)
#define OMJGKNJKHCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB7FA0)
#define OMJGKNJKHCH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEB7FB0)

	class OMJGKNJKHCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMJGKNJKHCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJGKNJKHCH___C_CTOR_OFFSET))(this);
		}

		::OMJGKNJKHCH* __cctor_b__33_0()
		{
			return ((::OMJGKNJKHCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJGKNJKHCH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
