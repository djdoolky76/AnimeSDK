#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDEREND_OFFSET UNITYSDK_OFFSET(0x1C0BFDC0)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDERSTART_OFFSET UNITYSDK_OFFSET(0x1C0BFD20)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_ISEND_OFFSET UNITYSDK_OFFSET(0x1C0BFE10)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_NEXTLOOP_OFFSET UNITYSDK_OFFSET(0x1C0BFE70)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_RESET_OFFSET UNITYSDK_OFFSET(0x1C0BFD70)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C0BFEB0)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C0210)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C0C0220)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetLoopFrame_TypeDefinitionIndex = 39273;

	class TextureSheetLoopFrame : public ::System::Object
	{
	public:
		::System::Int32 startFrame; // 0x10
		::System::Int32 curLoopCount; // 0x14
		::System::Int32 loopCount; // 0x18
		::System::Int32 endFrame; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME__CTOR_OFFSET))(this);
		}

		::System::Boolean ColliderStart(::System::Int32 frameIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDERSTART_OFFSET))(this, frameIndex);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_RESET_OFFSET))(this);
		}

		::System::Boolean ColliderEnd(::System::Int32 frameIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDEREND_OFFSET))(this, frameIndex);
		}

		::System::Boolean IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_ISEND_OFFSET))(this);
		}

		::System::Void NextLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_NEXTLOOP_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
