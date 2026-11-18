#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/EntityLocationPolicy.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x11A62E50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x11A63D30)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_DEOJOMFCPFP_OFFSET UNITYSDK_OFFSET(0x11A63E20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_ECCIIMPECJP_OFFSET UNITYSDK_OFFSET(0x11A64010)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x11A63ED0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GETDATA_OFFSET UNITYSDK_OFFSET(0x11A62FF0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11A63860)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GIIBOMNPBLC_OFFSET UNITYSDK_OFFSET(0x11A63AD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GMLJLDIDCMC_OFFSET UNITYSDK_OFFSET(0x11A63A20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_HJBEFMLFOBA_OFFSET UNITYSDK_OFFSET(0x11A640C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_IFJMKONOEHP_OFFSET UNITYSDK_OFFSET(0x11A63F60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_MLBNKCFPHCJ_OFFSET UNITYSDK_OFFSET(0x11A63B80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_PICPKBCGAKM_OFFSET UNITYSDK_OFFSET(0x11A63C80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_SETPATH_OFFSET UNITYSDK_OFFSET(0x11A62DB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A63890)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11A63870)

namespace MoleMole::Config::CameraSequence::Utils::EntityLocation
{
	inline static constexpr unsigned int EntityLocationProviderByStretch_TypeDefinitionIndex = 53365;

	class EntityLocationProviderByStretch : public ::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_stretchRatioHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_stretchRatioVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12228);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_attachPointsVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12230);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainPointHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12238);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12240);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainPointVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12248);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fallbackVerticalRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12250);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_attachPointsHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0x12258);
		}
		::System::String* mainPointHorizontal; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* attachPointsHorizontal; // 0x48
		::System::Single stretchRatioHorizontal; // 0x50
		::System::Byte _padding0[0x4];
		::System::String* mainPointVertical; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* attachPointsVertical; // 0x60
		::System::Single stretchRatioVertical; // 0x68
		::UnityEngine::Vector3 offset; // 0x6C
		::System::Single fallbackVerticalRatio; // 0x78
		::System::Boolean makeContextDependent; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::UnityEngine::Vector3 GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* BLHJHPFBDCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, BKLGNCBNEGM, BLHJHPFBDCH);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Single GMLJLDIDCMC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GMLJLDIDCMC_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single GIIBOMNPBLC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GIIBOMNPBLC_OFFSET))(this, AAOCANGHBDG);
		}

		::UnityEngine::Vector3 MLBNKCFPHCJ(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_MLBNKCFPHCJ_OFFSET))(this, AAOCANGHBDG);
		}

		::System::String* PICPKBCGAKM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_PICPKBCGAKM_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::String* DEOJOMFCPFP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_DEOJOMFCPFP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Collections::Generic::List_1<::System::String*>* IFJMKONOEHP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_IFJMKONOEHP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Collections::Generic::List_1<::System::String*>* ECCIIMPECJP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_ECCIIMPECJP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single HJBEFMLFOBA(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_HJBEFMLFOBA_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
