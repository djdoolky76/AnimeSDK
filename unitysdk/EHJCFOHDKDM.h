#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"

#define EHJCFOHDKDM_BPNKLJOFKLK_OFFSET UNITYSDK_OFFSET(0x76CAB0)
#define EHJCFOHDKDM_CBIOPMPFPAF_OFFSET UNITYSDK_OFFSET(0x76C970)
#define EHJCFOHDKDM_CMPFFBJHHCM_OFFSET UNITYSDK_OFFSET(0x76CC30)
#define EHJCFOHDKDM_DIHFBKDGLBP_OFFSET UNITYSDK_OFFSET(0x76C610)
#define EHJCFOHDKDM_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x76CD90)
#define EHJCFOHDKDM_GJFEMCMEONJ_OFFSET UNITYSDK_OFFSET(0x76CAF0)
#define EHJCFOHDKDM_HAHNMAPNHFM_OFFSET UNITYSDK_OFFSET(0x76CAD0)
#define EHJCFOHDKDM_IEALMMKJOIN_OFFSET UNITYSDK_OFFSET(0x76C4D0)
#define EHJCFOHDKDM_IOHPDJBMBMO_OFFSET UNITYSDK_OFFSET(0x76CB10)
#define EHJCFOHDKDM_JBDMDOLKEKJ_OFFSET UNITYSDK_OFFSET(0x76C730)
#define EHJCFOHDKDM_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x76C850)
#define EHJCFOHDKDM_JLLNCGKKPHL_OFFSET UNITYSDK_OFFSET(0x672AC0)
#define EHJCFOHDKDM_NIPHKEEHFFL_OFFSET UNITYSDK_OFFSET(0x76CC50)
#define EHJCFOHDKDM__CTOR_OFFSET UNITYSDK_OFFSET(0x76C4C0)

inline static constexpr unsigned int EHJCFOHDKDM_TypeDefinitionIndex = 80901;

struct alignas(8) EHJCFOHDKDM
{
	::Foundation::Clamped_1<::System::Single> GOBHMPCBMFO; // 0x10
	::System::Byte _padding0[0x10];
	::Foundation::Clamped_1<::System::Single> DOCJLFKPHIH; // 0x28
	::System::Byte _padding1[0x10];
	::Foundation::Clamped_1<::System::Single> LIIGLBIPGIB; // 0x40
	::System::Byte _padding2[0x10];
	::Foundation::Clamped_1<::System::Single> GIBFKICMMOI; // 0x58
	::System::Byte _padding3[0x10];
	::System::Boolean OEELLLCJDIK; // 0x70

	::System::Void _ctor(::System::Single DDILKDCIEGJ, ::System::Single AOBEINLCOAO, ::System::Single MKCDKNANDFG, ::System::Single JJDBHGFLBHC, ::System::Single FCCLNMHCBLF, ::System::Single PIMKDEJJFJF, ::System::Single JLGDMCGABKP, ::System::Single GPPJKEOGNAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM__CTOR_OFFSET))(this, DDILKDCIEGJ, AOBEINLCOAO, MKCDKNANDFG, JJDBHGFLBHC, FCCLNMHCBLF, PIMKDEJJFJF, JLGDMCGABKP, GPPJKEOGNAD);
	}

	::System::Void IEALMMKJOIN(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_IEALMMKJOIN_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void DIHFBKDGLBP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_DIHFBKDGLBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JBDMDOLKEKJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_JBDMDOLKEKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Boolean JLLNCGKKPHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_JLLNCGKKPHL_OFFSET))(this);
	}

	::System::Void CBIOPMPFPAF(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_CBIOPMPFPAF_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Nullable_1<::System::Single> BPNKLJOFKLK()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_BPNKLJOFKLK_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> HAHNMAPNHFM()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_HAHNMAPNHFM_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> GJFEMCMEONJ()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_GJFEMCMEONJ_OFFSET))(this);
	}

	::System::Void IOHPDJBMBMO(::System::Single DNDJCAAFEML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_IOHPDJBMBMO_OFFSET))(this, DNDJCAAFEML);
	}

	::System::Nullable_1<::System::Single> CMPFFBJHHCM()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_CMPFFBJHHCM_OFFSET))(this);
	}

	::System::Void NIPHKEEHFFL(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_NIPHKEEHFFL_OFFSET))(this, HBEKKMCBGBK);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + EHJCFOHDKDM_GIAOBHOJCDP_OFFSET))(this, GPBKDGGEBCF);
	}
};
