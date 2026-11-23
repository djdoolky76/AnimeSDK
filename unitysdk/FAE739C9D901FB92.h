#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B501F039F458858A.h"

class A17FBCB2168BAF13;
class AB642D1382756991;
class B87D69F1029E8A3F;
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define FAE739C9D901FB92_A2A92DD003889226_OFFSET UNITYSDK_OFFSET(0x1DC31F0)
#define FAE739C9D901FB92_A46287E2C5D70123_OFFSET UNITYSDK_OFFSET(0x1DC2B50)
#define FAE739C9D901FB92_A966BA971E7B1EFF_OFFSET UNITYSDK_OFFSET(0x1DC2D70)
#define FAE739C9D901FB92_A9C173A0FC389BC7_OFFSET UNITYSDK_OFFSET(0x1DC28E0)
#define FAE739C9D901FB92_E505E5CA1C303862_OFFSET UNITYSDK_OFFSET(0x1DC2600)
#define FAE739C9D901FB92_EAD05053211DC2BB_OFFSET UNITYSDK_OFFSET(0x1DC29E0)
#define FAE739C9D901FB92_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1DC2770)
#define FAE739C9D901FB92__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC35E0)

inline static constexpr unsigned int FAE739C9D901FB92_TypeDefinitionIndex = 9369;

class FAE739C9D901FB92 : public ::B501F039F458858A
{
public:
	::ABC::UI::MonoPrefabLoader* EDBD717E2B0F1C64; // 0x90
	::System::Collections::Generic::List_1<::System::Int32>* B3E1C01E625D9A8E; // 0x98
	::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* B1FB8BE5FE4CA739; // 0xA0
	::System::Collections::Generic::List_1<::B87D69F1029E8A3F*>* E071E38F760F330D; // 0xA8

	::System::Void E505E5CA1C303862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_E505E5CA1C303862_OFFSET))(this);
	}

	::System::Void EAD05053211DC2BB(::System::String* E69DD8BDFB875F87)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_EAD05053211DC2BB_OFFSET))(this, E69DD8BDFB875F87);
	}

	::System::Void A966BA971E7B1EFF(::AB642D1382756991* E940BFE34B1F4BEF, ::System::UInt32 BC8A36DD3606E794, ::System::UInt32 E14961743E675799, ::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_A966BA971E7B1EFF_OFFSET))(this, E940BFE34B1F4BEF, BC8A36DD3606E794, E14961743E675799, EFE497ABF6BF98D8);
	}

	::System::Void A2A92DD003889226(::System::Collections::Generic::Dictionary_2<::System::String*, ::A17FBCB2168BAF13*>* F6CA1EF00696A87A, ::AB642D1382756991* E940BFE34B1F4BEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::A17FBCB2168BAF13*>*, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_A2A92DD003889226_OFFSET))(this, F6CA1EF00696A87A, E940BFE34B1F4BEF);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_FCC7443573DD0222_OFFSET))(this);
	}

	::System::String* A9C173A0FC389BC7(::AB642D1382756991* E940BFE34B1F4BEF, ::System::String* EFCCA77DD198926A)
	{
		return ((::System::String*(*)(::PVOID, ::AB642D1382756991*, ::System::String*))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_A9C173A0FC389BC7_OFFSET))(this, E940BFE34B1F4BEF, EFCCA77DD198926A);
	}

	::System::Void A46287E2C5D70123()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAE739C9D901FB92_A46287E2C5D70123_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + FAE739C9D901FB92__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}
};
