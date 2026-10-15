#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAJHIBDCGDG.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HDPCKPMCKCF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C33A00)

inline static constexpr unsigned int HDPCKPMCKCF_TypeDefinitionIndex = 57024;

	class HDPCKPMCKCF : public ::PAJHIBDCGDG
	{
	public:
		::System::Single MMHNCNGAING; // 0x10
		::System::Boolean APKIFHILLLF; // 0x14
		::System::Boolean HLPHEAALNAK; // 0x15
		::System::Byte _padding0[0x2];
		::System::Single FBOCMAMEBCB; // 0x18
		::System::Single JGPOJJMMIIM; // 0x1C
		::System::Single PJFHGLEPFLP; // 0x20
		::UnityEngine::Vector3 JJFMHMPFOKM; // 0x24
		::System::Single BFJJPCCEIPB; // 0x30
		::System::Single DNPKFCEKLHJ; // 0x34
		::System::Single OHMBCICPCNA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPCKPMCKCF_CTOR_OFFSET))(this);
		}

	};
