#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver.h"
namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingBone; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace RPG::Client::FullBody { class IKMappingSpine; }
namespace RPG::Client::FullBody { class IKSolver_GENEMKKJMHE; }
namespace RPG::Client::FullBody { class IKSolver_MGKFICHLOIH; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xD07E370)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xD071FD0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CFEMBBNLLDC_OFFSET UNITYSDK_OFFSET(0xD07EE90)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CGBAMHBJPBK_OFFSET UNITYSDK_OFFSET(0xD07D8A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xD07E980)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CTOR_OFFSET UNITYSDK_OFFSET(0xD07F030)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_GKIAMADONGP_OFFSET UNITYSDK_OFFSET(0xD07EE20)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_HHDKLKNHIDI_OFFSET UNITYSDK_OFFSET(0xD07D9B0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_IHGBABEACON_OFFSET UNITYSDK_OFFSET(0xD07E1A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_KKANJACCOGM_OFFSET UNITYSDK_OFFSET(0xD07E6A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD07DCC0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xD07E060)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_LLNAPPLEBEL_OFFSET UNITYSDK_OFFSET(0xD07DEE0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_MBFECCIOMGB_OFFSET UNITYSDK_OFFSET(0xD073070)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_OFCHHAPMALA_OFFSET UNITYSDK_OFFSET(0xD072310)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_OMILLJFFGPC_OFFSET UNITYSDK_OFFSET(0xD07DA30)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_PLPKAKNHJEN_OFFSET UNITYSDK_OFFSET(0xD0669A0)

namespace RPG::Client::FullBody
{
	class IKSolverFullBody : public ::RPG::Client::FullBody::IKSolver
	{
	public:
		::System::Int32 iterations; // 0x58
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::FullBody::FBIKChain*>* chain; // 0x60
		::Il2CppArray<::RPG::Client::FullBody::IKEffector*>* effectors; // 0x68
		::RPG::Client::FullBody::IKMappingSpine* spineMapping; // 0x70
		::Il2CppArray<::RPG::Client::FullBody::IKMappingBone*>* boneMappings; // 0x78
		::Il2CppArray<::RPG::Client::FullBody::IKMappingLimb*>* limbMappings; // 0x80
		::System::Boolean FABRIKPass; // 0x88
		::System::Byte _padding1[0x7];
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPreRead; // 0x90
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPreSolve; // 0x98
		::RPG::Client::FullBody::IKSolver_MGKFICHLOIH* OnPreIteration; // 0xA0
		::RPG::Client::FullBody::IKSolver_MGKFICHLOIH* OnPostIteration; // 0xA8
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPreBend; // 0xB0
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPostSolve; // 0xB8
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnStoreDefaultLocalState; // 0xC0
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnFixTransforms; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* CGBAMHBJPBK(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CGBAMHBJPBK_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::FBIKChain* HHDKLKNHIDI(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_HHDKLKNHIDI_OFFSET))(this, a1);
		}

		::System::Int32 PLPKAKNHJEN(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_PLPKAKNHJEN_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKSolver_Node* MBFECCIOMGB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::FullBody::IKSolver_Node*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_MBFECCIOMGB_OFFSET))(this, a1, a2);
		}

		::System::Void OFCHHAPMALA(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_OFCHHAPMALA_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* OMILLJFFGPC()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_OMILLJFFGPC_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKSolver_Point* BMOMBCHEEEI(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_BMOMBCHEEEI_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void LLNAPPLEBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_LLNAPPLEBEL_OFFSET))(this);
		}

		::System::Void KPKDAIGMCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_KPKDAIGMCHM_OFFSET))(this);
		}

		::System::Void IHGBABEACON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_IHGBABEACON_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_AGHABIKPPNO_OFFSET))(this);
		}

		::System::Void KKANJACCOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_KKANJACCOGM_OFFSET))(this);
		}

		::System::Void CIJDJDICMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CIJDJDICMMM_OFFSET))(this);
		}

		::System::Void GKIAMADONGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_GKIAMADONGP_OFFSET))(this);
		}

		::System::Void CFEMBBNLLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODY_CFEMBBNLLDC_OFFSET))(this);
		}

	};
}
