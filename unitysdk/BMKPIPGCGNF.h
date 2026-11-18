#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define BMKPIPGCGNF_BOBJBPEFLND_OFFSET UNITYSDK_OFFSET(0xF7B16C0)
#define BMKPIPGCGNF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF7B12F0)
#define BMKPIPGCGNF_GNNHIEBFAOE_OFFSET UNITYSDK_OFFSET(0xF7B1AE0)
#define BMKPIPGCGNF_MJKAGOOOCOK_OFFSET UNITYSDK_OFFSET(0xF7B1A40)
#define BMKPIPGCGNF_PKHNDPNIAKB_OFFSET UNITYSDK_OFFSET(0xF7B21F0)
#define BMKPIPGCGNF__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B16B0)

inline static constexpr unsigned int BMKPIPGCGNF_TypeDefinitionIndex = 74082;

class BMKPIPGCGNF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* BJEJDAIGCHJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Action_1<::UnityEngine::GameObject*>*>* AAHNMEMMHHL; // 0x18
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>* KPAJMFBGMOP; // 0x20
	::System::Boolean BNEDIEDEPNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKPIPGCGNF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKPIPGCGNF_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::GameObject* BOBJBPEFLND(::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BMKPIPGCGNF_BOBJBPEFLND_OFFSET))(this, OIIHCACKLHD);
	}

	::System::Void MJKAGOOOCOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKPIPGCGNF_MJKAGOOOCOK_OFFSET))(this);
	}

	::System::Void GNNHIEBFAOE(::Foundation::AssetPath OIIHCACKLHD, ::System::Action_1<::UnityEngine::GameObject*>* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + BMKPIPGCGNF_GNNHIEBFAOE_OFFSET))(this, OIIHCACKLHD, PABLEDCGDGM);
	}

	::System::Void PKHNDPNIAKB(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMKPIPGCGNF_PKHNDPNIAKB_OFFSET))(this, OIIHCACKLHD, ECMMKCJLBMD);
	}
};
