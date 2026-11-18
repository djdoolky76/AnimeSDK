#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAFEFNFCABA.h"
#include "unitysdk/NDPKCBLNKJB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IHPKKNHNLHF;

#define JHAFEAGLPCL_CCDKIJPODGP_OFFSET UNITYSDK_OFFSET(0x14FB5C70)
#define JHAFEAGLPCL_CJAIEJMPAON_OFFSET UNITYSDK_OFFSET(0x14FB5C00)
#define JHAFEAGLPCL_DMEGCGPEMLA_OFFSET UNITYSDK_OFFSET(0x14FB57C0)
#define JHAFEAGLPCL_FDOAIJIAJFJ_OFFSET UNITYSDK_OFFSET(0x14FB5B60)
#define JHAFEAGLPCL_GGMFACHEDNC_OFFSET UNITYSDK_OFFSET(0x14FB5700)
#define JHAFEAGLPCL_GNFMHJANCPD_OFFSET UNITYSDK_OFFSET(0x14FB5640)
#define JHAFEAGLPCL_KLILPFFFDEK_OFFSET UNITYSDK_OFFSET(0x14FB5A50)
#define JHAFEAGLPCL_LLOGECOJMNG_OFFSET UNITYSDK_OFFSET(0x14FB5E10)
#define JHAFEAGLPCL_MFIHGODOMCB_OFFSET UNITYSDK_OFFSET(0x14FB5D30)
#define JHAFEAGLPCL_ONBEEEFIMOK_OFFSET UNITYSDK_OFFSET(0x14FB5990)

inline static constexpr unsigned int JHAFEAGLPCL_TypeDefinitionIndex = 80672;

class JHAFEAGLPCL : public ::System::Object
{
public:
	static ::System::Boolean GNFMHJANCPD(::System::Boolean& GIAINNNMHPH)
	{
		return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_GNFMHJANCPD_OFFSET))(GIAINNNMHPH);
	}

	static ::System::Boolean DMEGCGPEMLA(::IHPKKNHNLHF* IMOAKEGINJP, ::UnityEngine::Vector3 IKDNJGDGDDI, ::IAFEFNFCABA& IKPEJJOEDKB, ::MoleMole::Config::SceneConfigRuntimeDataArea& MCCCKILEJHB)
	{
		return ((::System::Boolean(*)(::IHPKKNHNLHF*, ::UnityEngine::Vector3, ::IAFEFNFCABA&, ::MoleMole::Config::SceneConfigRuntimeDataArea&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_DMEGCGPEMLA_OFFSET))(IMOAKEGINJP, IKDNJGDGDDI, IKPEJJOEDKB, MCCCKILEJHB);
	}

	static ::System::Boolean ONBEEEFIMOK(::System::Boolean& GICPBFNMCOF)
	{
		return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_ONBEEEFIMOK_OFFSET))(GICPBFNMCOF);
	}

	static ::System::Boolean KLILPFFFDEK(::System::Int32 MODAECOCCBC, ::UnityEngine::Vector3 IKDNJGDGDDI, ::NDPKCBLNKJB& LBNOHNMLNMN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Vector3, ::NDPKCBLNKJB&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_KLILPFFFDEK_OFFSET))(MODAECOCCBC, IKDNJGDGDDI, LBNOHNMLNMN);
	}

	static ::System::Boolean CJAIEJMPAON(::System::Boolean& NAOBDNDBEPE)
	{
		return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_CJAIEJMPAON_OFFSET))(NAOBDNDBEPE);
	}

	static ::System::Boolean CCDKIJPODGP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHAFEAGLPCL_CCDKIJPODGP_OFFSET))();
	}

	static ::System::Boolean GGMFACHEDNC(::NDPKCBLNKJB& GEJCKFFFKCL)
	{
		return ((::System::Boolean(*)(::NDPKCBLNKJB&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_GGMFACHEDNC_OFFSET))(GEJCKFFFKCL);
	}

	static ::System::Boolean MFIHGODOMCB(::IHPKKNHNLHF* IMOAKEGINJP, ::UnityEngine::Vector3& CKPGOKHECCH, ::NDPKCBLNKJB& LBNOHNMLNMN, ::IAFEFNFCABA& JFNNIHFGCNM, ::MoleMole::Config::SceneConfigRuntimeDataArea& MCCCKILEJHB)
	{
		return ((::System::Boolean(*)(::IHPKKNHNLHF*, ::UnityEngine::Vector3&, ::NDPKCBLNKJB&, ::IAFEFNFCABA&, ::MoleMole::Config::SceneConfigRuntimeDataArea&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_MFIHGODOMCB_OFFSET))(IMOAKEGINJP, CKPGOKHECCH, LBNOHNMLNMN, JFNNIHFGCNM, MCCCKILEJHB);
	}

	static ::NDPKCBLNKJB FDOAIJIAJFJ(::IHPKKNHNLHF* IMOAKEGINJP, ::UnityEngine::Vector3& CKPGOKHECCH)
	{
		return ((::NDPKCBLNKJB(*)(::IHPKKNHNLHF*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_FDOAIJIAJFJ_OFFSET))(IMOAKEGINJP, CKPGOKHECCH);
	}

	static ::System::Boolean LLOGECOJMNG(::System::Boolean& BICKFJCFJKO)
	{
		return ((::System::Boolean(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + JHAFEAGLPCL_LLOGECOJMNG_OFFSET))(BICKFJCFJKO);
	}
};
