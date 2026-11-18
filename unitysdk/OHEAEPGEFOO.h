#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOILGDAAOAI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Photo/ScopedFrontCameraControlCameraConfig.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define OHEAEPGEFOO_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0xFB8C1B0)
#define OHEAEPGEFOO_BBCEAGAHFIP_OFFSET UNITYSDK_OFFSET(0xFB8C020)
#define OHEAEPGEFOO_BOKLLHPNEHA_OFFSET UNITYSDK_OFFSET(0xFB8CAB0)
#define OHEAEPGEFOO_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0xFB8BA40)
#define OHEAEPGEFOO_DHGBKBJFLMC_OFFSET UNITYSDK_OFFSET(0xFB8C0A0)
#define OHEAEPGEFOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFB8B750)
#define OHEAEPGEFOO_EAOMMCKEJGK_OFFSET UNITYSDK_OFFSET(0xFB8CB30)
#define OHEAEPGEFOO_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0xFB8BD40)
#define OHEAEPGEFOO_EGEAABAFKCO_OFFSET UNITYSDK_OFFSET(0xFB8BC80)
#define OHEAEPGEFOO_FAHDOHFFEAJ_OFFSET UNITYSDK_OFFSET(0xFB8C990)
#define OHEAEPGEFOO_GCOCGNDGNAC_OFFSET UNITYSDK_OFFSET(0xFB8BF00)
#define OHEAEPGEFOO_HCFLGAJCGOC_OFFSET UNITYSDK_OFFSET(0xFB8CA10)
#define OHEAEPGEFOO_HGOFINENHAG_OFFSET UNITYSDK_OFFSET(0xFB8C8A0)
#define OHEAEPGEFOO_IGKEODFBLGB_OFFSET UNITYSDK_OFFSET(0xFB8CBD0)
#define OHEAEPGEFOO_IHHCNPNNMNL_OFFSET UNITYSDK_OFFSET(0xFB8BF10)
#define OHEAEPGEFOO_INPKOLCHNLL_OFFSET UNITYSDK_OFFSET(0xFB8BAD0)
#define OHEAEPGEFOO_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0xFB8C680)
#define OHEAEPGEFOO_LANINFHICAD_OFFSET UNITYSDK_OFFSET(0xFB8C910)
#define OHEAEPGEFOO_LEGPAPIHJEG_OFFSET UNITYSDK_OFFSET(0xFB8C100)
#define OHEAEPGEFOO_MFIIKEGADCB_OFFSET UNITYSDK_OFFSET(0xFB8C160)
#define OHEAEPGEFOO_PPDMFDDIPGN_OFFSET UNITYSDK_OFFSET(0xFB8BE70)
#define OHEAEPGEFOO__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8B7F0)

inline static constexpr unsigned int OHEAEPGEFOO_TypeDefinitionIndex = 67819;

class OHEAEPGEFOO : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::BOILGDAAOAI JDEIDICJNOK; // 0x18
	::System::Single ABJCPIJKJBL; // 0xC8
	::System::Single AIADDNKEOPB; // 0xCC
	::System::Single HMOMFBMACJO; // 0xD0
	::System::Boolean LPAHKDLPPPI; // 0xD4

	::System::Void _ctor(::Foundation::Variable_1<::Foundation::Unreal::FTransform> FPBNHPCLHMI, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig&))((::PBYTE)hIl2Cpp + OHEAEPGEFOO__CTOR_OFFSET))(this, FPBNHPCLHMI, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData INPKOLCHNLL()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_INPKOLCHNLL_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* EGEAABAFKCO()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_EGEAABAFKCO_OFFSET))(this);
	}

	::UnityEngine::Quaternion PPDMFDDIPGN()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_PPDMFDDIPGN_OFFSET))(this);
	}

	::System::Single GCOCGNDGNAC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_GCOCGNDGNAC_OFFSET))(this);
	}

	::UnityEngine::Vector3 IHHCNPNNMNL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_IHHCNPNNMNL_OFFSET))(this);
	}

	::System::Single BBCEAGAHFIP(::System::Single NPHOPECPHLF)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_BBCEAGAHFIP_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Single DHGBKBJFLMC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_DHGBKBJFLMC_OFFSET))(this);
	}

	::System::Single LEGPAPIHJEG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_LEGPAPIHJEG_OFFSET))(this);
	}

	::System::Boolean MFIIKEGADCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_MFIIKEGADCB_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::System::Single HKHIMAKFCGD)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_ANJAOOMDFLA_OFFSET))(this, HKHIMAKFCGD);
	}

	::System::Void HGOFINENHAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_HGOFINENHAG_OFFSET))(this);
	}

	::System::Void LANINFHICAD(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_LANINFHICAD_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Single FAHDOHFFEAJ(::System::Single FLKMOKLIPKN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_FAHDOHFFEAJ_OFFSET))(this, FLKMOKLIPKN);
	}

	::System::Single HCFLGAJCGOC(::System::Single HLFFCMIFFIB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_HCFLGAJCGOC_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Single BOKLLHPNEHA(::System::Single IBCAFNKFIDH)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_BOKLLHPNEHA_OFFSET))(this, IBCAFNKFIDH);
	}

	::System::Single EAOMMCKEJGK(::System::Single HLFFCMIFFIB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_EAOMMCKEJGK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Single IGKEODFBLGB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_IGKEODFBLGB_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::System::Single HKHIMAKFCGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_CFHBPGGKCFN_OFFSET))(this, HKHIMAKFCGD);
	}
};
