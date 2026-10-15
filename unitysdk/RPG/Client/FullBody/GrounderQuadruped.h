#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/Grounder.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/FullBody/GrounderQuadruped_HPFNMMMLOAG.h"
namespace RPG::Client::FullBody { class Grounding; }
namespace RPG::Client::FullBody { class NewIK; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD068AB0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_CTOR_OFFSET UNITYSDK_OFFSET(0xD06C550)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_EBFCNBBOJAC_OFFSET UNITYSDK_OFFSET(0xD06BA00)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_EGLDDKDBDPL_OFFSET UNITYSDK_OFFSET(0xD068760)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_FORCERESET_OFFSET UNITYSDK_OFFSET(0xD068600)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GAMKDHFCDMB_OFFSET UNITYSDK_OFFSET(0xD068690)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_FINALWEIGHT_OFFSET UNITYSDK_OFFSET(0xD068050)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0xD068000)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GPFKLFIHMHG_OFFSET UNITYSDK_OFFSET(0xD06C250)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_HFKPDBKJJAA_OFFSET UNITYSDK_OFFSET(0xD068170)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_HHKCHIOIDOF_OFFSET UNITYSDK_OFFSET(0xD067F20)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_JFHFONPMKAD_OFFSET UNITYSDK_OFFSET(0xD06A590)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_JHCANAIFFDM_OFFSET UNITYSDK_OFFSET(0xD068F30)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_KGOPCLNICGO_OFFSET UNITYSDK_OFFSET(0xD06A360)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_KJPHNMOOCNJ_OFFSET UNITYSDK_OFFSET(0xD06C2E0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_KLBPCOKCBKF_OFFSET UNITYSDK_OFFSET(0xD067F90)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD0697E0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_LDKLGJEILJN_OFFSET UNITYSDK_OFFSET(0xD06BF50)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xD0680A0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD06BEE0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD068890)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0687F0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_PHJBKPKANJJ_OFFSET UNITYSDK_OFFSET(0xD06B7D0)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_PLMDMCPNNII_OFFSET UNITYSDK_OFFSET(0xD06B080)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_POELNEBEGMA_OFFSET UNITYSDK_OFFSET(0xD069930)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_REFRESH_OFFSET UNITYSDK_OFFSET(0xD06C370)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xD068220)
#define RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0689C0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int GrounderQuadruped_TypeDefinitionIndex = 74234;

	class GrounderQuadruped : public ::RPG::Client::FullBody::Grounder
	{
	public:
		::RPG::Client::FullBody::Grounding* forelegSolver; // 0x50
		::System::Single rootRotationWeight; // 0x58
		::System::Single minRootRotation; // 0x5C
		::System::Single maxRootRotation; // 0x60
		::System::Single rootRotationSpeed; // 0x64
		::System::Single maxLegOffset; // 0x68
		::System::Single maxForeLegOffset; // 0x6C
		::System::Single maintainHeadRotationWeight; // 0x70
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* characterRoot; // 0x78
		::UnityEngine::Transform* pelvis; // 0x80
		::UnityEngine::Transform* lastSpineBone; // 0x88
		::UnityEngine::Transform* head; // 0x90
		::Il2CppArray<::RPG::Client::FullBody::NewIK*>* legs; // 0x98
		::Il2CppArray<::RPG::Client::FullBody::NewIK*>* forelegs; // 0xA0
		::UnityEngine::Vector3 gravity; // 0xA8
		::System::Single BlendInTime; // 0xB4
		::System::Single BlendOutTime; // 0xB8
		::System::Single ICFAFBBLJPG; // 0xBC
		::Il2CppArray<::System::Object*>* BKFPKONBHJM; // 0xC0
		::UnityEngine::Vector3 IFBHPFNOMCC; // 0xC8
		::UnityEngine::Quaternion NJPHNPJMMKH; // 0xD4
		::UnityEngine::Quaternion HJPEPEBANAI; // 0xE4
		::UnityEngine::Vector3 BCLJMBJAJGK; // 0xF4
		::UnityEngine::Quaternion FKKEPDGBJGN; // 0x100
		::UnityEngine::Quaternion AEJEFGFHJCI; // 0x110
		::System::Int32 OKBAGLLKLHF; // 0x120
		::System::Boolean HDGAJBNDMLK; // 0x124
		::System::Byte _padding1[0x3];
		::System::Single JEJPHFEPFPN; // 0x128
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* JHMEBMOPHKC; // 0x130
		::UnityEngine::Quaternion ICAKHEBFIPE; // 0x138
		::System::Single FALEKIMKIIM; // 0x148
		::System::Byte _padding3[0x4];
		::UnityEngine::Rigidbody* ADFHLPONDMA; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_CTOR_OFFSET))(this);
		}

		::System::Void HHKCHIOIDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_HHKCHIOIDOF_OFFSET))(this);
		}

		::System::Void KLBPCOKCBKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_KLBPCOKCBKF_OFFSET))(this);
		}

		::System::Boolean get_IsIKUpdateEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_ISIKUPDATEENABLED_OFFSET))(this);
		}

		::System::Single get_FinalWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GET_FINALWEIGHT_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_MANUALUPDATE_OFFSET))(this, a1);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ForceReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_FORCERESET_OFFSET))(this);
		}

		::System::Boolean GAMKDHFCDMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GAMKDHFCDMB_OFFSET))(this);
		}

		::System::Boolean EGLDDKDBDPL(::Il2CppArray<::RPG::Client::FullBody::NewIK*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::NewIK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_EGLDDKDBDPL_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_UPDATE_OFFSET))(this);
		}

		::System::Void HFKPDBKJJAA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_HFKPDBKJJAA_OFFSET))(this, a1);
		}

		::System::Void ACDPBPKPKGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ACDPBPKPKGE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* JHCANAIFFDM(::Il2CppArray<::RPG::Client::FullBody::NewIK*>* a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::NewIK*>*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_JHCANAIFFDM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_LATEUPDATE_OFFSET))(this);
		}

		::System::Void POELNEBEGMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_POELNEBEGMA_OFFSET))(this);
		}

		::UnityEngine::Vector3 KGOPCLNICGO(::RPG::Client::FullBody::Grounding* a1, ::RPG::Client::FullBody::Grounding* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::Grounding*, ::RPG::Client::FullBody::Grounding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_KGOPCLNICGO_OFFSET))(this, a1, a2);
		}

		::System::Void JFHFONPMKAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_JFHFONPMKAD_OFFSET))(this);
		}

		::System::Void PLMDMCPNNII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_PLMDMCPNNII_OFFSET))(this);
		}

		::System::Void PHJBKPKANJJ(::RPG::Client::FullBody::GrounderQuadruped_HPFNMMMLOAG a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::GrounderQuadruped_HPFNMMMLOAG, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_PHJBKPKANJJ_OFFSET))(this, a1, a2);
		}

		::System::Void EBFCNBBOJAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_EBFCNBBOJAC_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_ONDESTROY_OFFSET))(this);
		}

		::System::Void LDKLGJEILJN(::Il2CppArray<::RPG::Client::FullBody::NewIK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::NewIK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_LDKLGJEILJN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GPFKLFIHMHG()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_GPFKLFIHMHG_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KJPHNMOOCNJ()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_KJPHNMOOCNJ_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDERQUADRUPED_REFRESH_OFFSET))(this);
		}

	};
}
