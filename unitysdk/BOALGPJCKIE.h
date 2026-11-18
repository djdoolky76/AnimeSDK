#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIThreeDMapConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
template <typename T> class NDLMEHOBEDF_1;

#define BOALGPJCKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E11220)

inline static constexpr unsigned int BOALGPJCKIE_TypeDefinitionIndex = 51652;

class BOALGPJCKIE : public ::System::Object
{
public:
	::NDLMEHOBEDF_1<::UnityEngine::GameObject*>* CKHAPKMNBMG; // 0x10
	::UnityEngine::GameObject* BJONDKFLOFA; // 0x18
	::System::String* ELABHAFEEDI; // 0x20
	::MoleMole::UIThreeDMapConfig* CCBPDFLPGLA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOALGPJCKIE__CTOR_OFFSET))(this);
	}
};
