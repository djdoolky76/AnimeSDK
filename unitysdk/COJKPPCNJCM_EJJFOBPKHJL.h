#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class COJKPPCNJCM_CKCFDPFMCDG;
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace UnityEngine { class GameObject; }

#define COJKPPCNJCM_EJJFOBPKHJL_NIODCHBPMGO_OFFSET UNITYSDK_OFFSET(0x145DB7B0)
#define COJKPPCNJCM_EJJFOBPKHJL__CTOR_OFFSET UNITYSDK_OFFSET(0x145DB7A0)

inline static constexpr unsigned int COJKPPCNJCM_EJJFOBPKHJL_TypeDefinitionIndex = 52984;

class COJKPPCNJCM_EJJFOBPKHJL : public ::System::Object
{
public:
	::COJKPPCNJCM_CKCFDPFMCDG* FGBNBFHOKAA; // 0x10
	::MoleMole::Config::ConfigDynamicAttachItem* HPMLJEOPMFM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJKPPCNJCM_EJJFOBPKHJL__CTOR_OFFSET))(this);
	}

	::System::Void NIODCHBPMGO(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + COJKPPCNJCM_EJJFOBPKHJL_NIODCHBPMGO_OFFSET))(this, CJBJONJDOLI, NJOAJLDJCCJ);
	}
};
