#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB_ITextureCombinerPacker; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FB99690)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FB9A510)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FB9A570)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FB9A520)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB99680)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB99670)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14_TypeDefinitionIndex = 96370;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x10
		::DigitalOpus::MB::Core::AtlasPackingResult* atlasPackingResult; // 0x18
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x20
		::Il2CppArray<::UnityEngine::Texture2D*>* _atlases_5__3; // 0x28
		::System::Object* __2__current; // 0x30
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x38
		::System::Text::StringBuilder* report; // 0x40
		::MB_AtlasesAndRects* resultAtlasesAndRects; // 0x48
		::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* packer; // 0x50
		::System::Diagnostics::Stopwatch* _sw_5__2; // 0x58
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* __4__this; // 0x60
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x68
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x70
		::System::Int32 __1__state; // 0x74

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
