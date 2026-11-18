#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FFPEPGIGBNJ.h"

class LBMGHNEIBDP;
class NBMMHIPLCGM;
namespace MoleMole::Engine { class StreamingGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_AJEAOHEHABP_OFFSET UNITYSDK_OFFSET(0x139D1000)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x139CFC40)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FEOMBAFCBLK_OFFSET UNITYSDK_OFFSET(0x139D0550)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATESTATES_OFFSET UNITYSDK_OFFSET(0x139CE640)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x139CE710)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GBKCECAMPNA_OFFSET UNITYSDK_OFFSET(0x139CF6D0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GEJAODLNMML_OFFSET UNITYSDK_OFFSET(0x139D02A0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GETSTATS_OFFSET UNITYSDK_OFFSET(0x139D0440)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GLJPOKMBBGB_OFFSET UNITYSDK_OFFSET(0x139D1810)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_HPOJNFABCPC_OFFSET UNITYSDK_OFFSET(0x139CF180)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ILEANNKLIMM_OFFSET UNITYSDK_OFFSET(0x139D0C50)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ISMESHSTREAMINGMANAGERRUNNING_OFFSET UNITYSDK_OFFSET(0x139CE470)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x139CF490)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x139D01C0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERINITIALLOADDONEACTION_OFFSET UNITYSDK_OFFSET(0x139D00F0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET UNITYSDK_OFFSET(0x139CFF00)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_START_OFFSET UNITYSDK_OFFSET(0x139CE7E0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TESTUPDATE_OFFSET UNITYSDK_OFFSET(0x139D0210)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TRYCLEANUPLASTINSTANCE_OFFSET UNITYSDK_OFFSET(0x139CFA70)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x139D0520)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x139D04C0)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int MeshStreamingManager_TypeDefinitionIndex = 42435;

	class MeshStreamingManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Engine::MeshStreamingManager** StaticGet_PJOHEHACGDJ()
		{
			return (::MoleMole::Engine::MeshStreamingManager**)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0x41AA0);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xEFC0);
		}
		static ::System::Single* StaticGet_MaxLODStateQuerySquareDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xEFC4);
		}
		static ::System::Int32* StaticGet_TestState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xEFC8);
		}
		static ::System::Single* StaticGet_StableDistanceThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xEFCC);
		}
		static ::System::Int32* StaticGet_LastLODStateQueryFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xEFD0);
		}
		static ::System::Single* StaticGet_MaxLODStateQueryFrameDiff()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xEFD4);
		}
		static ::System::Int32* StaticGet_MaxGroupUpdatePerFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xEFD8);
		}
		// static const ::System::String* MeshStreamingBuildStatePath; // 0x0
		// static const ::System::String* NameMeshStreamingRoot; // 0x0
		// static const ::System::Int32 NotLoading = -0x8000000; // 0x0
		// static const ::System::Int32 reallyUnloadLimit = 0x1E; // 0x0
		::Il2CppArray<::System::String*>* StreamingMeshPaths; // 0x18
		::Il2CppArray<::MoleMole::Engine::StreamingGroup*>* StreamingGroups; // 0x20
		::System::Boolean AHJAAHBFICB; // 0x28
		::System::Boolean KHEIFFMJCBL; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 OCPKLECGKLD; // 0x2C
		::Il2CppArray<::LBMGHNEIBDP*>* AIKPGLMEOKM; // 0x30
		::Il2CppArray<::NBMMHIPLCGM*>* NBIFOHJNDBE; // 0x38
		::Il2CppArray<::System::Int32>* ICAJNCCBLLI; // 0x40
		::Il2CppArray<::System::Byte>* NHLMKCIENPJ; // 0x48
		::System::Runtime::InteropServices::GCHandle OOLGJIOOGOO; // 0x50
		::System::Runtime::InteropServices::GCHandle BHOIBMJGKCB; // 0x54
		::System::IntPtr LFOOHEECNMI; // 0x58
		::System::IntPtr JNDDKDOKIEL; // 0x60
		::UnityEngine::Vector3 EBLCOLHILOL; // 0x68
		::System::Int32 HGJENCFCJEB; // 0x74
		::System::Int32 NFCHPDHCAPO; // 0x78
		::System::Byte _padding1[0x4];
		::System::Action* LCKDKAJFGNJ; // 0x80
		::System::Int32 GECBBPHICAH; // 0x88
		::System::Int32 MPMLAONNGBN; // 0x8C
		::System::Boolean JFEKFAJIJJI; // 0x90
		::System::Byte _padding2[0x3];
		::System::Int32 JEEEBNJLHID; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsMeshStreamingManagerRunning()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ISMESHSTREAMINGMANAGERRUNNING_OFFSET))();
		}

		static ::System::Void ForceUpdateStates()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATESTATES_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_START_OFFSET))(this);
		}

		static ::System::Void TryCleanupLastInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TRYCLEANUPLASTINSTANCE_OFFSET))();
		}

		static ::System::Void RegisterOrRunAfterLoadAction(::System::Action* GJBHEJGENMI)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET))(GJBHEJGENMI);
		}

		::System::Void RegisterInitialLoadDoneAction(::System::Action* IAHCJCEBMJD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERINITIALLOADDONEACTION_OFFSET))(this, IAHCJCEBMJD);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void TestUpdate(::System::Byte LBPIPEAKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TESTUPDATE_OFFSET))(this, LBPIPEAKPDG);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::FFPEPGIGBNJ GetStats()
		{
			return ((::FFPEPGIGBNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GETSTATS_OFFSET))(this);
		}

		::UnityEngine::Camera* HPOJNFABCPC(::UnityEngine::Vector3& CKPGOKHECCH)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_HPOJNFABCPC_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void GBKCECAMPNA(::System::Boolean FGHBEBCCLHJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GBKCECAMPNA_OFFSET))(this, FGHBEBCCLHJ);
		}

		::System::Void GEJAODLNMML(::UnityEngine::Camera* LLFDABJAHII)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GEJAODLNMML_OFFSET))(this, LLFDABJAHII);
		}

		::System::Void GLJPOKMBBGB(::LBMGHNEIBDP* CEKAJLAPJDA, ::System::String* ILDNDFJKJFG)
		{
			return ((::System::Void(*)(::PVOID, ::LBMGHNEIBDP*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GLJPOKMBBGB_OFFSET))(this, CEKAJLAPJDA, ILDNDFJKJFG);
		}

		::System::Void AJEAOHEHABP(::NBMMHIPLCGM* OEEIIGBHMLN)
		{
			return ((::System::Void(*)(::PVOID, ::NBMMHIPLCGM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_AJEAOHEHABP_OFFSET))(this, OEEIIGBHMLN);
		}

		::System::Void AOPGPMDDDDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_AOPGPMDDDDI_OFFSET))(this);
		}

		::System::Void FEOMBAFCBLK(::NBMMHIPLCGM* OEEIIGBHMLN, ::System::Int32 MOBNMDEDJIP)
		{
			return ((::System::Void(*)(::PVOID, ::NBMMHIPLCGM*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FEOMBAFCBLK_OFFSET))(this, OEEIIGBHMLN, MOBNMDEDJIP);
		}

		::System::Void ILEANNKLIMM(::NBMMHIPLCGM* OEEIIGBHMLN, ::System::Int32 MOBNMDEDJIP)
		{
			return ((::System::Void(*)(::PVOID, ::NBMMHIPLCGM*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ILEANNKLIMM_OFFSET))(this, OEEIIGBHMLN, MOBNMDEDJIP);
		}
	};
}
