#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define MGHKENFHAAC___C__DISPLAYCLASS8_1_CTOR_OFFSET UNITYSDK_OFFSET(0xB91F700)
#define MGHKENFHAAC___C__DISPLAYCLASS8_1___REFRESHREPLACETVTEXTURE_B__0_OFFSET UNITYSDK_OFFSET(0xB91FC60)

inline static constexpr unsigned int MGHKENFHAAC___c__DisplayClass8_1_TypeDefinitionIndex = 57423;

	template <typename T>
	class MGHKENFHAAC___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::System::String* textureKey; // 0x10
		::System::String* texturePath; // 0x18
		::System::Object* CS___8__locals1; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC___C__DISPLAYCLASS8_1_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshReplaceTVTexture_b__0(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MGHKENFHAAC___C__DISPLAYCLASS8_1___REFRESHREPLACETVTEXTURE_B__0_OFFSET))(this, a1);
		}

	};
