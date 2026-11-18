#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F9EF460)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F9EF880)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F9EF8E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F9EF890)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F9EF450)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9EF440)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerRoot__ConvertTexturesToReadableFormats_d__5_TypeDefinitionIndex = 96310;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class MB3_TextureCombinerPackerRoot__ConvertTexturesToReadableFormats_d__5 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x10
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x18
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CONVERTTEXTURESTOREADABLEFORMATS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
