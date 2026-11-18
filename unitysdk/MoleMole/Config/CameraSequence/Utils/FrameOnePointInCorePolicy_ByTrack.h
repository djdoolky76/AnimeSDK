#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameOnePointInCorePolicy.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AspectRatioPolicy_Default; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_BAIEPOPJLKA_OFFSET UNITYSDK_OFFSET(0xFFCEC10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xFFCDA00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0xFFCF080)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0xFFCF4A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GETDATA_OFFSET UNITYSDK_OFFSET(0xFFCDBA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xFFCE9D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GIIAECGOAPG_OFFSET UNITYSDK_OFFSET(0xFFCF360)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_IDJOPAHLGIP_OFFSET UNITYSDK_OFFSET(0xFFCF6F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_KNCOIMPLHIP_OFFSET UNITYSDK_OFFSET(0xFFCECC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_LDMIMBPDCBC_OFFSET UNITYSDK_OFFSET(0xFFCED70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_LONKFIDCBDC_OFFSET UNITYSDK_OFFSET(0xFFCF850)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_MHDMFGJGEKB_OFFSET UNITYSDK_OFFSET(0xFFCF7A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_NDAAHAGOHPI_OFFSET UNITYSDK_OFFSET(0xFFCEEB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_OIIJDIKECMA_OFFSET UNITYSDK_OFFSET(0xFFCF530)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0xFFCF170)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_SETPATH_OFFSET UNITYSDK_OFFSET(0xFFCD960)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFCEB00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCE9E0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex = 61950;

	class FrameOnePointInCorePolicy_ByTrack : public ::PipelineCamera::CameraSequence::FrameOnePointInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ElevationRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x128D0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x128D8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x128E0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_cameraOrbits()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x128E8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PolarAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x128F0);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>** StaticGet__orbitBufferInstance()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>** StaticGet__screenOffsetBufferInstance()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* cameraOrbits; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* screenOffset; // 0x48
		::PipelineCamera::CameraSequence::AspectRatioPolicy_Default* aspectRatio; // 0x50
		::System::Single fieldOfView; // 0x58
		::System::Single ElevationRatio; // 0x5C
		::System::Single PolarAngle; // 0x60
		::System::Boolean makeContextDependent; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 OPMPKFEHOBM)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, OPMPKFEHOBM);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Single BAIEPOPJLKA(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_BAIEPOPJLKA_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single KNCOIMPLHIP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_KNCOIMPLHIP_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* LDMIMBPDCBC(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* HADCGJEFFBF)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_LDMIMBPDCBC_OFFSET))(HADCGJEFFBF);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		static ::System::Void PKAFJHDJEDO(::System::Single EHAOLKJPKAO, ::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* KDNNJFLAICO, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* IPGAMLKOCPC, ::UnityEngine::Vector2& DDKAJHFOMBG, ::UnityEngine::Vector2& EIFLCEKOIFM)
		{
			return ((::System::Void(*)(::System::Single, ::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_PKAFJHDJEDO_OFFSET))(EHAOLKJPKAO, KDNNJFLAICO, IPGAMLKOCPC, DDKAJHFOMBG, EIFLCEKOIFM);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* NDAAHAGOHPI()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_NDAAHAGOHPI_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* OIIJDIKECMA()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_OIIJDIKECMA_OFFSET))();
		}

		::System::Single IDJOPAHLGIP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_IDJOPAHLGIP_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* GIIAECGOAPG(::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* ALMNOGIJGAP)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)(::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GIIAECGOAPG_OFFSET))(ALMNOGIJGAP);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* MHDMFGJGEKB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_MHDMFGJGEKB_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* LONKFIDCBDC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_LONKFIDCBDC_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
