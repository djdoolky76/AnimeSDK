#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EE47AE4E33AE9478;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define EE47AE4E33AE9478_B5268C27211B8C3B_F0FB5BC4A9AC59AA_OFFSET UNITYSDK_OFFSET(0x39B83E0)
#define EE47AE4E33AE9478_B5268C27211B8C3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EE47AE4E33AE9478_B5268C27211B8C3B_TypeDefinitionIndex = 12568;

class EE47AE4E33AE9478_B5268C27211B8C3B : public ::System::Object
{
public:
	::EE47AE4E33AE9478* A544919C800E2923; // 0x10
	::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_B5268C27211B8C3B__CTOR_OFFSET))(this);
	}

	::System::Void F0FB5BC4A9AC59AA(::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_B5268C27211B8C3B_F0FB5BC4A9AC59AA_OFFSET))(this, B960AC235824C6C8);
	}
};
