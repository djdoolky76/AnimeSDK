#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMLLDOOAMDF.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

class AHBKEBCNJIO;
class ENGKPGFGGLM;
class PAGHLNGAFPM;
class POFOFGILKAA;
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GOECMDJIHNE_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x10FF9400)
#define GOECMDJIHNE_AJKLLEDJEGL_OFFSET UNITYSDK_OFFSET(0x10FF9320)
#define GOECMDJIHNE_BOIOJOEKJGB_OFFSET UNITYSDK_OFFSET(0x10FF89C0)
#define GOECMDJIHNE_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x10FF90B0)
#define GOECMDJIHNE_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0x10FF8F30)
#define GOECMDJIHNE_CKINGEHLFIH_OFFSET UNITYSDK_OFFSET(0x10FF8EA0)
#define GOECMDJIHNE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FF93C0)
#define GOECMDJIHNE_EFPBEDHNMEC_OFFSET UNITYSDK_OFFSET(0x10FF91C0)
#define GOECMDJIHNE_FJBBPIEBIIH_OFFSET UNITYSDK_OFFSET(0x10FF8B40)
#define GOECMDJIHNE_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x10FF82E0)
#define GOECMDJIHNE_GHIKPOHDEGM_OFFSET UNITYSDK_OFFSET(0x10FF93E0)
#define GOECMDJIHNE_GNDAGJDNBPC_OFFSET UNITYSDK_OFFSET(0x10FF8840)
#define GOECMDJIHNE_HCDCMEADFNF_OFFSET UNITYSDK_OFFSET(0x10FF8090)
#define GOECMDJIHNE_HIKFHKGCIJN_OFFSET UNITYSDK_OFFSET(0x10FF93B0)
#define GOECMDJIHNE_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0x10FF8250)
#define GOECMDJIHNE_JPMNBOHLDPP_OFFSET UNITYSDK_OFFSET(0x10FF9260)
#define GOECMDJIHNE_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x10FF93F0)
#define GOECMDJIHNE_LACBGPJHKFH_OFFSET UNITYSDK_OFFSET(0x10FF94C0)
#define GOECMDJIHNE_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x10FF7FD0)
#define GOECMDJIHNE_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x10FF8950)
#define GOECMDJIHNE_OHIIMLALOEE_OFFSET UNITYSDK_OFFSET(0x10FF9040)
#define GOECMDJIHNE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FF7FE0)
#define GOECMDJIHNE_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x10FF9250)
#define GOECMDJIHNE_PFILGLHOCJC_OFFSET UNITYSDK_OFFSET(0x10FF93D0)
#define GOECMDJIHNE_PFNIIMHIBGF_OFFSET UNITYSDK_OFFSET(0x10FF8BB0)
#define GOECMDJIHNE__CTOR_OFFSET UNITYSDK_OFFSET(0x10FF9170)

inline static constexpr unsigned int GOECMDJIHNE_TypeDefinitionIndex = 77747;

class GOECMDJIHNE : public ::CMLLDOOAMDF
{
public:
	// static const ::System::String* LFBMJMODNKN; // 0x0
	// static const ::System::String* GKLGCMIKLCA; // 0x0
	// static const ::System::String* IOHAGLMCDLC; // 0x0
	// static const ::System::String* OMFDBGBOKEJ; // 0x0
	::System::String* IFDOONHEFBI; // 0x2F8
	::PAGHLNGAFPM* DGKDJINBGHJ; // 0x300
	::System::Int32 PNDOAGLBIJP; // 0x308
	::System::Int32 IODJHANBAKK; // 0x30C
	::System::Int32 AHCDFAMNPGI; // 0x310
	::System::Int32 _PAEAJKAAJMB_k__BackingField; // 0x314
	::System::Int32 MKNFJGPPMIK; // 0x318

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + GOECMDJIHNE_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + GOECMDJIHNE_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType GNDAGJDNBPC(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType JIPPMBKLFHE)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + GOECMDJIHNE_GNDAGJDNBPC_OFFSET))(this, JIPPMBKLFHE);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Void BOIOJOEKJGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_BOIOJOEKJGB_OFFSET))(this);
	}

	::System::Boolean FJBBPIEBIIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_FJBBPIEBIIH_OFFSET))(this);
	}

	::System::Boolean CKINGEHLFIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_CKINGEHLFIH_OFFSET))(this);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GOECMDJIHNE_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GOECMDJIHNE_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::System::Void PFNIIMHIBGF(::MoleMole::Level::RatingType& NILNNELOMCG, ::System::Single& PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + GOECMDJIHNE_PFNIIMHIBGF_OFFSET))(this, NILNNELOMCG, PMGFIHJAJHL);
	}

	::System::Boolean EFPBEDHNMEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_EFPBEDHNMEC_OFFSET))(this);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GOECMDJIHNE_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void OHIIMLALOEE(::AHBKEBCNJIO* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::AHBKEBCNJIO*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GOECMDJIHNE_OHIIMLALOEE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Boolean JPMNBOHLDPP(::MoleMole::ESystemSettingType MIALFKCCCPI, ::System::Boolean& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + GOECMDJIHNE_JPMNBOHLDPP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType AJKLLEDJEGL(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType MIALFKCCCPI)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + GOECMDJIHNE_AJKLLEDJEGL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HIKFHKGCIJN(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GOECMDJIHNE_HIKFHKGCIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void PFILGLHOCJC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOECMDJIHNE_PFILGLHOCJC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HCDCMEADFNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_HCDCMEADFNF_OFFSET))(this);
	}

	::System::Boolean GHIKPOHDEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_GHIKPOHDEGM_OFFSET))(this);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + GOECMDJIHNE_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_AJINNLNIHJC_OFFSET))(this);
	}

	::System::Int32 LACBGPJHKFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOECMDJIHNE_LACBGPJHKFH_OFFSET))(this);
	}
};
