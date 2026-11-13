#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAJHIBDCGDG.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HDPCKPMCKCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E9E90)

inline static constexpr unsigned int HDPCKPMCKCF_TypeDefinitionIndex = 58251;

	class HDPCKPMCKCF : public ::PAJHIBDCGDG
	{
	public:
		::System::Single OHMBCICPCNA; // 0x10
		::System::Single PJFHGLEPFLP; // 0x14
		::System::Single JGPOJJMMIIM; // 0x18
		::System::Boolean APKIFHILLLF; // 0x1C
		::System::Boolean HLPHEAALNAK; // 0x1D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 JJFMHMPFOKM; // 0x20
		::System::Single DNPKFCEKLHJ; // 0x2C
		::System::Single MMHNCNGAING; // 0x30
		::System::Single FBOCMAMEBCB; // 0x34
		::System::Single BFJJPCCEIPB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPCKPMCKCF_CTOR_OFFSET))(this);
		}

	};
