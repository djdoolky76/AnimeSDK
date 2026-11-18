#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MFCLGIJBDGN_NLMCDPKBECL_HGPIGHPEHGK_OFFSET UNITYSDK_OFFSET(0x14DDF6A0)
#define MFCLGIJBDGN_NLMCDPKBECL__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDF690)

inline static constexpr unsigned int MFCLGIJBDGN_NLMCDPKBECL_TypeDefinitionIndex = 71154;

class MFCLGIJBDGN_NLMCDPKBECL : public ::System::Object
{
public:
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* ADNIDJNEDGO; // 0x10
	::UnityEngine::Transform* JNLBPMKIFNK; // 0x18
	::Foundation::AssetPath BLIGEBLANDA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_NLMCDPKBECL__CTOR_OFFSET))(this);
	}

	::System::Void HGPIGHPEHGK(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle IGHCFKEAKOD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MFCLGIJBDGN_NLMCDPKBECL_HGPIGHPEHGK_OFFSET))(this, NGLKIKLLLFL, IGHCFKEAKOD);
	}
};
