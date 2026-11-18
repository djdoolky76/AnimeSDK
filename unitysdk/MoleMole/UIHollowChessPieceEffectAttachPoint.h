#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWCHESSPIECEEFFECTATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F22F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessPieceEffectAttachPoint_TypeDefinitionIndex = 55629;

	class UIHollowChessPieceEffectAttachPoint : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::GameObject*>* attachPoints; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEEFFECTATTACHPOINT__CTOR_OFFSET))(this);
		}
	};
}
