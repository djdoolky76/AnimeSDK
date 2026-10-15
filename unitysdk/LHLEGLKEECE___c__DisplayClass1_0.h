#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHLEGLKEECE;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define LHLEGLKEECE___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B2BF0)
#define LHLEGLKEECE___C__DISPLAYCLASS1_0__LOADART_B__0_OFFSET UNITYSDK_OFFSET(0xB6B39F0)

inline static constexpr unsigned int LHLEGLKEECE___c__DisplayClass1_0_TypeDefinitionIndex = 57333;

	class LHLEGLKEECE___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::String* artAssetPath; // 0x10
		::LHLEGLKEECE* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadArt_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LHLEGLKEECE___C__DISPLAYCLASS1_0__LOADART_B__0_OFFSET))(this, a1);
		}

	};
