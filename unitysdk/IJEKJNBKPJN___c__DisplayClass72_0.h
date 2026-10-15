#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJEKJNBKPJN;
namespace UnityEngine { class Material; }

#define IJEKJNBKPJN___C__DISPLAYCLASS72_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16456000)
#define IJEKJNBKPJN___C__DISPLAYCLASS72_0__ASYNCLOADMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0x16458610)

inline static constexpr unsigned int IJEKJNBKPJN___c__DisplayClass72_0_TypeDefinitionIndex = 57149;

	class IJEKJNBKPJN___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::IJEKJNBKPJN* __4__this; // 0x10
		::System::Int32 index; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN___C__DISPLAYCLASS72_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadMaterial_b__0(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN___C__DISPLAYCLASS72_0__ASYNCLOADMATERIAL_B__0_OFFSET))(this, a1);
		}

	};
