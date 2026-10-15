#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAGHOLOAMHP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EIJDPLEBFPG;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define GDOMKEEOFFI_AGDBMIJPFPG_OFFSET UNITYSDK_OFFSET(0x159B5AC0)
#define GDOMKEEOFFI_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x159B6230)
#define GDOMKEEOFFI_CMMIEGBJACE_OFFSET UNITYSDK_OFFSET(0x159B5B20)
#define GDOMKEEOFFI_CTOR_OFFSET UNITYSDK_OFFSET(0x159B3EF0)
#define GDOMKEEOFFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159B64D0)
#define GDOMKEEOFFI_FMKAGFFOLBJ_OFFSET UNITYSDK_OFFSET(0x159B5C00)
#define GDOMKEEOFFI_GET_FOLLOWTARGETVELOCITY_OFFSET UNITYSDK_OFFSET(0x159B3F80)
#define GDOMKEEOFFI_GET_FOLLOWYAW_OFFSET UNITYSDK_OFFSET(0x159B3F60)
#define GDOMKEEOFFI_GET_LEADERTARGETPOS_OFFSET UNITYSDK_OFFSET(0x159B3F20)
#define GDOMKEEOFFI_IJGAIPGKHGM_OFFSET UNITYSDK_OFFSET(0x159B3FC0)
#define GDOMKEEOFFI_KFMHGLHBINF_OFFSET UNITYSDK_OFFSET(0x159B6390)
#define GDOMKEEOFFI_KGNDAJOGAJN_OFFSET UNITYSDK_OFFSET(0x159B4F90)
#define GDOMKEEOFFI_NAOICPBEFOG_OFFSET UNITYSDK_OFFSET(0x159B4CC0)
#define GDOMKEEOFFI_NBFGPNJMMAH_OFFSET UNITYSDK_OFFSET(0x159B5810)
#define GDOMKEEOFFI_NDHONPKINFO_OFFSET UNITYSDK_OFFSET(0x159B49E0)
#define GDOMKEEOFFI_NMANAPOEFGO_OFFSET UNITYSDK_OFFSET(0x159B6520)
#define GDOMKEEOFFI_NPJCJHBJLHA_OFFSET UNITYSDK_OFFSET(0x159B6670)
#define GDOMKEEOFFI_OBKCOJGFBEI_OFFSET UNITYSDK_OFFSET(0x159B5600)
#define GDOMKEEOFFI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x159B4520)
#define GDOMKEEOFFI_PCALMEJLJFJ_OFFSET UNITYSDK_OFFSET(0x159B6450)
#define GDOMKEEOFFI_SET_FOLLOWTARGETVELOCITY_OFFSET UNITYSDK_OFFSET(0x159B3FA0)
#define GDOMKEEOFFI_SET_FOLLOWYAW_OFFSET UNITYSDK_OFFSET(0x159B3F70)
#define GDOMKEEOFFI_SET_LEADERTARGETPOS_OFFSET UNITYSDK_OFFSET(0x159B3F40)

inline static constexpr unsigned int GDOMKEEOFFI_TypeDefinitionIndex = 53508;

	class GDOMKEEOFFI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JKLFGAPHING; // 0x10
		::EIJDPLEBFPG* IEPCIODGJJD; // 0x18
		::LAGHOLOAMHP BGDDKFHKAKM; // 0x20
		::RPG::GameCore::GameEntity* DIHCNFOOEFF; // 0x60
		::UnityEngine::Quaternion _FollowYaw_k__BackingField; // 0x68
		::UnityEngine::Vector3 GFAJINELEBN; // 0x78
		::System::Boolean JDNKBDPGNDK; // 0x84
		::System::Boolean HFGEINNJADO; // 0x85
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 _FollowTargetVelocity_k__BackingField; // 0x88
		::UnityEngine::Vector3 _LeaderTargetPos_k__BackingField; // 0x94
		// static const ::System::Object GLNIJIJBJPD; // 0x0
		// static const ::System::Object GPPJGOCCIMN; // 0x0
		// static const ::System::Object DKAALAJKACI; // 0x0
		::System::Void _ctor(::LAGHOLOAMHP a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAGHOLOAMHP))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LeaderTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_GET_LEADERTARGETPOS_OFFSET))(this);
		}

		::System::Void set_LeaderTargetPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_SET_LEADERTARGETPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_FollowYaw()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_GET_FOLLOWYAW_OFFSET))(this);
		}

		::System::Void set_FollowYaw(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_SET_FOLLOWYAW_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_FollowTargetVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_GET_FOLLOWTARGETVELOCITY_OFFSET))(this);
		}

		::System::Void set_FollowTargetVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_SET_FOLLOWTARGETVELOCITY_OFFSET))(this, a1);
		}

		static ::System::Boolean IJGAIPGKHGM(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_IJGAIPGKHGM_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void PAGKOAEOLKA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NAOICPBEFOG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_NAOICPBEFOG_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 KGNDAJOGAJN(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_KGNDAJOGAJN_OFFSET))(this, a1, a2);
		}

		::System::Void NBFGPNJMMAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_NBFGPNJMMAH_OFFSET))(this);
		}

		::System::Boolean AGDBMIJPFPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_AGDBMIJPFPG_OFFSET))(this);
		}

		::System::Boolean CMMIEGBJACE(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_CMMIEGBJACE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FMKAGFFOLBJ(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_FMKAGFFOLBJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BJPFKNECHPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_BJPFKNECHPL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_DISPOSE_OFFSET))(this);
		}

		::System::Void NDHONPKINFO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_NDHONPKINFO_OFFSET))(this, a1, a2);
		}

		static ::System::Void PCALMEJLJFJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_PCALMEJLJFJ_OFFSET))(a1);
		}

		::System::Void NMANAPOEFGO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_NMANAPOEFGO_OFFSET))(this, a1);
		}

		::System::Void KFMHGLHBINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_KFMHGLHBINF_OFFSET))(this);
		}

		::System::Void NPJCJHBJLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_NPJCJHBJLHA_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 OBKCOJGFBEI(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDOMKEEOFFI_OBKCOJGFBEI_OFFSET))(a1, a2, a3);
		}

	};
