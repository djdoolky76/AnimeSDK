#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F6BEC30)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F6BEDE0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F6BEE40)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F6BEDF0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F6BEC20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6BEC10)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__82_TypeDefinitionIndex = 96316;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82>
	class MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__82 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* packingResults; // 0x10
		::MB_AtlasesAndRects* resultAtlasesAndRects; // 0x18
		::UnityEngine::Material* resultMaterial; // 0x20
		::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* coroutineResult; // 0x28
		::DigitalOpus::MB::Core::MB3_TextureCombiner* __4__this; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore; // 0x38
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x40
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x48
		::System::Object* __2__current; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh; // 0x60
		::System::Single maxTimePerFrame; // 0x68
		::System::Int32 __1__state; // 0x6C
		::System::Boolean onlyPackRects; // 0x70
		::System::Boolean splitAtlasWhenPackingIfTooBig; // 0x71

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASESCOROUTINE_D__82_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
