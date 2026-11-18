#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADLCDHJKFIO.h"
#include "unitysdk/EDFMOBLBPGH.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/JJEJBPGJPJN.h"

class GBLHIIBPDHJ;
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define NPPLMKOOJDJ_CEEHKFFFOOF_OFFSET UNITYSDK_OFFSET(0x10604160)
#define NPPLMKOOJDJ_CPHBGFNIKPE_OFFSET UNITYSDK_OFFSET(0x10603CE0)
#define NPPLMKOOJDJ_DCODGOIMJPH_OFFSET UNITYSDK_OFFSET(0x10604040)
#define NPPLMKOOJDJ_DDPGECFCHFJ_OFFSET UNITYSDK_OFFSET(0x10604800)
#define NPPLMKOOJDJ_LCPHNDJNGCM_OFFSET UNITYSDK_OFFSET(0x10603C70)
#define NPPLMKOOJDJ_MEFMLCPMGIB_OFFSET UNITYSDK_OFFSET(0x106044A0)
#define NPPLMKOOJDJ_MJODLDDGFDJ_OFFSET UNITYSDK_OFFSET(0x10603B60)
#define NPPLMKOOJDJ_NDBHGHBADII_OFFSET UNITYSDK_OFFSET(0x106049D0)
#define NPPLMKOOJDJ_OHCJBBFPBOK_OFFSET UNITYSDK_OFFSET(0x10604440)
#define NPPLMKOOJDJ_OMHFNNCPILP_OFFSET UNITYSDK_OFFSET(0x10603610)
#define NPPLMKOOJDJ_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10602A50)
#define NPPLMKOOJDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10603600)

inline static constexpr unsigned int NPPLMKOOJDJ_TypeDefinitionIndex = 92812;

class NPPLMKOOJDJ : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* CIEDMGDKIAM; // 0x88
	::BFMLEHMAGAK_1<::System::Boolean>* KNCOEAANCCL; // 0x90
	::IHECGHKOIPM_1<::System::Int32>* AGCLBKBJJBM; // 0x98
	::GBLHIIBPDHJ* FONFGOFKFMF; // 0xA0
	::IHECGHKOIPM_1<::System::Int32>* EDCLJIKMMMP; // 0xA8
	::LJHFMILANJA_1<::System::UInt32>* DILIIHOJGDL; // 0xB0
	::IHECGHKOIPM_1<::Foundation::AssetPath>* LOAMJFIJJFM; // 0xB8
	::IHECGHKOIPM_1<::System::Boolean>* OJPEHNCJFOG; // 0xC0
	::IHECGHKOIPM_1<::System::Single>* KJCHKGBKEBL; // 0xC8
	::IHECGHKOIPM_1<::System::Boolean>* GDCFDNCHMGD; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean OMHFNNCPILP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_OMHFNNCPILP_OFFSET))(this);
	}

	::Foundation::AssetPath MJODLDDGFDJ()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_MJODLDDGFDJ_OFFSET))(this);
	}

	::System::Void LCPHNDJNGCM(::System::Int32 JMLNKPAIPDL, ::ADLCDHJKFIO DHNLIHAFEFN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::ADLCDHJKFIO))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_LCPHNDJNGCM_OFFSET))(this, JMLNKPAIPDL, DHNLIHAFEFN);
	}

	::System::Boolean CPHBGFNIKPE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_CPHBGFNIKPE_OFFSET))(this);
	}

	::System::Void DCODGOIMJPH(::System::UInt32 CIEDMGDKIAM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_DCODGOIMJPH_OFFSET))(this, CIEDMGDKIAM);
	}

	::System::Single CEEHKFFFOOF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_CEEHKFFFOOF_OFFSET))(this);
	}

	::System::Void OHCJBBFPBOK(::EDFMOBLBPGH OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::EDFMOBLBPGH))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_OHCJBBFPBOK_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Int32 MEFMLCPMGIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_MEFMLCPMGIB_OFFSET))(this);
	}

	::System::Int32 DDPGECFCHFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_DDPGECFCHFJ_OFFSET))(this);
	}

	::System::Boolean NDBHGHBADII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLMKOOJDJ_NDBHGHBADII_OFFSET))(this);
	}
};
