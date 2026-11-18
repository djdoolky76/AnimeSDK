#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIEGNGFJHEE.h"
#include "unitysdk/JJEJBPGJPJN.h"

class AMBMPPCGAIA;
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define IPNLEPGBFCP_CLEJAPKHGMI_OFFSET UNITYSDK_OFFSET(0x19442120)
#define IPNLEPGBFCP_FPBHPDLCJBG_OFFSET UNITYSDK_OFFSET(0x19441520)
#define IPNLEPGBFCP_HPIKJIFGKJJ_OFFSET UNITYSDK_OFFSET(0x19442AD0)
#define IPNLEPGBFCP_LCGFNMJBDFP_OFFSET UNITYSDK_OFFSET(0x19442D00)
#define IPNLEPGBFCP_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19441060)
#define IPNLEPGBFCP_PLGJJJGNHLI_OFFSET UNITYSDK_OFFSET(0x19441750)
#define IPNLEPGBFCP__CTOR_OFFSET UNITYSDK_OFFSET(0x19441510)

inline static constexpr unsigned int IPNLEPGBFCP_TypeDefinitionIndex = 46670;

class IPNLEPGBFCP : public ::JJEJBPGJPJN
{
public:
	::IHECGHKOIPM_1<::System::Int32>* GCOIDNMGPAJ; // 0x88
	::LJHFMILANJA_1<::System::Int64>* PAFBOACKIOJ; // 0x90
	::BFMLEHMAGAK_1<::System::Boolean>* BCHBGNMBDJA; // 0x98
	::LJHFMILANJA_1<::System::Int64>* KOALCCOIOHE; // 0xA0
	::LJHFMILANJA_1<::System::Int64>* IMKGBBHDOOB; // 0xA8
	::LJHFMILANJA_1<::System::Int64>* BFCENOEDPCJ; // 0xB0
	::LJHFMILANJA_1<::System::Boolean>* HCOGBAJBJLB; // 0xB8
	::LJHFMILANJA_1<::System::Int32>* LNMLOMJOIOP; // 0xC0
	::IHECGHKOIPM_1<::CIEGNGFJHEE>* BKNGAOOCGHB; // 0xC8
	::LJHFMILANJA_1<::System::UInt32>* APFJHBDEGKJ; // 0xD0
	::LJHFMILANJA_1<::System::Int32>* LNACHGCCDKD; // 0xD8
	::LJHFMILANJA_1<::System::Boolean>* FIIDPFMJCHC; // 0xE0
	::LJHFMILANJA_1<::System::Boolean>* AMGBGFDJNFG; // 0xE8
	::LJHFMILANJA_1<::System::Int32>* PIGEBOAFKAB; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLEPGBFCP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLEPGBFCP_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean FPBHPDLCJBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLEPGBFCP_FPBHPDLCJBG_OFFSET))(this);
	}

	::System::Void PLGJJJGNHLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLEPGBFCP_PLGJJJGNHLI_OFFSET))(this);
	}

	::System::Void CLEJAPKHGMI(::AMBMPPCGAIA* OHEFDEGAKLC, ::System::Boolean OECIOPLJJOA)
	{
		return ((::System::Void(*)(::PVOID, ::AMBMPPCGAIA*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPNLEPGBFCP_CLEJAPKHGMI_OFFSET))(this, OHEFDEGAKLC, OECIOPLJJOA);
	}

	::CIEGNGFJHEE HPIKJIFGKJJ()
	{
		return ((::CIEGNGFJHEE(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLEPGBFCP_HPIKJIFGKJJ_OFFSET))(this);
	}

	::System::Int32 LCGFNMJBDFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNLEPGBFCP_LCGFNMJBDFP_OFFSET))(this);
	}
};
