#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_CFADNEDPHJL_OFFSET UNITYSDK_OFFSET(0x181272D0)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_CIBONHMNLEN_OFFSET UNITYSDK_OFFSET(0x181271A0)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_CMHLHKIDHOO_OFFSET UNITYSDK_OFFSET(0x18126AA0)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_EIHNCLBIJFG_OFFSET UNITYSDK_OFFSET(0x18127320)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_ILDPPJHNEIL_1_OFFSET UNITYSDK_OFFSET(0x18126F90)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_ILDPPJHNEIL_OFFSET UNITYSDK_OFFSET(0x18126E20)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_MDDMOCEDPGG_OFFSET UNITYSDK_OFFSET(0x18126D70)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_OCLHHMKLGDB_OFFSET UNITYSDK_OFFSET(0x18126B50)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x18126A60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LoopSubdivisionDataHolderParams_TypeDefinitionIndex = 89886;

	class LoopSubdivisionDataHolderParams : public ::System::Object
	{
	public:
		::System::Boolean allowLoopSubdivision; // 0x10
		::System::Boolean skipAllAdaptiveStrategies; // 0x11
		::System::Boolean enableNormalConstraint; // 0x12
		::System::Boolean enableBackFaceCulling; // 0x13
		::System::Boolean enableFrontFaceCulling; // 0x14
		::System::Boolean enableDistanceCulling; // 0x15
		::System::Boolean enableVertexLengthCulling; // 0x16
		::System::Byte _padding0[0x1];
		::System::Single frontFaceCullingStart; // 0x18
		::System::Single frontFaceCullingEnd; // 0x1C
		::System::Single frontFaceCullingTolerance; // 0x20
		::System::Single screenLengthCullingStart; // 0x24
		::System::Single screenLengthCullingEnd; // 0x28
		::System::Single distanceCullingStart; // 0x2C
		::System::Single distanceCullingEnd; // 0x30
		::System::Single allowLoopSubdivisionF; // 0x34
		::System::Single skipAllAdaptiveStrategiesF; // 0x38
		::System::Single enableNormalConstraintF; // 0x3C
		::System::Single enableBackFaceCullingF; // 0x40
		::System::Single enableFrontFaceCullingF; // 0x44
		::System::Single enableDistanceCullingF; // 0x48
		::System::Single enableVertexLengthCullingF; // 0x4C
		::System::Single frontFaceCullingStartF; // 0x50
		::System::Single frontFaceCullingEndF; // 0x54
		::System::Single frontFaceCullingToleranceF; // 0x58
		::System::Single screenLengthCullingStartF; // 0x5C
		::System::Single screenLengthCullingEndF; // 0x60
		::System::Single distanceCullingStartF; // 0x64
		::System::Single distanceCullingEndF; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void CMHLHKIDHOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_CMHLHKIDHOO_OFFSET))(this);
		}

		::System::Void OCLHHMKLGDB(::UnityEngine::SkinnedMeshRenderer* OCFHGOGFGPE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_OCLHHMKLGDB_OFFSET))(this, OCFHGOGFGPE);
		}

		::System::Void MDDMOCEDPGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_MDDMOCEDPGG_OFFSET))(this);
		}

		::System::Void ILDPPJHNEIL(::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* AEPONOJONAA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_ILDPPJHNEIL_OFFSET))(this, AEPONOJONAA);
		}

		::System::Void ILDPPJHNEIL_1(::UnityEngine::SkinnedMeshRenderer* OCFHGOGFGPE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_ILDPPJHNEIL_1_OFFSET))(this, OCFHGOGFGPE);
		}

		static ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* CIBONHMNLEN(::MoleMole::Timeline::LoopSubdivisionDataHolderParams* FGLJPLFOOKH, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* JKJBHEJKNDO)
		{
			return ((::MoleMole::Timeline::LoopSubdivisionDataHolderParams*(*)(::MoleMole::Timeline::LoopSubdivisionDataHolderParams*, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_CIBONHMNLEN_OFFSET))(FGLJPLFOOKH, JKJBHEJKNDO);
		}

		::System::Void CFADNEDPHJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_CFADNEDPHJL_OFFSET))(this);
		}

		static ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* EIHNCLBIJFG(::System::Single MMMBANGAKHP, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* JKJBHEJKNDO)
		{
			return ((::MoleMole::Timeline::LoopSubdivisionDataHolderParams*(*)(::System::Single, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_EIHNCLBIJFG_OFFSET))(MMMBANGAKHP, JKJBHEJKNDO);
		}
	};
}
