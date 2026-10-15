#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPEICPLLKIP;
class NGFHCJIAOLH;
namespace UnityEngine { class Transform; }

#define FPEICPLLKIP___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15909870)
#define FPEICPLLKIP___C__DISPLAYCLASS23_0__LOCKCELL_B__0_OFFSET UNITYSDK_OFFSET(0x1590CC00)

inline static constexpr unsigned int FPEICPLLKIP___c__DisplayClass23_0_TypeDefinitionIndex = 77765;

	class FPEICPLLKIP___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Boolean isHighlight; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _LockCell_b__0(::FPEICPLLKIP* a1, ::NGFHCJIAOLH* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPEICPLLKIP*, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP___C__DISPLAYCLASS23_0__LOCKCELL_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
