#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class HNLPBPGMJMF;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define HNLPBPGMJMF_DBAKOCOBJJN_LGHIPHODNNP_OFFSET UNITYSDK_OFFSET(0x12E90BB0)
#define HNLPBPGMJMF_DBAKOCOBJJN__CTOR_OFFSET UNITYSDK_OFFSET(0x12E90BA0)

inline static constexpr unsigned int HNLPBPGMJMF_DBAKOCOBJJN_TypeDefinitionIndex = 86287;

class HNLPBPGMJMF_DBAKOCOBJJN : public ::System::Object
{
public:
	::System::Action* DBDMBOLBPGP; // 0x10
	::System::Action* HKEBHFKHBCC; // 0x18
	::HNLPBPGMJMF* KLHPEBKNIFB; // 0x20
	::System::Int32 JHFKDGBCOBA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_DBAKOCOBJJN__CTOR_OFFSET))(this);
	}

	::System::Void LGHIPHODNNP(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_DBAKOCOBJJN_LGHIPHODNNP_OFFSET))(this, OIIHCACKLHD, NJOAJLDJCCJ);
	}
};
