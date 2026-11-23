#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define B07D7874FE785C91_B75BF47525FED7D5_OFFSET UNITYSDK_OFFSET(0x422B120)
#define B07D7874FE785C91_BF5D8F7B55CDE740_OFFSET UNITYSDK_OFFSET(0x422B1B0)
#define B07D7874FE785C91_E6CE9C3B43107374_OFFSET UNITYSDK_OFFSET(0x422B340)
#define B07D7874FE785C91_E8F464CA5B6DD02B_OFFSET UNITYSDK_OFFSET(0x422B780)
#define B07D7874FE785C91__CCTOR_OFFSET UNITYSDK_OFFSET(0x422B930)

inline static constexpr unsigned int B07D7874FE785C91_TypeDefinitionIndex = 18524;

class B07D7874FE785C91 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_FC33D3875CD45518()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(B07D7874FE785C91_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B75BF47525FED7D5(::UnityEngine::RectTransform* BF42527D78593A65, ::UnityEngine::Vector2 AE0873632AEB938C, ::UnityEngine::Vector2 A4D46DC01967CCCC)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + B07D7874FE785C91_B75BF47525FED7D5_OFFSET))(BF42527D78593A65, AE0873632AEB938C, A4D46DC01967CCCC);
	}

	static ::System::Void BF5D8F7B55CDE740(::UnityEngine::RectTransform* BF42527D78593A65, ::UnityEngine::Vector2 B224C0AF076834BC)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + B07D7874FE785C91_BF5D8F7B55CDE740_OFFSET))(BF42527D78593A65, B224C0AF076834BC);
	}

	static ::UnityEngine::Vector3 E8F464CA5B6DD02B(::UnityEngine::RectTransform* B856F1DD25F702CF)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + B07D7874FE785C91_E8F464CA5B6DD02B_OFFSET))(B856F1DD25F702CF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B07D7874FE785C91__CCTOR_OFFSET))();
	}

	static ::System::Void E6CE9C3B43107374(::UnityEngine::RectTransform* B856F1DD25F702CF, ::UnityEngine::Vector2 E937D4885DAA1AE8, ::System::Boolean B851BE4CBC33501F)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + B07D7874FE785C91_E6CE9C3B43107374_OFFSET))(B856F1DD25F702CF, E937D4885DAA1AE8, B851BE4CBC33501F);
	}
};
