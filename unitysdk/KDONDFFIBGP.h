#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/System/Object.h"

class CCLLIEJENHM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDONDFFIBGP_AIEAKIFHLNJ_OFFSET UNITYSDK_OFFSET(0x16337BE0)
#define KDONDFFIBGP_CPCHMOGNKEH_OFFSET UNITYSDK_OFFSET(0x16338090)
#define KDONDFFIBGP_FHOBIPMGLOM_OFFSET UNITYSDK_OFFSET(0x16337D10)
#define KDONDFFIBGP_HFBLKEGFKIC_OFFSET UNITYSDK_OFFSET(0x16338000)
#define KDONDFFIBGP_HFGCIIJLKCE_OFFSET UNITYSDK_OFFSET(0x163375C0)
#define KDONDFFIBGP_HJKGGNLAJBF_OFFSET UNITYSDK_OFFSET(0x16337900)
#define KDONDFFIBGP_ILMLDHKEHDJ_1_OFFSET UNITYSDK_OFFSET(0x16337F80)
#define KDONDFFIBGP_ILMLDHKEHDJ_OFFSET UNITYSDK_OFFSET(0x16337A30)

inline static constexpr unsigned int KDONDFFIBGP_TypeDefinitionIndex = 61416;

class KDONDFFIBGP : public ::System::Object
{
public:
	static ::System::Int64 HFGCIIJLKCE(::System::UInt32 APKIKLPPHEA, ::Share::EPropertyType OBNIAHNMHPF)
	{
		return ((::System::Int64(*)(::System::UInt32, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + KDONDFFIBGP_HFGCIIJLKCE_OFFSET))(APKIKLPPHEA, OBNIAHNMHPF);
	}

	static ::System::Int32 ILMLDHKEHDJ(::System::Int32 PKMFBJMJCOO, ::System::Int32 MOBNMDEDJIP, ::System::Int32 HCKDKJHAOMF, ::Share::EPropertyType ECAJMFPANNE, ::System::Int32 DJAPCEHOHMC, ::System::Int32 AGNAIKKNCKC)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Share::EPropertyType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KDONDFFIBGP_ILMLDHKEHDJ_OFFSET))(PKMFBJMJCOO, MOBNMDEDJIP, HCKDKJHAOMF, ECAJMFPANNE, DJAPCEHOHMC, AGNAIKKNCKC);
	}

	static ::System::Int64 FHOBIPMGLOM(::System::Int32 APKIKLPPHEA, ::System::Int32 HCKDKJHAOMF, ::Share::EPropertyType OBNIAHNMHPF)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + KDONDFFIBGP_FHOBIPMGLOM_OFFSET))(APKIKLPPHEA, HCKDKJHAOMF, OBNIAHNMHPF);
	}

	static ::System::Int64 AIEAKIFHLNJ(::System::UInt32 APKIKLPPHEA, ::Share::EPropertyType OBNIAHNMHPF)
	{
		return ((::System::Int64(*)(::System::UInt32, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + KDONDFFIBGP_AIEAKIFHLNJ_OFFSET))(APKIKLPPHEA, OBNIAHNMHPF);
	}

	static ::System::Int32 ILMLDHKEHDJ_1(::CCLLIEJENHM* DHAFEDFPAOK, ::Share::EPropertyType OBNIAHNMHPF, ::System::Int32 DJAPCEHOHMC, ::System::Int32 AGNAIKKNCKC)
	{
		return ((::System::Int32(*)(::CCLLIEJENHM*, ::Share::EPropertyType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KDONDFFIBGP_ILMLDHKEHDJ_1_OFFSET))(DHAFEDFPAOK, OBNIAHNMHPF, DJAPCEHOHMC, AGNAIKKNCKC);
	}

	static ::System::Int32 HFBLKEGFKIC(::System::Int32 PKMFBJMJCOO, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KDONDFFIBGP_HFBLKEGFKIC_OFFSET))(PKMFBJMJCOO, MOBNMDEDJIP);
	}

	static ::System::Int64 HJKGGNLAJBF(::System::UInt32 APKIKLPPHEA, ::Share::EPropertyType OBNIAHNMHPF)
	{
		return ((::System::Int64(*)(::System::UInt32, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + KDONDFFIBGP_HJKGGNLAJBF_OFFSET))(APKIKLPPHEA, OBNIAHNMHPF);
	}

	static ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Int32>* CPCHMOGNKEH(::CCLLIEJENHM* HMMMOCJAEOA)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Int32>*(*)(::CCLLIEJENHM*))((::PBYTE)hIl2Cpp + KDONDFFIBGP_CPCHMOGNKEH_OFFSET))(HMMMOCJAEOA);
	}
};
