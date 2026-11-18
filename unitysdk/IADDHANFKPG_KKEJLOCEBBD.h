#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class IADDHANFKPG;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define IADDHANFKPG_KKEJLOCEBBD_HNNOAOBAHPC_OFFSET UNITYSDK_OFFSET(0x16F54B20)
#define IADDHANFKPG_KKEJLOCEBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F54B10)

inline static constexpr unsigned int IADDHANFKPG_KKEJLOCEBBD_TypeDefinitionIndex = 89926;

class IADDHANFKPG_KKEJLOCEBBD : public ::System::Object
{
public:
	::IADDHANFKPG* KLHPEBKNIFB; // 0x10
	::System::Action_2<::System::Boolean, ::IADDHANFKPG*>* HOHCHEIJNNE; // 0x18
	::System::String* ABOMFKBGCAJ; // 0x20
	::System::Int32 MBOJKAGBKPB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADDHANFKPG_KKEJLOCEBBD__CTOR_OFFSET))(this);
	}

	::System::Void HNNOAOBAHPC(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IADDHANFKPG_KKEJLOCEBBD_HNNOAOBAHPC_OFFSET))(this, CJBJONJDOLI, NJOAJLDJCCJ);
	}
};
