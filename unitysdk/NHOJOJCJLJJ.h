#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NHOJOJCJLJJ_CJLKLMFFDGP_OFFSET UNITYSDK_OFFSET(0x1AE220C0)
#define NHOJOJCJLJJ_LHDIHGODJMD_OFFSET UNITYSDK_OFFSET(0x1AE21D50)
#define NHOJOJCJLJJ_LHNHFHOFLAG_OFFSET UNITYSDK_OFFSET(0x1AE21F50)
#define NHOJOJCJLJJ_MINABACGCAM_OFFSET UNITYSDK_OFFSET(0x1AE21990)

inline static constexpr unsigned int NHOJOJCJLJJ_TypeDefinitionIndex = 90830;

class NHOJOJCJLJJ : public ::System::Object
{
public:
	// static const ::System::Int32 JFJGJMBJDAA = 0x419CE5; // 0x0
	// static const ::System::Int32 LGPKCJGPEHM = 0x5; // 0x0

	static ::System::Int32 MINABACGCAM(::System::Int32 APJDFHEGACC)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NHOJOJCJLJJ_MINABACGCAM_OFFSET))(APJDFHEGACC);
	}

	static ::System::Int32 LHDIHGODJMD(::System::Int32 APJDFHEGACC)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NHOJOJCJLJJ_LHDIHGODJMD_OFFSET))(APJDFHEGACC);
	}

	static ::System::Void LHNHFHOFLAG(::System::Int32& KCNOHOOPNAH, ::System::Int32& JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NHOJOJCJLJJ_LHNHFHOFLAG_OFFSET))(KCNOHOOPNAH, JHFKDGBCOBA);
	}

	static ::System::Boolean CJLKLMFFDGP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHOJOJCJLJJ_CJLKLMFFDGP_OFFSET))();
	}
};
