#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"

namespace RootMotion::FinalIK { class FBIKChain; }
namespace RootMotion::FinalIK { class IKEffector; }
namespace RootMotion::FinalIK { class IKMappingBone; }
namespace RootMotion::FinalIK { class IKMappingLimb; }
namespace RootMotion::FinalIK { class IKMappingSpine; }
namespace RootMotion::FinalIK { class IKSolver_IterationDelegate; }
namespace RootMotion::FinalIK { class IKSolver_Node; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_APPLYBENDCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1F6FF6F0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F6FE9A0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETCHAINANDNODEINDEXES_OFFSET UNITYSDK_OFFSET(0x1F6FE070)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETCHAININDEX_OFFSET UNITYSDK_OFFSET(0x1F6FDEB0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETCHAIN_OFFSET UNITYSDK_OFFSET(0x1F6FDE60)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1F6FDD60)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETNODE_OFFSET UNITYSDK_OFFSET(0x1F6FE000)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1F6FE0F0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1F6FE340)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F6FE500)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1F6FEAF0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6FED40)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_READPOSE_OFFSET UNITYSDK_OFFSET(0x1F6FEEE0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F6FF250)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F6FE7D0)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY_WRITEPOSE_OFFSET UNITYSDK_OFFSET(0x1F6FF740)
#define ROOTMOTION_FINALIK_IKSOLVERFULLBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FF940)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverFullBody_TypeDefinitionIndex = 36853;

	class IKSolverFullBody : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::System::Int32 iterations; // 0x60
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RootMotion::FinalIK::FBIKChain*>* chain; // 0x68
		::Il2CppArray<::RootMotion::FinalIK::IKEffector*>* effectors; // 0x70
		::RootMotion::FinalIK::IKMappingSpine* spineMapping; // 0x78
		::Il2CppArray<::RootMotion::FinalIK::IKMappingBone*>* boneMappings; // 0x80
		::Il2CppArray<::RootMotion::FinalIK::IKMappingLimb*>* limbMappings; // 0x88
		::System::Boolean FABRIKPass; // 0x90
		::System::Byte _padding1[0x7];
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreRead; // 0x98
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreSolve; // 0xA0
		::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration; // 0xA8
		::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPostIteration; // 0xB0
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreBend; // 0xB8
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostSolve; // 0xC0
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnStoreDefaultLocalState; // 0xC8
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnFixTransforms; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY__CTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* GetEffector(::UnityEngine::Transform* t)
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETEFFECTOR_OFFSET))(this, t);
		}

		::RootMotion::FinalIK::FBIKChain* GetChain(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::FBIKChain*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETCHAIN_OFFSET))(this, transform);
		}

		::System::Int32 GetChainIndex(::UnityEngine::Transform* transform)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETCHAININDEX_OFFSET))(this, transform);
		}

		::RootMotion::FinalIK::IKSolver_Node* GetNode(::System::Int32 chainIndex, ::System::Int32 nodeIndex)
		{
			return ((::RootMotion::FinalIK::IKSolver_Node*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETNODE_OFFSET))(this, chainIndex, nodeIndex);
		}

		::System::Void GetChainAndNodeIndexes(::UnityEngine::Transform* transform, ::System::Int32& chainIndex, ::System::Int32& nodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETCHAINANDNODEINDEXES_OFFSET))(this, transform, chainIndex, nodeIndex);
		}

		::Il2CppArray<::System::Object*>* GetPoints()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_GETPOINT_OFFSET))(this, transform);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_ISVALID_OFFSET))(this, message);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_ONUPDATE_OFFSET))(this);
		}

		::System::Void ReadPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_READPOSE_OFFSET))(this);
		}

		::System::Void Solve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_SOLVE_OFFSET))(this);
		}

		::System::Void ApplyBendConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_APPLYBENDCONSTRAINTS_OFFSET))(this);
		}

		::System::Void WritePose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFULLBODY_WRITEPOSE_OFFSET))(this);
		}
	};
}
