#pragma once
#include "unitysdk/unitysdk.h"
class CFFPEAALCPH;

#define EAKGBLEMBLN_POBKNGEDFAF_IDCGICECPHO_OFFSET UNITYSDK_OFFSET(0x202F0F0)
#define EAKGBLEMBLN_POBKNGEDFAF_JOPEPGAGDCF_OFFSET UNITYSDK_OFFSET(0x202F100)

	struct alignas(4) EAKGBLEMBLN_POBKNGEDFAF
	{
		::System::UInt32 EFJIGEBAEPH; // 0x10
		::System::UInt32 NGHMHNLNCIA; // 0x14
		::System::Void IDCGICECPHO(::CFFPEAALCPH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CFFPEAALCPH*, ::System::Boolean))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_POBKNGEDFAF_IDCGICECPHO_OFFSET))(this, a1, a2);
		}

		::System::Boolean JOPEPGAGDCF(::CFFPEAALCPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFFPEAALCPH*))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_POBKNGEDFAF_JOPEPGAGDCF_OFFSET))(this, a1);
		}

	};
