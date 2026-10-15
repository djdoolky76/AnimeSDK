#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRI_HLODDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16537920)
#define IRI_HLODDATA_GETCURRENTSTAGEMATLUTPATH_OFFSET UNITYSDK_OFFSET(0x165377B0)

inline static constexpr unsigned int IRI_HlodData_TypeDefinitionIndex = 47176;

	class IRI_HlodData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* CollectedMaterialPathList; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* StageMatLutList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_HLODDATA_CTOR_OFFSET))(this);
		}

		::System::String* GetCurrentStageMatLutPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IRI_HLODDATA_GETCURRENTSTAGEMATLUTPATH_OFFSET))(this, a1);
		}

	};
