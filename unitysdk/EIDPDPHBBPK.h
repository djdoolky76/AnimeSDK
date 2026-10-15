#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBILPCIAE.h"
class MCDOIAPPMBF;

#define EIDPDPHBBPK_CTOR_OFFSET UNITYSDK_OFFSET(0x154BF340)
#define EIDPDPHBBPK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x154BF3E0)
#define EIDPDPHBBPK_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x154BF660)

	class EIDPDPHBBPK : public ::NPGBILPCIAE
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*, ::System::Single))((::PBYTE)hIl2Cpp + EIDPDPHBBPK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDPDPHBBPK_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDPDPHBBPK_MGFCPBINGNJ_OFFSET))(this);
		}

	};
