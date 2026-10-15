#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUSASSET_STATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF1C40)

inline static constexpr unsigned int HipplenBuilderStatusAsset_StatConfig_TypeDefinitionIndex = 47230;

	class HipplenBuilderStatusAsset_StatConfig : public ::System::Object
	{
	public:
		::HipplenBuilderStatus_StatType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::System::String* NameNegative; // 0x20
		::UnityEngine::Vector2Int Range; // 0x28
		::System::Int32 DefaultValue; // 0x30
		::System::Boolean IsShow; // 0x34
		::System::Byte _padding1[0x3];
		::System::Collections::Generic::List_1<::System::Object*>* Grades; // 0x38
		::System::Int32 WarningValue; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUSASSET_STATCONFIG_CTOR_OFFSET))(this);
		}

	};
