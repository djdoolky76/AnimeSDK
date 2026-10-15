#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BKEEADFGJEI;
class DOBDMMLFKDL;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_BNHNOPBHPAG_OFFSET UNITYSDK_OFFSET(0xDC87270)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC87950)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DFPEGENMMGA_OFFSET UNITYSDK_OFFSET(0xDC875B0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC878F0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_EDEIAIDBONK_OFFSET UNITYSDK_OFFSET(0xDC84F70)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_FPKGHBEFOKK_OFFSET UNITYSDK_OFFSET(0xDC85CF0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_IJCOKEGODPM_OFFSET UNITYSDK_OFFSET(0xDC85560)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ILFILNHDLBM_OFFSET UNITYSDK_OFFSET(0xDC86060)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC84E10)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_JBPJPHICOGN_OFFSET UNITYSDK_OFFSET(0xDC85E90)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_KDAPOLAMFDD_OFFSET UNITYSDK_OFFSET(0xDC85B60)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_LNCDIICCLPJ_OFFSET UNITYSDK_OFFSET(0xDC86640)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_MKAIEEGHEDM_OFFSET UNITYSDK_OFFSET(0xDC85DB0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_MMPOEBIGBDA_OFFSET UNITYSDK_OFFSET(0xDC86440)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_OFNJCNPMINB_OFFSET UNITYSDK_OFFSET(0xDC87030)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARCANCELLIGHTUP_OFFSET UNITYSDK_OFFSET(0xDC86F60)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARLIGHTUP_OFFSET UNITYSDK_OFFSET(0xDC86E90)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC86AA0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC871D0)

namespace RPG::Client::Prop::CoilPuzzle
{
	class RigCoilPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Int32 HGAHBOPNDFE; // 0x48
		::System::Int32 LBBOLPHJFPM; // 0x4C
		::DOBDMMLFKDL* IIJCGAOPMCM; // 0x50
		::BKEEADFGJEI* ENLPPLBIHHI; // 0x58
		::UnityEngine::Transform* AAFCLHHFPBP; // 0x60
		::UnityEngine::Transform* DHDOBALIDKP; // 0x68
		::System::Collections::Generic::List_1<::DOBDMMLFKDL*>* KAPHIKMKNOF; // 0x70
		::System::Collections::Generic::List_1<::BKEEADFGJEI*>* DPKGFHCGHBP; // 0x78
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::BKEEADFGJEI*>* KNOBGNHGLMO; // 0x80
		::System::String* OriginPoint; // 0x88
		::System::UInt32 ObstacleGroup; // 0x90
		::System::UInt32 PillarGroup; // 0x94
		::UnityEngine::GameObject* RopeTemplate; // 0x98
		::UnityEngine::Material* PillarActiveMat; // 0xA0
		::UnityEngine::Material* PillarDeactiveMat; // 0xA8
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0xB0
		static ::System::Int32* StaticGet_RopeIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop.CoilPuzzle", "RigCoilPuzzleBoard")->GetStaticField(0x15A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KDAPOLAMFDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_KDAPOLAMFDD_OFFSET))(this);
		}

		::System::Void IJCOKEGODPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_IJCOKEGODPM_OFFSET))(this);
		}

		::System::Void EDEIAIDBONK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_EDEIAIDBONK_OFFSET))(this);
		}

		::System::Void FPKGHBEFOKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_FPKGHBEFOKK_OFFSET))(this);
		}

		::DOBDMMLFKDL* MKAIEEGHEDM(::UnityEngine::Vector3 a1)
		{
			return ((::DOBDMMLFKDL*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_MKAIEEGHEDM_OFFSET))(this, a1);
		}

		::System::Void JBPJPHICOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_JBPJPHICOGN_OFFSET))(this);
		}

		::System::Void ILFILNHDLBM(::UnityEngine::RaycastHit a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ILFILNHDLBM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MMPOEBIGBDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_MMPOEBIGBDA_OFFSET))(this);
		}

		::System::Void LNCDIICCLPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_LNCDIICCLPJ_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void OnPillarLightup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARLIGHTUP_OFFSET))(this);
		}

		::System::Void OnPillarCancelLightup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARCANCELLIGHTUP_OFFSET))(this);
		}

		::System::Void OFNJCNPMINB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_OFNJCNPMINB_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void BNHNOPBHPAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_BNHNOPBHPAG_OFFSET))(this);
		}

		::System::Void DFPEGENMMGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DFPEGENMMGA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

	};
}
