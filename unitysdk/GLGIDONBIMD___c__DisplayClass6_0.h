#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLGIDONBIMD;
class MEHINBDPFCF;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define GLGIDONBIMD___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16A33EE0)
#define GLGIDONBIMD___C__DISPLAYCLASS6_0__LOADBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x16A341E0)
#define GLGIDONBIMD___C__DISPLAYCLASS6_0__LOADBLOCK_B__1_OFFSET UNITYSDK_OFFSET(0x16A34350)
#define GLGIDONBIMD___C__DISPLAYCLASS6_0__LOADBLOCK_B__2_OFFSET UNITYSDK_OFFSET(0x16A34390)

inline static constexpr unsigned int GLGIDONBIMD___c__DisplayClass6_0_TypeDefinitionIndex = 50165;

	class GLGIDONBIMD___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MEHINBDPFCF* loadingTask; // 0x10
		::GLGIDONBIMD* __4__this; // 0x18
		::System::String* name; // 0x20
		::System::Int32 blockResHandle; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGIDONBIMD___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadBlock_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GLGIDONBIMD___C__DISPLAYCLASS6_0__LOADBLOCK_B__0_OFFSET))(this, a1);
		}

		::System::Void _LoadBlock_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGIDONBIMD___C__DISPLAYCLASS6_0__LOADBLOCK_B__1_OFFSET))(this);
		}

		::System::Void _LoadBlock_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLGIDONBIMD___C__DISPLAYCLASS6_0__LOADBLOCK_B__2_OFFSET))(this, a1);
		}

	};
