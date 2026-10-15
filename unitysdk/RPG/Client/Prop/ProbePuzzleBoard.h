#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD84390)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_CEEEDGIBIOH_OFFSET UNITYSDK_OFFSET(0xDD81950)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD84270)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD810B0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_GLNPHBHJMNJ_OFFSET UNITYSDK_OFFSET(0xDD80D30)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_IBDHKLFAKJP_OFFSET UNITYSDK_OFFSET(0xDD83620)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD806B0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD81060)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_LNHDAFFDMEN_OFFSET UNITYSDK_OFFSET(0xDD82D00)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_NPELFHOHOLJ_OFFSET UNITYSDK_OFFSET(0xDD83E20)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xDD81570)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_SETRESETNUMBER_OFFSET UNITYSDK_OFFSET(0xDD814C0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD80DB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleBoard_TypeDefinitionIndex = 78778;

	class ProbePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::String* Target; // 0x48
		::System::String* ProbePropID_DS; // 0x50
		::System::Single ProbeRotateRatio; // 0x58
		::System::Single ProbeSafeRadius; // 0x5C
		::System::String* ProbePlaceFailTextID; // 0x60
		::System::Single DistanceComplete; // 0x68
		::System::Single DistanceDisappear; // 0x6C
		::Il2CppArray<::System::Single>* DistanceLevel; // 0x70
		::System::UInt32 LLDCHLHNADA; // 0x78
		::System::UInt32 GACEMBBAGMP; // 0x7C
		::System::UInt32 OMHPPNNKNNC; // 0x80
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PropRow* PIPPNNPGNMM; // 0x88
		::RPG::GameCore::PropConfig* PCPHFGIADMF; // 0x90
		::System::UInt32 JGEJHLKFPOA; // 0x98
		::System::UInt32 ABIMLEDIEKI; // 0x9C
		::System::UInt32 LJMMCHDGDAC; // 0xA0
		::System::Int32 HGAHFGMDDKC; // 0xA4
		::System::Single FHGLNBLLOFE; // 0xA8
		::System::Boolean DCHDCOBMIKL; // 0xAC
		::System::Boolean IGLBOKOBNHN; // 0xAD
		::System::Boolean NLPKJIJDJBK; // 0xAE
		::System::Byte _padding1[0x1];
		::System::Single DHPPNINHMOJ; // 0xB0
		::System::Byte _padding2[0x4];
		::UnityEngine::Object* JFKLENKPKPL; // 0xB8
		::UnityEngine::Transform* OJAHLJGABMJ; // 0xC0
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* CADFLPJPABG; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* POHPBFNBDEN; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PCCIMEKCCPB; // 0xD8
		::UnityEngine::GameObject* MNAFOLKDBNJ; // 0xE0
		::RPG::GameCore::NotifyShowFuncBtnParam* OLDAHDINLCN; // 0xE8
		static ::System::String** StaticGet_CJDIFCBFIAB()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleBoard")->GetStaticField(0x5BBE0);
		}

		static ::System::Int32* StaticGet_HPFOEOPAFNI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleBoard")->GetStaticField(0x13EC0);
		}

		static ::UnityEngine::Vector3* StaticGet_HMEHAGGCBHF()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleBoard")->GetStaticField(0x13EC4);
		}

		static ::System::Int32* StaticGet_LKENCCLAPAE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleBoard")->GetStaticField(0x13ED0);
		}

		static ::UnityEngine::Vector3* StaticGet_OIPLILIGFCL()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleBoard")->GetStaticField(0x13ED4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void SetResetNumber(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_SETRESETNUMBER_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_RESET_OFFSET))(this);
		}

		::System::Void CEEEDGIBIOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_CEEEDGIBIOH_OFFSET))(this, a1);
		}

		::System::Boolean LNHDAFFDMEN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_LNHDAFFDMEN_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* IBDHKLFAKJP(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_IBDHKLFAKJP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* NPELFHOHOLJ(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_NPELFHOHOLJ_OFFSET))(this, a1);
		}

		::System::UInt32 GLNPHBHJMNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_GLNPHBHJMNJ_OFFSET))(this);
		}

	};
}
