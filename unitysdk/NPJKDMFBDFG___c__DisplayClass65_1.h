#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGPPIHLOFF;
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define NPJKDMFBDFG___C__DISPLAYCLASS65_1_CTOR_OFFSET UNITYSDK_OFFSET(0xBD01E40)
#define NPJKDMFBDFG___C__DISPLAYCLASS65_1__PRELOADPROPERTYRESOURCESSYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBD05720)

inline static constexpr unsigned int NPJKDMFBDFG___c__DisplayClass65_1_TypeDefinitionIndex = 49439;

	template <typename T>
	class NPJKDMFBDFG___c__DisplayClass65_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::ODGPPIHLOFF* hs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS65_1_CTOR_OFFSET))(this);
		}

		::System::Void _PreloadPropertyResourcesSync_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS65_1__PRELOADPROPERTYRESOURCESSYNC_B__0_OFFSET))(this, a1);
		}

	};
