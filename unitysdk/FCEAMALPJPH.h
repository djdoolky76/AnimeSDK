#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFJIADFIJKO.h"
namespace System { class String; }

#define FCEAMALPJPH_CFNFCMJKHJI_OFFSET UNITYSDK_OFFSET(0x156B7740)
#define FCEAMALPJPH_CTOR_OFFSET UNITYSDK_OFFSET(0x156B7830)
#define FCEAMALPJPH_KEPHOAACFNB_OFFSET UNITYSDK_OFFSET(0x156B7790)
#define FCEAMALPJPH_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x156B77D0)

	class FCEAMALPJPH : public ::NFJIADFIJKO
	{
	public:
		::System::Boolean GALLALLGEHA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEAMALPJPH_CTOR_OFFSET))(this);
		}

		::System::Void CFNFCMJKHJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCEAMALPJPH_CFNFCMJKHJI_OFFSET))(this, a1);
		}

		::System::Boolean KEPHOAACFNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEAMALPJPH_KEPHOAACFNB_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FCEAMALPJPH_KJMDJMBNCPE_OFFSET))(this, a1, a2);
		}

	};
