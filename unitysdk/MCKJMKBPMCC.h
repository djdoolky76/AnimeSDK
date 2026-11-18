#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKJMKBPMCC_LLKEPNDKGAD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define MCKJMKBPMCC_AAODEJOOCJE_OFFSET UNITYSDK_OFFSET(0x15925DC0)
#define MCKJMKBPMCC_CAKIHOCMNIA_OFFSET UNITYSDK_OFFSET(0x15925CD0)
#define MCKJMKBPMCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15925660)
#define MCKJMKBPMCC_EFLIAKBDFOL_OFFSET UNITYSDK_OFFSET(0x159257C0)
#define MCKJMKBPMCC_FPKKHHCCCAA_OFFSET UNITYSDK_OFFSET(0x15926570)
#define MCKJMKBPMCC_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x159264B0)
#define MCKJMKBPMCC_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0x15925610)
#define MCKJMKBPMCC_KOGBEJNPCDP_OFFSET UNITYSDK_OFFSET(0x159256A0)
#define MCKJMKBPMCC__CTOR_OFFSET UNITYSDK_OFFSET(0x15925600)

inline static constexpr unsigned int MCKJMKBPMCC_TypeDefinitionIndex = 47038;

class MCKJMKBPMCC : public ::System::Object
{
public:
	// static const ::System::Single LPKMDGPOEFJ; // 0x0
	::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA; // 0x10

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + MCKJMKBPMCC__CTOR_OFFSET))(this, DFMKILICPFB, LJBPECKCCEA);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_DISPOSE_OFFSET))(this);
	}

	static ::System::Void KOGBEJNPCDP(::UnityEngine::Collider* EHHHMFKHNAI, ::System::Boolean COGLEANIPPJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_KOGBEJNPCDP_OFFSET))(EHHHMFKHNAI, COGLEANIPPJ);
	}

	static ::MCKJMKBPMCC_LLKEPNDKGAD EFLIAKBDFOL(::UnityEngine::Collider* EHHHMFKHNAI, ::System::String* CEOABKCAFOF, ::Il2CppArray<::System::String*>* DGLCKFDCBOL, ::Il2CppArray<::System::String*>* DNKAKCEAGFC, ::System::Int32 GDHMBHINAAD, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>* MBMALGNKPLC)
	{
		return ((::MCKJMKBPMCC_LLKEPNDKGAD(*)(::UnityEngine::Collider*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_EFLIAKBDFOL_OFFSET))(EHHHMFKHNAI, CEOABKCAFOF, DGLCKFDCBOL, DNKAKCEAGFC, GDHMBHINAAD, MBMALGNKPLC);
	}

	static ::MCKJMKBPMCC_LLKEPNDKGAD AAODEJOOCJE(::UnityEngine::RaycastHit& NLJNLBAMKDP, ::System::Int32 CEOABKCAFOF, ::Il2CppArray<::System::Int32>* DGLCKFDCBOL, ::Il2CppArray<::System::Int32>* DNKAKCEAGFC, ::System::Int32 JMHPDOBIBLI, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>* MBMALGNKPLC)
	{
		return ((::MCKJMKBPMCC_LLKEPNDKGAD(*)(::UnityEngine::RaycastHit&, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_AAODEJOOCJE_OFFSET))(NLJNLBAMKDP, CEOABKCAFOF, DGLCKFDCBOL, DNKAKCEAGFC, JMHPDOBIBLI, MBMALGNKPLC);
	}

	static ::System::Boolean CAKIHOCMNIA(::UnityEngine::GameObject* LGHJMFNHFED, ::Il2CppArray<::System::String*>* DHJBKCJEJFM)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_CAKIHOCMNIA_OFFSET))(LGHJMFNHFED, DHJBKCJEJFM);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* GACPDCEMJOA()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_GACPDCEMJOA_OFFSET))(this);
	}

	static ::System::Boolean FPKKHHCCCAA(::System::Int32 AELLPLBJELA, ::Il2CppArray<::System::Int32>* JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MCKJMKBPMCC_FPKKHHCCCAA_OFFSET))(AELLPLBJELA, JMDOANHOEJG);
	}
};
