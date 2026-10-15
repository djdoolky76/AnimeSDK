#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Object; }

#define PPEHOFBJEHE___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC378AB0)
#define PPEHOFBJEHE___C__DISPLAYCLASS8_0__ONOBJECTCREATEDASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xC379570)

inline static constexpr unsigned int PPEHOFBJEHE___c__DisplayClass8_0_TypeDefinitionIndex = 70787;

	class PPEHOFBJEHE___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::UnityEngine::MeshFilter* mesh; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEHOFBJEHE___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnObjectCreatedAsync_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PPEHOFBJEHE___C__DISPLAYCLASS8_0__ONOBJECTCREATEDASYNC_B__0_OFFSET))(this, a1);
		}

	};
