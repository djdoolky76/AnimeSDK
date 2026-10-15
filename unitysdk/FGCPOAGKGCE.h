#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SkillCounterItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FGCPOAGKGCE_CAKOHLBDKGO_OFFSET UNITYSDK_OFFSET(0x15753FA0)
#define FGCPOAGKGCE_CTOR_OFFSET UNITYSDK_OFFSET(0x15754300)
#define FGCPOAGKGCE_EBIHCCJFCPA_OFFSET UNITYSDK_OFFSET(0x15754240)
#define FGCPOAGKGCE_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x15753E50)
#define FGCPOAGKGCE_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15753DA0)
#define FGCPOAGKGCE_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x15753EA0)

inline static constexpr unsigned int FGCPOAGKGCE_TypeDefinitionIndex = 72378;

	class FGCPOAGKGCE : public ::System::Object
	{
	public:
		::RPG::Client::PrefabLoadMeta* BFACGOBBOBH; // 0x10
		::UnityEngine::GameObject* BPEEKJFKHNI; // 0x18
		::UnityEngine::Transform* LKECMFKKOHA; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SkillCounterItem*>* LKICMLJHCAK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCPOAGKGCE_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FGCPOAGKGCE_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCPOAGKGCE_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCPOAGKGCE_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void CAKOHLBDKGO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGCPOAGKGCE_CAKOHLBDKGO_OFFSET))(this, a1);
		}

		::System::Void EBIHCCJFCPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGCPOAGKGCE_EBIHCCJFCPA_OFFSET))(this, a1);
		}

	};
