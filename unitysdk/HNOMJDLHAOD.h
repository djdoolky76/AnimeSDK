#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HNOMJDLHAOD_PANKBAEOPDH.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class BDGOCJOFPEA;
class DAKDOMLMDGC;
class FDABFGBJMAD;
class GHICACFMBNP;
class IJHBGBFHLLF;
namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig; }
namespace MoleMole::GalGame { class MainCityChatShowUINode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNOMJDLHAOD_BECLFLKHLHF_OFFSET UNITYSDK_OFFSET(0x140C3DE0)
#define HNOMJDLHAOD_CGDHFKLPKDJ_OFFSET UNITYSDK_OFFSET(0x140C4B50)
#define HNOMJDLHAOD_CJODFHEHPMH_OFFSET UNITYSDK_OFFSET(0x140C4AA0)
#define HNOMJDLHAOD_FJPABFJFMII_OFFSET UNITYSDK_OFFSET(0x140C3DD0)
#define HNOMJDLHAOD_FNLNACPIAFB_OFFSET UNITYSDK_OFFSET(0x140C5260)
#define HNOMJDLHAOD_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x140C4CA0)
#define HNOMJDLHAOD_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x140C38C0)
#define HNOMJDLHAOD_JDBAMAELGEB_OFFSET UNITYSDK_OFFSET(0x140C4C00)
#define HNOMJDLHAOD_JGHBKCFKMKP_OFFSET UNITYSDK_OFFSET(0x140C3D40)
#define HNOMJDLHAOD_KGFCKJHCLDE_OFFSET UNITYSDK_OFFSET(0x140C5D30)
#define HNOMJDLHAOD_KIKDKNFBIJC_OFFSET UNITYSDK_OFFSET(0x140C3F60)
#define HNOMJDLHAOD_KLBNNJLGNOF_OFFSET UNITYSDK_OFFSET(0x140C5190)
#define HNOMJDLHAOD_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x140C4B60)
#define HNOMJDLHAOD_LIJEMKOCHMF_OFFSET UNITYSDK_OFFSET(0x140C4CB0)
#define HNOMJDLHAOD_NFHCNMOHKKH_OFFSET UNITYSDK_OFFSET(0x140C4BF0)
#define HNOMJDLHAOD_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x140C3DC0)
#define HNOMJDLHAOD_PCABNOAGIGB_OFFSET UNITYSDK_OFFSET(0x140C3F70)
#define HNOMJDLHAOD_POECAFAINHB_OFFSET UNITYSDK_OFFSET(0x140C3AD0)
#define HNOMJDLHAOD__CTOR_OFFSET UNITYSDK_OFFSET(0x140C37F0)

inline static constexpr unsigned int HNOMJDLHAOD_TypeDefinitionIndex = 48152;

class HNOMJDLHAOD : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatShowUIConfig* _DGGBKMAKAJI_k__BackingField; // 0x40
	::IJHBGBFHLLF* GJEJAHFNBLG; // 0x48
	::MoleMole::GalGame::MainCityChatShowUINode* _NHAIGAEJNFH_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>* _HNGOEEEDLKK_k__BackingField; // 0x58
	::GHICACFMBNP* LOBDJHGKIIF; // 0x60
	::UnityEngine::Quaternion EILJALICJJI; // 0x68
	::UnityEngine::Vector3 FKKALNBFKEI; // 0x78
	::System::Single MGFGNADNJKE; // 0x84
	::UnityEngine::Vector3 JIKIELPMELC; // 0x88
	::System::Single OGJFJKNCDGE; // 0x94
	::System::Single LNDINGDNAJK; // 0x98
	::UnityEngine::Quaternion EIFABBAFLNG; // 0x9C

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + HNOMJDLHAOD__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void POECAFAINHB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_POECAFAINHB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JGHBKCFKMKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_JGHBKCFKMKP_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatShowUIConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIConfig*))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FJPABFJFMII(::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_FJPABFJFMII_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BECLFLKHLHF(::HNOMJDLHAOD_PANKBAEOPDH& param_0)
	{
		return ((::System::Void(*)(::PVOID, ::HNOMJDLHAOD_PANKBAEOPDH&))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_BECLFLKHLHF_OFFSET))(this, param_0);
	}

	::MoleMole::GalGame::MainCityChatShowUINode* KIKDKNFBIJC()
	{
		return ((::MoleMole::GalGame::MainCityChatShowUINode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_KIKDKNFBIJC_OFFSET))(this);
	}

	::System::Void PCABNOAGIGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_PCABNOAGIGB_OFFSET))(this);
	}

	::System::Void CJODFHEHPMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_CJODFHEHPMH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>* CGDHFKLPKDJ()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_CGDHFKLPKDJ_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NFHCNMOHKKH(::MoleMole::GalGame::MainCityChatShowUINode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUINode*))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_NFHCNMOHKKH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JDBAMAELGEB(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_JDBAMAELGEB_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::GalGame::MainCityChatShowUIConfig* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatShowUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_GACPDCEMJOA_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData LIJEMKOCHMF(::UnityEngine::Vector3 IKENCOBKLFJ, ::UnityEngine::Quaternion ODPAIGICCHE, ::FDABFGBJMAD* PMMHPDOBJAC, ::System::Single ECMOEENIHME)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::FDABFGBJMAD*, ::System::Single))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_LIJEMKOCHMF_OFFSET))(this, IKENCOBKLFJ, ODPAIGICCHE, PMMHPDOBJAC, ECMOEENIHME);
	}

	::PipelineCamera::WorldBasicCameraData KLBNNJLGNOF(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> PIIPCLCCOIG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_KLBNNJLGNOF_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FNLNACPIAFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_FNLNACPIAFB_OFFSET))(this);
	}

	::System::Void KGFCKJHCLDE(::BDGOCJOFPEA* KDAEELHLFNH, ::System::Single ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::BDGOCJOFPEA*, ::System::Single))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_KGFCKJHCLDE_OFFSET))(this, KDAEELHLFNH, ECMOEENIHME);
	}
};
