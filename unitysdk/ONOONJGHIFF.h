#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJEFEPMHEEH.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONOONJGHIFF_AOCELAADJFH_OFFSET UNITYSDK_OFFSET(0x13A76870)
#define ONOONJGHIFF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13A762E0)
#define ONOONJGHIFF_GBPDIFDJNFK_OFFSET UNITYSDK_OFFSET(0x13A75D40)
#define ONOONJGHIFF_GMJGDEGGLKG_OFFSET UNITYSDK_OFFSET(0x13A76420)
#define ONOONJGHIFF_JCIGINJCMLC_OFFSET UNITYSDK_OFFSET(0x13A761B0)
#define ONOONJGHIFF_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x13A76430)
#define ONOONJGHIFF_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x13A76200)
#define ONOONJGHIFF_ONKBPJKIMGO_OFFSET UNITYSDK_OFFSET(0x13A763C0)
#define ONOONJGHIFF_PPMIKADDOJI_OFFSET UNITYSDK_OFFSET(0x13A763D0)
#define ONOONJGHIFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A75CE0)
#define ONOONJGHIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A75690)

inline static constexpr unsigned int ONOONJGHIFF_TypeDefinitionIndex = 41455;

class ONOONJGHIFF : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	static ::Foundation::Unreal::FName* StaticGet_CEPPNNBCFEO()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ONOONJGHIFF_TypeDefinitionIndex)->GetStaticField(0x101E0);
	}
	// static const ::System::Single BCCJDLHIHND; // 0x0
	::System::Action_1<::System::Object*>* EGBBBMAIKNP; // 0x60
	::Nap::NapECS::EcsWorld* FPGOIBHDCPA; // 0x68
	::Il2CppArray<::System::UInt32>* NDEGODIEBED; // 0x70
	::MAJGCLDPEFI KBCNAMECKPF; // 0x78
	::CJEFEPMHEEH DHFCCNIDKJP; // 0x7C
	::PipelineCamera::WorldBasicCameraData CMHGDNMEBIM; // 0x84
	::System::UInt32 BFDNOABHJAN; // 0xB0

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EOFMKOGLAFI, ::MAJGCLDPEFI OIHMEKKENJL, ::CJEFEPMHEEH PFKPFJHFIGL, ::System::UInt32 LBBPCNFELPA, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::MAJGCLDPEFI, ::CJEFEPMHEEH, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ONOONJGHIFF__CTOR_OFFSET))(this, EOFMKOGLAFI, OIHMEKKENJL, PFKPFJHFIGL, LBBPCNFELPA, HNGJFALIMGN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONOONJGHIFF__CCTOR_OFFSET))();
	}

	::PipelineCamera::WorldBasicCameraData GBPDIFDJNFK()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_GBPDIFDJNFK_OFFSET))(this);
	}

	::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* JCIGINJCMLC()
	{
		return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_JCIGINJCMLC_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN(::System::Nullable_1<::System::Boolean> GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + ONOONJGHIFF_OKLLFEIJKHN_OFFSET))(this, GDNECMBHKND);
	}

	static ::ONOONJGHIFF* COKNIICCODC(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EOFMKOGLAFI, ::MAJGCLDPEFI OIHMEKKENJL, ::CJEFEPMHEEH PFKPFJHFIGL, ::System::UInt32 LBBPCNFELPA, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
	{
		return ((::ONOONJGHIFF*(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::MAJGCLDPEFI, ::CJEFEPMHEEH, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ONOONJGHIFF_COKNIICCODC_OFFSET))(EOFMKOGLAFI, OIHMEKKENJL, PFKPFJHFIGL, LBBPCNFELPA, HNGJFALIMGN);
	}

	::System::Single ONKBPJKIMGO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_ONKBPJKIMGO_OFFSET))(this);
	}

	::System::Boolean PPMIKADDOJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_PPMIKADDOJI_OFFSET))(this);
	}

	::System::Single GMJGDEGGLKG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_GMJGDEGGLKG_OFFSET))(this);
	}

	::System::Boolean JMDEKPONKMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_JMDEKPONKMF_OFFSET))(this);
	}

	::System::Boolean AOCELAADJFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_AOCELAADJFH_OFFSET))(this);
	}
};
