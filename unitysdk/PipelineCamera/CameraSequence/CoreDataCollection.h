#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_GETCONTEXTTYPENAMEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1F500D30)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1F500DF0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F500F70)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F500F10)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION___BASE_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1F5010C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollection_TypeDefinitionIndex = 36541;

	class CoreDataCollection
	{
	public:
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>** StaticGet_ContextTypeName()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CoreDataCollection_TypeDefinitionIndex)->GetStaticField(0x2B8E0);
		}
		static ::System::Func_2<::System::String*, ::System::Type*>** StaticGet_GetContextTypeByNameDelegate()
		{
			return (::System::Func_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(CoreDataCollection_TypeDefinitionIndex)->GetStaticField(0x2B8E8);
		}
		::System::String* contextTypeName; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CCTOR_OFFSET))();
		}

		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* GetContextTypeNameDropdown()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_GETCONTEXTTYPENAMEDROPDOWN_OFFSET))();
		}

		::System::Type* GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_GETCONTEXTTYPE_OFFSET))(this);
		}

		::System::Type* __base_GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION___BASE_GETCONTEXTTYPE_OFFSET))(this);
		}
	};
}
