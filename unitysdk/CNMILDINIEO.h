#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJHBKDIANM;
namespace System { class String; }

#define CNMILDINIEO_DLCCBMPEKFA_OFFSET UNITYSDK_OFFSET(0xDA5A000)
#define CNMILDINIEO_IOPDMCJLJFL_OFFSET UNITYSDK_OFFSET(0xDA59CF0)
#define CNMILDINIEO_KDOELPOACHB_OFFSET UNITYSDK_OFFSET(0xDA59B70)
#define CNMILDINIEO_MPIBNJBBOKM_OFFSET UNITYSDK_OFFSET(0xDA59E80)

	class CNMILDINIEO : public ::System::Object
	{
	public:
		static ::System::Int32 KDOELPOACHB(::DCJHBKDIANM* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::DCJHBKDIANM*, ::System::String*))((::PBYTE)hIl2Cpp + CNMILDINIEO_KDOELPOACHB_OFFSET))(a1, a2);
		}

		static ::System::UInt32 IOPDMCJLJFL(::DCJHBKDIANM* a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::DCJHBKDIANM*, ::System::String*))((::PBYTE)hIl2Cpp + CNMILDINIEO_IOPDMCJLJFL_OFFSET))(a1, a2);
		}

		static ::System::Single MPIBNJBBOKM(::DCJHBKDIANM* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::DCJHBKDIANM*, ::System::String*))((::PBYTE)hIl2Cpp + CNMILDINIEO_MPIBNJBBOKM_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLCCBMPEKFA(::DCJHBKDIANM* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::DCJHBKDIANM*, ::System::String*))((::PBYTE)hIl2Cpp + CNMILDINIEO_DLCCBMPEKFA_OFFSET))(a1, a2);
		}

	};
