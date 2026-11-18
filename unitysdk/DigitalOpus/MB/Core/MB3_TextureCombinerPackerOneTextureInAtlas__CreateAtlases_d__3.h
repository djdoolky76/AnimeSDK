#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F9306E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F930A10)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F930A70)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F930A20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F9306D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9306C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3_TypeDefinitionIndex = 96358;

	template <typename T1, typename T2, typename T3>
	class MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x18
		::Il2CppArray<::UnityEngine::Texture2D*>* atlases; // 0x20
		::System::Int32 __1__state; // 0x28
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERONETEXTUREINATLAS__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
