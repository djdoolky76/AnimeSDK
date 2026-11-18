#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/KFLFCOABGGJ.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/GIGJPIFBFMO.h"
#include "unitysdk/KPOAMHEOCDE_AKOKCAIBADD.h"
#include "unitysdk/KPOAMHEOCDE_DHIOJINMBHF.h"
#include "unitysdk/KPOAMHEOCDE_JOLBMEMHPID.h"
#include "unitysdk/KPOAMHEOCDE_KOJNBCCFOAM.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class ENGKPGFGGLM;
class MCGABACEIFE;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Config { class CharacterAssistAimConfig; }
namespace MoleMole::Config { class CharacterAutoAimConfig; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Renderer; }

#define KPOAMHEOCDE_AOBMANBEIHA_OFFSET UNITYSDK_OFFSET(0x15DD4ED0)
#define KPOAMHEOCDE_BAHIPBLAPHD_OFFSET UNITYSDK_OFFSET(0x13C8AAE0)
#define KPOAMHEOCDE_BGNABACNPLL_OFFSET UNITYSDK_OFFSET(0x15DD6070)
#define KPOAMHEOCDE_CEMOBPAMKJF_OFFSET UNITYSDK_OFFSET(0x15DD5830)
#define KPOAMHEOCDE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x15DD6650)
#define KPOAMHEOCDE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13C8A4C0)
#define KPOAMHEOCDE_EHGLGGPHEBE_OFFSET UNITYSDK_OFFSET(0x15DD6140)
#define KPOAMHEOCDE_ENEEHPKPKME_OFFSET UNITYSDK_OFFSET(0x15DD5720)
#define KPOAMHEOCDE_GHKFCLEMPDL_OFFSET UNITYSDK_OFFSET(0x15DD0A30)
#define KPOAMHEOCDE_HOMBGFHLLHN_OFFSET UNITYSDK_OFFSET(0x15DD3250)
#define KPOAMHEOCDE_IAJAPHLKJIK_OFFSET UNITYSDK_OFFSET(0x15DD0CA0)
#define KPOAMHEOCDE_IFBJNDLDHEI_OFFSET UNITYSDK_OFFSET(0x15DD1F40)
#define KPOAMHEOCDE_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x15DD6610)
#define KPOAMHEOCDE_KABLPNJKEFM_OFFSET UNITYSDK_OFFSET(0x15DD1FC0)
#define KPOAMHEOCDE_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x15DD65C0)
#define KPOAMHEOCDE_LATEUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x13C8A900)
#define KPOAMHEOCDE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x15DD09A0)
#define KPOAMHEOCDE_MNKMILGMPMA_OFFSET UNITYSDK_OFFSET(0x15DD5960)
#define KPOAMHEOCDE_NNNJECDELMB_OFFSET UNITYSDK_OFFSET(0x15DD0910)
#define KPOAMHEOCDE_OPJIHCEPDPF_OFFSET UNITYSDK_OFFSET(0x15DD1180)
#define KPOAMHEOCDE_PNLEDMKFPNH_OFFSET UNITYSDK_OFFSET(0x15DD4E10)
#define KPOAMHEOCDE_UPDATE_OFFSET UNITYSDK_OFFSET(0x13C8A7C0)
#define KPOAMHEOCDE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8AA90)

inline static constexpr unsigned int KPOAMHEOCDE_TypeDefinitionIndex = 74556;

class KPOAMHEOCDE : public ::OAOOLPCNHKA
{
public:
	static ::System::Single* StaticGet_FGBPEMIPMOM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(KPOAMHEOCDE_TypeDefinitionIndex)->GetStaticField(0x11480);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOAMHEOCDE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdateAgain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_LATEUPDATEAGAIN_OFFSET))(this);
	}

	static ::System::Void BAHIPBLAPHD(::MCGABACEIFE* HDFLDBOOHCK)
	{
		return ((::System::Void(*)(::MCGABACEIFE*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_BAHIPBLAPHD_OFFSET))(HDFLDBOOHCK);
	}

	::System::Void NNNJECDELMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_NNNJECDELMB_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void GHKFCLEMPDL(::UnityEngine::Renderer* OCFHGOGFGPE, ::KPOAMHEOCDE_JOLBMEMHPID& param_1)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::KPOAMHEOCDE_JOLBMEMHPID&))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_GHKFCLEMPDL_OFFSET))(OCFHGOGFGPE, param_1);
	}

	static ::System::Void IAJAPHLKJIK(::MCGABACEIFE* HDFLDBOOHCK, ::System::Boolean NLPGLIGHNAB, ::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::MCGABACEIFE*, ::System::Boolean, ::MoleMole::Cameras::OverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_IAJAPHLKJIK_OFFSET))(HDFLDBOOHCK, NLPGLIGHNAB, DFMKILICPFB);
	}

	static ::System::Boolean OPJIHCEPDPF(::ACNLKLCDALA* HLFFCMIFFIB, ::MCGABACEIFE* BCCMJHOEMOH)
	{
		return ((::System::Boolean(*)(::ACNLKLCDALA*, ::MCGABACEIFE*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_OPJIHCEPDPF_OFFSET))(HLFFCMIFFIB, BCCMJHOEMOH);
	}

	static ::System::Void PNLEDMKFPNH(::KFLFCOABGGJ JKBLDFBGBPK, ::KPOAMHEOCDE_AKOKCAIBADD& param_1)
	{
		return ((::System::Void(*)(::KFLFCOABGGJ, ::KPOAMHEOCDE_AKOKCAIBADD&))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_PNLEDMKFPNH_OFFSET))(JKBLDFBGBPK, param_1);
	}

	static ::System::Void HOMBGFHLLHN(::MCGABACEIFE* BCCMJHOEMOH, ::MoleMole::Config::CharacterAutoAimConfig* AFDHAJPHIFB, ::PipelineCamera::WorldBasicCameraData& PKEOALJOOFN, ::GIGJPIFBFMO& FFNFFBPBIED, ::AIOFAMODPOO MEFLMBANAMM)
	{
		return ((::System::Void(*)(::MCGABACEIFE*, ::MoleMole::Config::CharacterAutoAimConfig*, ::PipelineCamera::WorldBasicCameraData&, ::GIGJPIFBFMO&, ::AIOFAMODPOO))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_HOMBGFHLLHN_OFFSET))(BCCMJHOEMOH, AFDHAJPHIFB, PKEOALJOOFN, FFNFFBPBIED, MEFLMBANAMM);
	}

	static ::System::Void MNKMILGMPMA(::MCGABACEIFE* BCCMJHOEMOH)
	{
		return ((::System::Void(*)(::MCGABACEIFE*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_MNKMILGMPMA_OFFSET))(BCCMJHOEMOH);
	}

	static ::UnityEngine::Vector2 ENEEHPKPKME(::UnityEngine::Vector3 OHOGDOMNHNK, ::KPOAMHEOCDE_AKOKCAIBADD& param_1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::KPOAMHEOCDE_AKOKCAIBADD&))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_ENEEHPKPKME_OFFSET))(OHOGDOMNHNK, param_1);
	}

	static ::System::Void KABLPNJKEFM(::MCGABACEIFE* BCCMJHOEMOH, ::MoleMole::Config::CharacterAssistAimConfig* NAKBNJHHHIA, ::PipelineCamera::WorldBasicCameraData& PKEOALJOOFN, ::GIGJPIFBFMO& FFNFFBPBIED)
	{
		return ((::System::Void(*)(::MCGABACEIFE*, ::MoleMole::Config::CharacterAssistAimConfig*, ::PipelineCamera::WorldBasicCameraData&, ::GIGJPIFBFMO&))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_KABLPNJKEFM_OFFSET))(BCCMJHOEMOH, NAKBNJHHHIA, PKEOALJOOFN, FFNFFBPBIED);
	}

	static ::System::Boolean BGNABACNPLL(::MCGABACEIFE* BCCMJHOEMOH)
	{
		return ((::System::Boolean(*)(::MCGABACEIFE*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_BGNABACNPLL_OFFSET))(BCCMJHOEMOH);
	}

	static ::UnityEngine::Vector3 AOBMANBEIHA(::MCGABACEIFE* BCCMJHOEMOH, ::UnityEngine::Vector3 HFLGJLCLNMJ)
	{
		return ((::UnityEngine::Vector3(*)(::MCGABACEIFE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_AOBMANBEIHA_OFFSET))(BCCMJHOEMOH, HFLGJLCLNMJ);
	}

	static ::System::Void IFBJNDLDHEI(::MCGABACEIFE* HDFLDBOOHCK)
	{
		return ((::System::Void(*)(::MCGABACEIFE*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_IFBJNDLDHEI_OFFSET))(HDFLDBOOHCK);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Single EHGLGGPHEBE(::System::Single MFEECDMPLDH, ::System::Single BAGLLCBFGED, ::UnityEngine::AnimationCurve* JEHLLEPFDKF, ::KPOAMHEOCDE_DHIOJINMBHF& param_3, ::KPOAMHEOCDE_KOJNBCCFOAM& param_4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::KPOAMHEOCDE_DHIOJINMBHF&, ::KPOAMHEOCDE_KOJNBCCFOAM&))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_EHGLGGPHEBE_OFFSET))(MFEECDMPLDH, BAGLLCBFGED, JEHLLEPFDKF, param_3, param_4);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPOAMHEOCDE_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void CEMOBPAMKJF(::GIGJPIFBFMO& HLFFCMIFFIB, ::UnityEngine::Vector2 DODLKOBPICM, ::KPOAMHEOCDE_AKOKCAIBADD& param_2)
	{
		return ((::System::Void(*)(::GIGJPIFBFMO&, ::UnityEngine::Vector2, ::KPOAMHEOCDE_AKOKCAIBADD&))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_CEMOBPAMKJF_OFFSET))(HLFFCMIFFIB, DODLKOBPICM, param_2);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOAMHEOCDE_CMFOMGGDPPA_OFFSET))(this);
	}
};
