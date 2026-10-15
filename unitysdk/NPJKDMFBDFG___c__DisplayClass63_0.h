#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class Object; }

#define NPJKDMFBDFG___C__DISPLAYCLASS63_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD08880)
#define NPJKDMFBDFG___C__DISPLAYCLASS63_0__PRELOADPROPERTYRESOURCESWITHHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0xBD0C800)

inline static constexpr unsigned int NPJKDMFBDFG___c__DisplayClass63_0_TypeDefinitionIndex = 49436;

	class NPJKDMFBDFG___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Action* __9__0; // 0x10
		::System::Int32 h; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS63_0_CTOR_OFFSET))(this);
		}

		::System::Void _PreloadPropertyResourcesWithHandle_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS63_0__PRELOADPROPERTYRESOURCESWITHHANDLE_B__0_OFFSET))(this, a1);
		}

	};
