#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginPlanarReflection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define EIMNOLKFMPJ_COHCEENHLJK_OFFSET UNITYSDK_OFFSET(0x154C66F0)
#define EIMNOLKFMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x154C6E60)
#define EIMNOLKFMPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154C5EB0)
#define EIMNOLKFMPJ_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x154C66A0)
#define EIMNOLKFMPJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x154C5E40)
#define EIMNOLKFMPJ_LBNOHGNPMHL_OFFSET UNITYSDK_OFFSET(0x154C6A60)
#define EIMNOLKFMPJ_LKJHGDJACNB_OFFSET UNITYSDK_OFFSET(0x154C5F90)
#define EIMNOLKFMPJ_NFPLMGFDMIK_OFFSET UNITYSDK_OFFSET(0x154C6960)
#define EIMNOLKFMPJ_NJHJIOLNDMM_OFFSET UNITYSDK_OFFSET(0x154C6C90)

inline static constexpr unsigned int EIMNOLKFMPJ_TypeDefinitionIndex = 69891;

	class EIMNOLKFMPJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* BLOMOEJJCIK; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CLOPCKJCLMD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void LKJHGDJACNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_LKJHGDJACNB_OFFSET))(this);
		}

		::System::Void COHCEENHLJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_COHCEENHLJK_OFFSET))(this);
		}

		::System::Void NFPLMGFDMIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_NFPLMGFDMIK_OFFSET))(this);
		}

		::System::Void LBNOHGNPMHL(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_LBNOHGNPMHL_OFFSET))(this, a1, a2);
		}

		::System::Void NJHJIOLNDMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_NJHJIOLNDMM_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginPlanarReflection* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginPlanarReflection*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNOLKFMPJ_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
