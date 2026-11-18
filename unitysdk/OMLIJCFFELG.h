#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define OMLIJCFFELG_GPALIAOLLIK_OFFSET UNITYSDK_OFFSET(0x14F90810)
#define OMLIJCFFELG_HGIPACPLEDD_OFFSET UNITYSDK_OFFSET(0x14F907F0)
#define OMLIJCFFELG_IBAGLHNAMHM_OFFSET UNITYSDK_OFFSET(0x14F90740)
#define OMLIJCFFELG_IKDMKJPPKJB_OFFSET UNITYSDK_OFFSET(0x14F90660)
#define OMLIJCFFELG_KGKEBNAJIBM_OFFSET UNITYSDK_OFFSET(0x14F907E0)
#define OMLIJCFFELG_MBNMHALBFDF_OFFSET UNITYSDK_OFFSET(0x14F90BC0)
#define OMLIJCFFELG_MIKFALCOCPO_OFFSET UNITYSDK_OFFSET(0x14F90800)
#define OMLIJCFFELG_NIDEOCCKHDA_OFFSET UNITYSDK_OFFSET(0x14F906D0)
#define OMLIJCFFELG_PJPAKNOGMLE_OFFSET UNITYSDK_OFFSET(0x14F90B50)
#define OMLIJCFFELG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14F90650)
#define OMLIJCFFELG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F90640)

inline static constexpr unsigned int OMLIJCFFELG_TypeDefinitionIndex = 52907;

class OMLIJCFFELG : public ::System::Object
{
public:
	::System::Nullable_1<::System::Boolean> _HOOGNOJCPON_k__BackingField; // 0x10
	::System::Boolean _OKIHOCODIEB_k__BackingField; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean NNFDNCHNMAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMLIJCFFELG__CTOR_1_OFFSET))(this, NNFDNCHNMAH);
	}

	::System::Boolean IKDMKJPPKJB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG_IKDMKJPPKJB_OFFSET))(this);
	}

	::System::Boolean IBAGLHNAMHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG_IBAGLHNAMHM_OFFSET))(this);
	}

	::System::Boolean NIDEOCCKHDA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG_NIDEOCCKHDA_OFFSET))(this);
	}

	::System::Boolean KGKEBNAJIBM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG_KGKEBNAJIBM_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> HGIPACPLEDD()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG_HGIPACPLEDD_OFFSET))(this);
	}

	::System::Void MIKFALCOCPO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMLIJCFFELG_MIKFALCOCPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GPALIAOLLIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG_GPALIAOLLIK_OFFSET))(this);
	}

	::System::Boolean PJPAKNOGMLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLIJCFFELG_PJPAKNOGMLE_OFFSET))(this);
	}

	::System::Void MBNMHALBFDF(::System::Nullable_1<::System::Boolean> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + OMLIJCFFELG_MBNMHALBFDF_OFFSET))(this, EGEGIMGMJHN);
	}
};
