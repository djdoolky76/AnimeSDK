#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAJHIBDCGDG.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HDPCKPMCKCF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C407A0)

	class HDPCKPMCKCF : public ::PAJHIBDCGDG
	{
	public:
		::System::Boolean HLPHEAALNAK; // 0x10
		::System::Boolean APKIFHILLLF; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single DNPKFCEKLHJ; // 0x14
		::System::Single OHMBCICPCNA; // 0x18
		::System::Single PJFHGLEPFLP; // 0x1C
		::UnityEngine::Vector3 JJFMHMPFOKM; // 0x20
		::System::Single JGPOJJMMIIM; // 0x2C
		::System::Single BFJJPCCEIPB; // 0x30
		::System::Single MMHNCNGAING; // 0x34
		::System::Single FBOCMAMEBCB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPCKPMCKCF_CTOR_OFFSET))(this);
		}

	};
