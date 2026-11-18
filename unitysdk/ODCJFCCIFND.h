#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODCJFCCIFND_KILPJALLKMH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ODCJFCCIFND_ELCHAOEEAEI_OFFSET UNITYSDK_OFFSET(0x15FC0350)
#define ODCJFCCIFND_FFFNCJDPDMF_OFFSET UNITYSDK_OFFSET(0x15FBFFD0)
#define ODCJFCCIFND_GFBMDFFMFCO_1_OFFSET UNITYSDK_OFFSET(0x15FC05A0)
#define ODCJFCCIFND_GFBMDFFMFCO_OFFSET UNITYSDK_OFFSET(0x15FC0710)
#define ODCJFCCIFND_KKPPIAPEJDK_OFFSET UNITYSDK_OFFSET(0x15FC0820)
#define ODCJFCCIFND_NDGKLGHDDHJ_OFFSET UNITYSDK_OFFSET(0x15FC0270)
#define ODCJFCCIFND_NJFJNLMDLIL_OFFSET UNITYSDK_OFFSET(0x15FC01B0)
#define ODCJFCCIFND_PDFNOIBFLCL_OFFSET UNITYSDK_OFFSET(0x15FC04C0)

inline static constexpr unsigned int ODCJFCCIFND_TypeDefinitionIndex = 73686;

class ODCJFCCIFND : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 FFFNCJDPDMF(::UnityEngine::Vector3 OPMPKFEHOBM, ::ODCJFCCIFND_KILPJALLKMH LDCBLPKEGAF)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::ODCJFCCIFND_KILPJALLKMH))((::PBYTE)hIl2Cpp + ODCJFCCIFND_FFFNCJDPDMF_OFFSET))(OPMPKFEHOBM, LDCBLPKEGAF);
	}

	static ::UnityEngine::Vector3 NDGKLGHDDHJ(::UnityEngine::Vector3 OJFFEMMNPOI)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODCJFCCIFND_NDGKLGHDDHJ_OFFSET))(OJFFEMMNPOI);
	}

	static ::UnityEngine::Vector3 NJFJNLMDLIL(::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODCJFCCIFND_NJFJNLMDLIL_OFFSET))(OPMPKFEHOBM);
	}

	static ::UnityEngine::Vector3 ELCHAOEEAEI(::UnityEngine::Vector3 OPMPKFEHOBM, ::ODCJFCCIFND_KILPJALLKMH LDCBLPKEGAF)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::ODCJFCCIFND_KILPJALLKMH))((::PBYTE)hIl2Cpp + ODCJFCCIFND_ELCHAOEEAEI_OFFSET))(OPMPKFEHOBM, LDCBLPKEGAF);
	}

	static ::UnityEngine::Vector3 GFBMDFFMFCO(::System::Single NCCDJLDKFGA, ::System::Single KAIAGAJEGBC, ::System::Single LLAPGCJNIKB)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ODCJFCCIFND_GFBMDFFMFCO_OFFSET))(NCCDJLDKFGA, KAIAGAJEGBC, LLAPGCJNIKB);
	}

	static ::UnityEngine::Vector3 GFBMDFFMFCO_1(::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODCJFCCIFND_GFBMDFFMFCO_1_OFFSET))(OPMPKFEHOBM);
	}

	static ::UnityEngine::Vector3 PDFNOIBFLCL(::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODCJFCCIFND_PDFNOIBFLCL_OFFSET))(OPMPKFEHOBM);
	}

	static ::UnityEngine::Vector3 KKPPIAPEJDK(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 GMHFKOELHPL, ::UnityEngine::Vector3 DIFAIJKOIPG, ::UnityEngine::Vector3 ALJIAJABAKK, ::UnityEngine::Vector3 BOKAMGBNGMA, ::UnityEngine::Vector3 AEGKKCKINCO, ::UnityEngine::Vector3 NPNIGIOILNA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODCJFCCIFND_KKPPIAPEJDK_OFFSET))(OPMPKFEHOBM, GMHFKOELHPL, DIFAIJKOIPG, ALJIAJABAKK, BOKAMGBNGMA, AEGKKCKINCO, NPNIGIOILNA);
	}
};
